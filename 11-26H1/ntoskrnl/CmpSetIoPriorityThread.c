/*
 * XREFs of CmpSetIoPriorityThread @ 0x1404EBD08
 * Callers:
 *     CmpDoFileWrite @ 0x140AE6B08 (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140238294 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(LegacyAutoBoost *a1, int a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  return PsSetIoPriorityThread(a1, a2, a3, a4);
}
