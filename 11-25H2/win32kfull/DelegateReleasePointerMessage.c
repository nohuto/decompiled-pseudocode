/*
 * XREFs of DelegateReleasePointerMessage @ 0x14006756C
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14006667C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x140225308 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     DelegateCoalescePointerMessage @ 0x1400675CC (DelegateCoalescePointerMessage.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)(a2 + 24) == 583 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(
      *(CTouchProcessor **)(UserSessionState + 3256),
      *(_QWORD *)(a2 + 40));
  }
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
