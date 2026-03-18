/*
 * XREFs of ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x1400CFD38
 * Callers:
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x1400CFD00 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z @ 0x1400CE7C0 (-_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z.c)
 *     ?_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z @ 0x1400CFBFC (-_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z.c)
 */

void __fastcall CLastWokenThread::Set(struct W32_PUSH_LOCK *a1, const struct tagTHREADINFO *a2, int a3, char a4)
{
  W32AcquirePushLockExclusiveEx(a1);
  if ( a3 )
    CLastWokenThread::_SetForAsfw(a1, a2, a4);
  else
    CLastWokenThread::_SetForInput(a1, a2);
  W32ReleasePushLockExclusiveEx(a1);
}
