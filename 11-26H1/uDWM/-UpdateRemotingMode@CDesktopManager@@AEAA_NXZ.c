/*
 * XREFs of ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180087B04
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180087A68 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180072A64 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDesktopManager::UpdateRemotingMode(CDesktopManager *this)
{
  int v1; // edi
  DWORD CurrentProcessId; // eax
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rcx
  DWORD pSessionId; // [rsp+60h] [rbp+28h] BYREF
  int v9; // [rsp+68h] [rbp+30h] BYREF
  int v10; // [rsp+70h] [rbp+38h] BYREF
  __int64 v11; // [rsp+78h] [rbp+40h] BYREF

  v1 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 4) = 0LL;
  if ( GetSystemMetrics(4096) )
  {
    pSessionId = 0;
    v10 = 0;
    v9 = 0;
    v11 = 0LL;
    CurrentProcessId = GetCurrentProcessId();
    ProcessIdToSessionId(CurrentProcessId, &pSessionId);
    if ( (unsigned __int8)WinStationQueryInformationW(0LL, pSessionId, 39LL, &v9, 4, &v10) && v9 == 5 )
    {
      if ( (unsigned __int8)WinStationGetConnectionProperty(
                              0xFFFFFFFFLL,
                              &PROPERTY_TYPE_GET_REMOTEAPP_HD_SUPPORT_LEVEL,
                              &v11) )
      {
        v4 = v11;
        if ( *(_WORD *)v11 == 1 )
        {
          if ( *(_DWORD *)(v11 + 8) == 1 || *(_DWORD *)(v11 + 8) == 2 )
          {
            v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8));
            v4 = v11;
            *((_DWORD *)this + 8) = (v5 != 0) + 5;
          }
          else if ( *(_DWORD *)(v11 + 8) == 3 )
          {
            *((_DWORD *)this + 8) = 7;
          }
          else
          {
            *((_DWORD *)this + 8) = 2;
          }
        }
        WinStationFreePropertyValue(v4);
        v11 = 0LL;
      }
      else
      {
        *((_DWORD *)this + 8) = 4;
      }
    }
    else
    {
      *((_DWORD *)this + 8) = 1;
    }
    if ( (unsigned __int8)WinStationGetConnectionProperty(
                            0xFFFFFFFFLL,
                            &PROPERTY_TYPE_GET_SCREEN_CAPTURE_PROTECT_MODE,
                            &v11) )
    {
      v6 = v11;
      if ( *(_WORD *)v11 == 1 )
        *((_DWORD *)this + 9) = *(_DWORD *)(v11 + 8);
      WinStationFreePropertyValue(v6);
    }
  }
  if ( *((_DWORD *)this + 8) == v1 )
    return 0;
  CDesktopManager::UpdateWindowShadows(this);
  return 1;
}
