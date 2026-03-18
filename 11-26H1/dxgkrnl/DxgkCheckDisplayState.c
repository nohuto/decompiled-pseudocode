/*
 * XREFs of DxgkCheckDisplayState @ 0x1401CC150
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?reset@?$unique_ptr@VDISPLAYSTATECHECKER@@U?$default_delete@VDISPLAYSTATECHECKER@@@wistd@@@wistd@@QEAAXPEAVDISPLAYSTATECHECKER@@@Z @ 0x140076378 (-reset@-$unique_ptr@VDISPLAYSTATECHECKER@@U-$default_delete@VDISPLAYSTATECHECKER@@@wistd@@@wistd.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1401C9674 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401CB05C (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CB5C8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401CC0B0 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCheckDisplayState(__int64 a1)
{
  __int64 v2; // rbx
  DISPLAYSTATECHECKER *v3; // rbx
  int v4; // esi
  const char *v5; // r9
  int v6; // r8d
  int v7; // edx
  DISPLAYSTATECHECKER *v9[2]; // [rsp+50h] [rbp-28h] BYREF
  __int128 v10; // [rsp+60h] [rbp-18h] BYREF

  v9[0] = 0LL;
  v2 = operator new(0x3710uLL, 0x4B677844u, 256LL);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 16) = 0;
    *(_OWORD *)(v2 + 20) = 0LL;
    `vector constructor iterator'(
      (char *)(v2 + 40),
      3512LL,
      4LL,
      (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA);
    *(_DWORD *)(v2 + 14088) = 0;
    *(_DWORD *)(v2 + 14092) = 65792;
  }
  else
  {
    v2 = 0LL;
  }
  wistd::unique_ptr<DISPLAYSTATECHECKER,wistd::default_delete<DISPLAYSTATECHECKER>>::reset((char **)v9, (char *)v2);
  v3 = v9[0];
  if ( v9[0] )
  {
    v5 = *(const char **)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 4);
    v7 = *(_DWORD *)a1;
    v10 = *(_OWORD *)(a1 + 24);
    v4 = DISPLAYSTATECHECKER::Initialize((__int64)v9[0], v7, v6, v5, &v10);
    if ( v4 >= 0 )
    {
      DISPLAYSTATECHECKER::CheckPrimaryContentState(v3);
      DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(v3, *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)(a1 + 16));
      if ( *(_DWORD *)(a1 + 4) )
        DISPLAYSTATECHECKER::TryRecovery(v3);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 59;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No memory available for DISPLAYSTATECHECKER",
      59LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v4 = -1073741801;
  }
  wistd::unique_ptr<DISPLAYSTATECHECKER,wistd::default_delete<DISPLAYSTATECHECKER>>::reset((char **)v9, 0LL);
  return (unsigned int)v4;
}
