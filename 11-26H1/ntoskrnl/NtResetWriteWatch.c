/*
 * XREFs of NtResetWriteWatch @ 0x140AB72D0
 * Callers:
 *     DifNtResetWriteWatchWrapper @ 0x140689D60 (DifNtResetWriteWatchWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiGetVadMandatoryPageSize @ 0x140317E90 (MiGetVadMandatoryPageSize.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResetWriteWatch(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v7; // r12
  _KPROCESS *Process; // rbp
  void *v9; // rsi
  int v10; // r14d
  ULONG_PTR v11; // rax
  __int64 v12; // rbp
  unsigned int VadFlags; // eax
  unsigned int v14; // ebx
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 result; // rax
  __int64 v17; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter1 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - a2 < a3 || !a3 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a3 + a2 - 1;
  Process = CurrentThread->ApcState.Process;
  if ( a1 == -1LL )
  {
    v9 = CurrentThread->ApcState.Process;
LABEL_6:
    v10 = 0;
    goto LABEL_7;
  }
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             8LL,
             PsProcessType,
             CurrentThread->PreviousMode,
             0x77576D4Du,
             &BugCheckParameter1,
             0LL,
             0LL);
  if ( (int)result < 0 )
    return result;
  v9 = (void *)BugCheckParameter1;
  if ( Process == (_KPROCESS *)BugCheckParameter1 )
    goto LABEL_6;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v19);
  v10 = 1;
LABEL_7:
  v11 = MiObtainReferencedVadEx(a2, 0LL, (int *)&BugCheckParameter1);
  v12 = v11;
  if ( !v11 )
  {
    v14 = -1073741585;
    goto LABEL_14;
  }
  VadFlags = MiReadVadFlags(v11);
  if ( (VadFlags & 0x180000) == 0x180000
    && v7 <= (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(VadFlags);
    if ( VadMandatoryPageSize <= 1 )
    {
LABEL_12:
      MiMoveDirtyBitsToPfns(a2, v7, v12, 1);
      v14 = 0;
      goto LABEL_13;
    }
    v17 = (VadMandatoryPageSize << 12) - 1;
    if ( (v17 & a2) == 0 )
    {
      if ( (v17 & a3) != 0 )
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
  if ( a1 != -1LL )
    ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
  return v14;
}
