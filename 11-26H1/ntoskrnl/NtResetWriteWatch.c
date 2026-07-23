/*
 * XREFs of NtResetWriteWatch @ 0x140AB8910
 * Callers:
 *     DifNtResetWriteWatchWrapper @ 0x14068D940 (DifNtResetWriteWatchWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiGetVadMandatoryPageSize @ 0x140319EC0 (MiGetVadMandatoryPageSize.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // r9
  char *v7; // r12
  _KPROCESS *Process; // rbp
  void *v9; // rsi
  int v10; // r14d
  ULONG_PTR v11; // rax
  __int64 v12; // rbp
  unsigned int VadFlags; // eax
  NTSTATUS v14; // ebx
  unsigned __int64 VadMandatoryPageSize; // rax
  NTSTATUS result; // eax
  __int64 v17; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter1 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize || !RegionSize )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v7 = (char *)BaseAddress + RegionSize - 1;
  Process = CurrentThread->ApcState.Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v9 = CurrentThread->ApcState.Process;
LABEL_6:
    v10 = 0;
    goto LABEL_7;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             8,
             (__int64)PsProcessType,
             CurrentThread->PreviousMode,
             0x77576D4Du,
             &BugCheckParameter1,
             0LL,
             0LL);
  if ( result < 0 )
    return result;
  v9 = (void *)BugCheckParameter1;
  if ( Process == (_KPROCESS *)BugCheckParameter1 )
    goto LABEL_6;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v19);
  v10 = 1;
LABEL_7:
  v11 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0LL, (int *)&BugCheckParameter1);
  v12 = v11;
  if ( !v11 )
  {
    v14 = -1073741585;
    goto LABEL_14;
  }
  VadFlags = MiReadVadFlags(v11);
  if ( (VadFlags & 0x180000) == 0x180000
    && (unsigned __int64)v7 <= (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(VadFlags);
    if ( VadMandatoryPageSize <= 1 )
    {
LABEL_12:
      MiMoveDirtyBitsToPfns((unsigned __int64)BaseAddress, (unsigned __int64)v7, v12, 1);
      v14 = 0;
      goto LABEL_13;
    }
    v17 = (VadMandatoryPageSize << 12) - 1;
    if ( (v17 & (unsigned __int64)BaseAddress) == 0 )
    {
      if ( (v17 & RegionSize) != 0 )
      {
        v14 = -1073741583;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
  }
  v14 = -1073741585;
LABEL_13:
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v12);
LABEL_14:
  if ( v10 )
    KiUnstackDetachProcess((__int64)v19, 0);
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
  return v14;
}
