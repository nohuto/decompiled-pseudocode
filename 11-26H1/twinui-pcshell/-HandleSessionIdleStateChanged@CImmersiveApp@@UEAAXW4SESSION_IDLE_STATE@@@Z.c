/*
 * XREFs of ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180059820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800585E4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180059D50 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AC00 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C3F8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005E8DC (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006264C (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1803002B4 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::HandleSessionIdleStateChanged(__int64 a1, int a2)
{
  CImmersiveApp::CImmersiveWindowCollection *v3; // rdi
  void (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  if ( a2 == 2 )
  {
    if ( (*(_BYTE *)(a1 + 380) & 2) != 0 )
    {
      v7 = 0LL;
      v4 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
      v4(a1, &v7);
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)v3, 2);
      v5 = *((_DWORD *)v3 + 51);
      if ( (v5 & 2) == 0 && (v5 & 1) == 0 )
        CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear(v3);
      v6 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
           && (*(_BYTE *)(a1 + 380) & 2) == 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows();
    }
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
         && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
               (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64)))
         && *(_QWORD *)(a1 + 344) )
  {
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v3) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v3, 2LL);
    else
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v3, 0LL, 2LL);
  }
}
