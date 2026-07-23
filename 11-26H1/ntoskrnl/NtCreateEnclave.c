/*
 * XREFs of NtCreateEnclave @ 0x14087D0E0
 * Callers:
 *     DifNtCreateEnclaveWrapper @ 0x140674190 (DifNtCreateEnclaveWrapper.c)
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
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MiCreateEnclave @ 0x14087C3B8 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1409F0710 (MiValidateZeroBits.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  void *v10; // r15
  char PreviousMode; // di
  int ULongFromUser; // eax
  SIZE_T v13; // r13
  NTSTATUS Enclave; // ebx
  int v15; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v17; // rax
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  void *Process; // rsi
  ULONG v22; // [rsp+58h] [rbp-C0h] BYREF
  int Sizea[3]; // [rsp+5Ch] [rbp-BCh] BYREF
  void *v24; // [rsp+68h] [rbp-B0h]
  PULONG v25; // [rsp+70h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-A0h] BYREF
  SIZE_T v27; // [rsp+80h] [rbp-98h]
  ULONG_PTR v28; // [rsp+88h] [rbp-90h] BYREF
  ULONG_PTR v29; // [rsp+90h] [rbp-88h]
  PVOID *v30; // [rsp+98h] [rbp-80h]
  _BYTE v31[48]; // [rsp+A0h] [rbp-78h] BYREF

  v27 = Size;
  v29 = (ULONG_PTR)ProcessHandle;
  v30 = BaseAddress;
  v28 = ZeroBits;
  Sizea[0] = EnclaveInformationLength;
  v25 = EnclaveError;
  BugCheckParameter1 = 0LL;
  memset(v31, 0, sizeof(v31));
  *(_QWORD *)&Sizea[1] = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  v22 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    ULongFromUser = RtlReadULongFromUser(EnclaveError);
    RtlWriteULongToUser(EnclaveError, ULongFromUser);
  }
  if ( EnclaveType == 1 )
  {
LABEL_15:
    if ( stru_140E366D8.InitialStack )
    {
      v15 = 4096;
      v13 = InitialCommitment;
      goto LABEL_17;
    }
LABEL_14:
    Enclave = -1073741637;
    goto LABEL_43;
  }
  if ( EnclaveType == 2 )
  {
    if ( (MEMORY[0xFFFFF7800000036C] & 4) == 0 )
      goto LABEL_14;
    goto LABEL_15;
  }
  if ( EnclaveType - 16 > 1 || (MEMORY[0xFFFFF7800000036C] & 0x100) == 0 )
    goto LABEL_14;
  v13 = InitialCommitment;
  if ( InitialCommitment )
  {
LABEL_9:
    Enclave = -1073741581;
    goto LABEL_43;
  }
  if ( EnclaveInformationLength > 0x24 )
    goto LABEL_11;
  v15 = 0;
LABEL_17:
  if ( (int)MiValidateZeroBits(&v28) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_43;
  }
  if ( !v27 )
  {
    Enclave = -1073741582;
    goto LABEL_43;
  }
  if ( v13 > v27 )
    goto LABEL_9;
  if ( PreviousMode == 1 )
  {
    ULong64FromUser = RtlReadULong64FromUser(BaseAddress);
    RtlWriteULong64ToUser(BaseAddress, ULong64FromUser);
  }
  if ( PreviousMode )
    v17 = RtlReadULong64FromUser(BaseAddress);
  else
    v17 = (__int64)*BaseAddress;
  *(_QWORD *)&Sizea[1] = v17;
  if ( Sizea[0] )
  {
    if ( v15 && Sizea[0] != v15 )
    {
LABEL_11:
      Enclave = -1073741820;
      goto LABEL_43;
    }
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (void *)ExAllocatePoolMm(
                       256LL,
                       ((unsigned int)Sizea[0] + 4095LL) & 0xFFFFFFFFFFFFF000uLL,
                       1145400653,
                       CurrentProcessorColor | 0x80000000);
    v10 = PoolMm;
    v24 = PoolMm;
    if ( !PoolMm )
    {
      Enclave = -1073741670;
      goto LABEL_43;
    }
    if ( ((unsigned __int8)EnclaveInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      RtlCopyFromUser(PoolMm, EnclaveInformation, (unsigned int)Sizea[0]);
    else
      RtlCopyVolatileMemory(PoolMm, EnclaveInformation, (unsigned int)Sizea[0]);
  }
  if ( v29 == -1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(v29, 0x6D566D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL);
    if ( Enclave < 0 )
      goto LABEL_43;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v31);
  }
  Enclave = MiCreateEnclave((int)Process, &Sizea[1], v28, v27, v13, EnclaveType, (__int64)v10, Sizea[0], (__int64)&v22);
  if ( v29 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v31, 0);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_43:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( Enclave >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(BaseAddress, *(__int64 *)&Sizea[1]);
    else
      *BaseAddress = *(PVOID *)&Sizea[1];
  }
  if ( EnclaveError )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(EnclaveError, v22);
    else
      *EnclaveError = v22;
  }
  return Enclave;
}
