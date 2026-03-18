/*
 * XREFs of ?IsPackedQueueRecalc@@YAHXZ @ 0x14005AD58
 * Callers:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005AAE8 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14005ACF8 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPackedQueueRecalc(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return *(_QWORD *)(UserSessionState + 16872) != UserSessionState + 16872;
}
