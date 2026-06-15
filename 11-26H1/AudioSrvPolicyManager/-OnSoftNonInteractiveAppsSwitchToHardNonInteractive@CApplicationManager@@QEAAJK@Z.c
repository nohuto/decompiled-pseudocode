/*
 * XREFs of ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18002A5B8
 * Callers:
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800420D0 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180018508 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(
        CApplicationManager *this,
        unsigned int a2)
{
  CApplicationManager *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_DWORD *)(v6 + 212) == a2 && *(_DWORD *)(v6 + 652) && *(_QWORD *)(v6 + 600) )
      CApplicationManager::ProcessInteractivityNotification(
        (__int64)v3,
        *(const unsigned __int16 **)(v6 + 24),
        *(CApplication **)(v6 + 696),
        1,
        a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
