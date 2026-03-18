/*
 * XREFs of ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78
 * Callers:
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxTranslateAccelerator @ 0x14016E680 (xxxTranslateAccelerator.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(__int64 *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // r8
  __int64 result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  result = *(_QWORD *)(v5 + 456);
  *a1 = result;
  *(_QWORD *)(v5 + 456) = a1;
  a1[1] = a2;
  if ( a2 )
    return HMLockObject(a2);
  return result;
}
