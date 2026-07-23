/*
 * XREFs of ExpApplyPrewaitBoost @ 0x140205768
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall ExpApplyPrewaitBoost(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v4; // di
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 result; // rax
  unsigned int v8; // r10d
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  v4 = *(_BYTE *)(a1 + 26);
  if ( (int)PsGetIoPriorityThread(CurrentThread, a2, a3, 0LL) > 1 && (v4 & (unsigned __int8)(v5 + 4)) == 0 )
    v5 += 4;
  result = *(unsigned __int8 *)(v6 + 27);
  v8 = v5 | 2;
  if ( (v4 & 2) != 0 )
    v8 = v5;
  v9 = v8 | 0xFF00;
  if ( CurrentThread->Priority <= (int)result )
    v9 = v8;
  if ( (_DWORD)v9 )
    return ExpApplyPriorityBoost(v6, v9, CurrentThread);
  return result;
}
