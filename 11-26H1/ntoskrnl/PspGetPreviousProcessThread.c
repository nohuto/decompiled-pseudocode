/*
 * XREFs of PspGetPreviousProcessThread @ 0x14094AD00
 * Callers:
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 */

__int64 __fastcall PspGetPreviousProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r15
  __int64 v6; // rbp
  int v7; // edi
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 880;
  v6 = 0LL;
  v7 = 0;
  PspLockProcessShared(a1, (__int64)CurrentThread);
  if ( a2 )
    v8 = a2[176];
  else
    v8 = *(_QWORD *)(v3 + 8);
  while ( v8 != v3 )
  {
    v6 = v8 - 1400;
    if ( ObReferenceObjectSafeWithTag(v8 - 1400, 0x6E457350u) )
    {
      v7 = 1;
      break;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  PspUnlockProcessShared(a1, (__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v6 & -(__int64)(v7 != 0);
}
