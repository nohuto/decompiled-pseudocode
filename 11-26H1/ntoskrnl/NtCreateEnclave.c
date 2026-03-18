/*
 * XREFs of NtCreateEnclave @ 0x140876D00
 * Callers:
 *     DifNtCreateEnclaveWrapper @ 0x1406705B0 (DifNtCreateEnclaveWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     MiCreateEnclave @ 0x140875FD4 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1409F3F40 (MiValidateZeroBits.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *Src,
        unsigned int a8,
        unsigned int *a9)
{
  void *v10; // r15
  char PreviousMode; // di
  int ULongFromUser; // eax
  unsigned __int64 v13; // r13
  int Enclave; // ebx
  int v15; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v17; // rax
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  void *Process; // rsi
  unsigned int v22; // [rsp+58h] [rbp-C0h] BYREF
  int Size[3]; // [rsp+5Ch] [rbp-BCh] BYREF
  void *v24; // [rsp+68h] [rbp-B0h]
  unsigned int *v25; // [rsp+70h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-A0h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-98h]
  __int64 v28; // [rsp+88h] [rbp-90h] BYREF
  ULONG_PTR v29; // [rsp+90h] [rbp-88h]
  _QWORD *v30; // [rsp+98h] [rbp-80h]
  _BYTE v31[48]; // [rsp+A0h] [rbp-78h] BYREF

  v27 = a4;
  v29 = a1;
  v30 = a2;
  v28 = a3;
  Size[0] = a8;
  v25 = a9;
  BugCheckParameter1 = 0LL;
  memset(v31, 0, sizeof(v31));
  *(_QWORD *)&Size[1] = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  v22 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    ULongFromUser = RtlReadULongFromUser(a9);
    RtlWriteULongToUser(a9, ULongFromUser);
  }
  if ( a6 == 1 )
  {
LABEL_15:
    if ( stru_140E36558.InitialStack )
    {
      v15 = 4096;
      v13 = a5;
      goto LABEL_17;
    }
LABEL_14:
    Enclave = -1073741637;
    goto LABEL_43;
  }
  if ( a6 == 2 )
  {
    if ( (MEMORY[0xFFFFF7800000036C] & 4) == 0 )
      goto LABEL_14;
    goto LABEL_15;
  }
  if ( (unsigned int)(a6 - 16) > 1 || (MEMORY[0xFFFFF7800000036C] & 0x100) == 0 )
    goto LABEL_14;
  v13 = a5;
  if ( a5 )
  {
LABEL_9:
    Enclave = -1073741581;
    goto LABEL_43;
  }
  if ( a8 > 0x24 )
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
    ULong64FromUser = RtlReadULong64FromUser(a2);
    RtlWriteULong64ToUser(a2, ULong64FromUser);
  }
  if ( PreviousMode )
    v17 = RtlReadULong64FromUser(a2);
  else
    v17 = *a2;
  *(_QWORD *)&Size[1] = v17;
  if ( Size[0] )
  {
    if ( v15 && Size[0] != v15 )
    {
LABEL_11:
      Enclave = -1073741820;
      goto LABEL_43;
    }
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (void *)ExAllocatePoolMm(
                       256LL,
                       ((unsigned int)Size[0] + 4095LL) & 0xFFFFFFFFFFFFF000uLL,
                       1145400653,
                       CurrentProcessorColor | 0x80000000);
    v10 = PoolMm;
    v24 = PoolMm;
    if ( !PoolMm )
    {
      Enclave = -1073741670;
      goto LABEL_43;
    }
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      RtlCopyFromUser(PoolMm, Src, (unsigned int)Size[0]);
    else
      RtlCopyVolatileMemory(PoolMm, Src, (unsigned int)Size[0]);
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
  Enclave = MiCreateEnclave((int)Process, &Size[1], v28, v27, v13, a6, (__int64)v10, Size[0], (__int64)&v22);
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
      RtlWriteULong64ToUser(a2, *(__int64 *)&Size[1]);
    else
      *a2 = *(_QWORD *)&Size[1];
  }
  if ( a9 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a9, v22);
    else
      *a9 = v22;
  }
  return (unsigned int)Enclave;
}
