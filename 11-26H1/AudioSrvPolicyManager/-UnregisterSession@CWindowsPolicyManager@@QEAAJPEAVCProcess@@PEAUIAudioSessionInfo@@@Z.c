/*
 * XREFs of ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800204FC
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800204D0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180020590 (-UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002AABC (-UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::UnregisterSession(
        CWindowsPolicyManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CWindowsPolicyManager *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  CApplicationManager *v7; // rcx
  CDuckingManager *v8; // rcx

  v5 = g_PolicyManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  CApplicationManager::UnregisterSession(v7, a2, a3);
  v8 = (CDuckingManager *)*((_QWORD *)v5 + 5);
  if ( v8 )
    CDuckingManager::UnregisterSession(v8, a3);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
