/*
 * XREFs of NtInitializeEnclave @ 0x14087D4E0
 * Callers:
 *     DifNtInitializeEnclaveWrapper @ 0x14067DA20 (DifNtInitializeEnclaveWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x140AB8BBC (MiInitializeEnclave.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  ULONG_PTR v5; // r13
  HANDLE v7; // rbx
  ULONG v8; // r12d
  void *v9; // rdi
  char PreviousMode; // r15
  int ULongFromUser; // eax
  NTSTATUS v12; // ebx
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  PVOID v17; // r14
  ULONG v19; // [rsp+48h] [rbp-B0h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  HANDLE v23; // [rsp+68h] [rbp-90h]
  PULONG v24; // [rsp+70h] [rbp-88h]
  PVOID v25; // [rsp+78h] [rbp-80h]
  _BYTE v26[48]; // [rsp+80h] [rbp-78h] BYREF

  v5 = EnclaveInformationLength;
  v25 = BaseAddress;
  v7 = ProcessHandle;
  v20 = ProcessHandle;
  v23 = ProcessHandle;
  v24 = EnclaveError;
  memset(v26, 0, sizeof(v26));
  Object = 0LL;
  v8 = 0;
  v19 = 0;
  v9 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    ULongFromUser = RtlReadULongFromUser(EnclaveError);
    RtlWriteULongToUser(EnclaveError, ULongFromUser);
  }
  if ( !(_DWORD)v5 )
    goto LABEL_13;
  if ( (unsigned int)v5 <= 0x1000 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (void *)ExAllocatePoolMm(256LL, v5, 1145400653, CurrentProcessorColor | 0x80000000);
    v9 = PoolMm;
    P = PoolMm;
    if ( !PoolMm )
    {
      v12 = -1073741670;
      goto LABEL_18;
    }
    if ( PreviousMode )
      RtlCopyFromUser(PoolMm, EnclaveInformation, v5);
    else
      RtlCopyVolatileMemory(PoolMm, EnclaveInformation, v5);
    v7 = v20;
LABEL_13:
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( v7 == (HANDLE)-1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v12 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v7, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
      if ( v12 < 0 )
        goto LABEL_18;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v26);
    }
    v12 = MiInitializeEnclave((_DWORD)Process, (_DWORD)v25, (_DWORD)v9, v5, (__int64)&v19);
    v8 = v19;
    goto LABEL_18;
  }
  v12 = -1073741820;
LABEL_18:
  v17 = Object;
  if ( Object && v20 != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess((__int64)v26, 0);
    ObfDereferenceObjectWithTag(v17, 0x6D566D4Du);
  }
  if ( EnclaveError )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(EnclaveError, v8);
    else
      *EnclaveError = v8;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v12;
}
