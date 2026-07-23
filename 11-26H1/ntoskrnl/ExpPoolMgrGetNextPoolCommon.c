/*
 * XREFs of ExpPoolMgrGetNextPoolCommon @ 0x140AC540C
 * Callers:
 *     ExpPoolMgrGetFirstPool @ 0x1404DF874 (ExpPoolMgrGetFirstPool.c)
 *     ExpPoolMgrGetNextPool @ 0x1404E0AB4 (ExpPoolMgrGetNextPool.c)
 *     ExpPoolMgrCompactPools @ 0x140AC533C (ExpPoolMgrCompactPools.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExpPoolMgrAcquirePoolListLockShared @ 0x1404BB8E4 (ExpPoolMgrAcquirePoolListLockShared.c)
 *     ExpPoolMgrReleasePoolListLockShared @ 0x1404C4424 (ExpPoolMgrReleasePoolListLockShared.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpPoolMgrGetNextPoolCommon(
        __int64 a1,
        int a2,
        struct _EX_RUNDOWN_REF *a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _EX_RUNDOWN_REF *v6; // rsi
  __int64 v7; // rdx
  _QWORD **v8; // r14
  _QWORD *Count; // rbx
  struct _EX_RUNDOWN_REF *v10; // rdi

  v6 = 0LL;
  v7 = a2 + 2 * (a2 + 1LL);
  v8 = (_QWORD **)(a1 + 8 * v7);
  ExpPoolMgrAcquirePoolListLockShared(a1, v7, (__int64)a3, a4);
  if ( a3 )
    Count = (_QWORD *)a3[4].Count;
  else
    Count = *v8;
  while ( Count != v8 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)(Count - 4);
    if ( *((_DWORD *)Count - 8) != -1347437123 )
      __fastfail(5u);
    if ( ExAcquireRundownProtection_0(v6 + 3) )
      break;
    Count = (_QWORD *)*Count;
  }
  ExpPoolMgrReleasePoolListLockShared(a1);
  v10 = 0LL;
  if ( Count != v8 )
    v10 = v6;
  if ( a3 )
    ExReleaseRundownProtection_0(a3 + 3);
  return v10;
}
