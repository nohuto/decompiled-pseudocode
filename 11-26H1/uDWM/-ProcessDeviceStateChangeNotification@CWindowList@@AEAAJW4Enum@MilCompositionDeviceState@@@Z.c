/*
 * XREFs of ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18008A1F0
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18003DF60 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ @ 0x18007D2F0 (-ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ProcessDeviceStateChangeNotification(CWindowList *a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  if ( a2 == 1 )
  {
    v5 = (unsigned int)CWindowList::ClearAllSnapshotRepresentations(a1);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x8BCu, 0LL);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
