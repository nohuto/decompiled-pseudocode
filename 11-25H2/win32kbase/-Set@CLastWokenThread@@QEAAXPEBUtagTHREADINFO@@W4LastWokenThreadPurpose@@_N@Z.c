/*
 * XREFs of ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B158
 * Callers:
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B120 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z @ 0x14009B438 (-_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z @ 0x14009B498 (-_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z.c)
 */

void __fastcall CLastWokenThread::Set(struct W32_PUSH_LOCK *a1, const struct tagTHREADINFO *a2, int a3, bool a4)
{
  W32AcquirePushLockExclusiveEx(a1, 0);
  if ( a3 )
    CLastWokenThread::_SetForAsfw(a1, a2, a4);
  else
    CLastWokenThread::_SetForInput(a1, a2);
  W32ReleasePushLockExclusiveEx(a1, 0);
}
