/*
 * XREFs of ClassUnlock @ 0x1400C3290
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x140226FA0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1400C32D0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _QWORD *a2)
{
  *((_QWORD *)PtiCurrent((__int64)a1, (__int64)a2) + 48) = *a2;
  return ClassUnlockWorker(a1);
}
