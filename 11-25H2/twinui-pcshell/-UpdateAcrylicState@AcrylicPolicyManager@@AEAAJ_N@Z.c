/*
 * XREFs of ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1802AB950
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BF0C0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802E12C0 (wistd--__function--__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil--Regis.c)
 *     ?OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z @ 0x1802E19F0 (-OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z.c)
 *     ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x1802E1A50 (-OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ.c)
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1802E1AB0 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::UpdateAcrylicState(AcrylicPolicyManager *this, char a2)
{
  unsigned __int8 v3; // di
  int v4; // eax
  unsigned int v5; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*((_BYTE *)this + 353) && !*((_BYTE *)this + 355) && *((_BYTE *)this + 354) )
    v3 = *((_BYTE *)this + 356) != 0;
  if ( *((_BYTE *)this + 352) != v3 || a2 )
  {
    v8 = v3;
    v4 = RtlPublishWnfStateData(WNF_IMSN_TRANSPARENCYPOLICY, 0LL, &v8, 4LL, 0LL);
    v5 = v4 | 0x10000000;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
        (const char *)v5);
      return v5;
    }
    *((_BYTE *)this + 352) = v3;
  }
  return 0LL;
}
