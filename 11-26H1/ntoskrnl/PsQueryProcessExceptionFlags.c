/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x1407F5EB0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v4; // edi
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int *v13; // rcx
  char ULongFromUser; // r12
  __int64 v15; // rdx
  _OWORD v17[3]; // [rsp+50h] [rbp-68h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 736) )
    return 3221225711LL;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 784) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
      v8 = 2;
    if ( v8 < 2 )
      goto LABEL_13;
  }
  else
  {
    v8 = 3;
  }
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9);
    return 3221225738LL;
  }
LABEL_13:
  if ( (v8 & 1) != 0 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v17);
  if ( v6 )
  {
    v10 = *(__int64 **)(BugCheckParameter1 + 784);
    if ( !v10 || *(_WORD *)(BugCheckParameter1 + 1772) != 0x8664 )
    {
      v12 = 0LL;
      if ( v10 )
        v12 = *v10;
      v13 = (unsigned int *)(v12 + 40);
      goto LABEL_24;
    }
    v11 = *v10;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter1 + 736);
  }
  v13 = (unsigned int *)(v11 + 80);
LABEL_24:
  ULongFromUser = RtlReadULongFromUser(v13);
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v17, 0);
  if ( v8 >= 2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v15);
  }
  *a3 = 0;
  if ( (ULongFromUser & 4) != 0 )
  {
    *a3 = 1;
    v4 = 1;
  }
  if ( (ULongFromUser & 8) != 0 )
    *a3 = v4 | 2;
  return 0LL;
}
