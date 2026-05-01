/*
 * XREFs of _lambda_507ae1b140dd0534ced08e530f119204_::operator() @ 0x180569400
 * Callers:
 *     ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569CBC (-ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180066C0C (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180074750 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802C7AF4 (--0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z.c)
 *     ??$GetAsInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAJ@Z @ 0x180322134 (--$GetAsInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ??$IsUWPFullScreenExclusiveMode@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x180568D10 (--$IsUWPFullScreenExclusiveMode@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall lambda_507ae1b140dd0534ced08e530f119204_::operator()(IUnknown ***a1)
{
  bool v1; // si
  int v2; // eax
  void *v3; // rbx
  __int64 (__fastcall *v4)(void *, ApplicationViewHelpers **); // rdi
  int v5; // eax
  struct IImmersiveApplication **v6; // r8
  int ApplicationFromView; // eax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-48h] BYREF
  struct IPropertyStore *v13; // [rsp+40h] [rbp-40h] BYREF
  ApplicationViewHelpers *v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  bool v19; // [rsp+B0h] [rbp+30h] BYREF
  int v20; // [rsp+B8h] [rbp+38h] BYREF
  int v21; // [rsp+C0h] [rbp+40h] BYREF
  LONG v22; // [rsp+C8h] [rbp+48h] BYREF

  v1 = 0;
  v19 = 0;
  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         **a1,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &ppvOut) >= 0 )
  {
    v20 = 0;
    v2 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, &v20);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x163,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)v2,
        v10);
    if ( v20 )
    {
      v14 = 0LL;
      v3 = ppvOut;
      v4 = *(__int64 (__fastcall **)(void *, ApplicationViewHelpers **))(*(_QWORD *)ppvOut + 80LL);
      winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)&v14);
      v5 = v4(v3, &v14);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x167,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
          (const char *)(unsigned int)v5,
          v10);
      v11 = 0LL;
      ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v14,
                              (struct IApplicationView *)&v11,
                              v6);
      if ( ApplicationFromView < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x169,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
          (const char *)(unsigned int)ApplicationFromView,
          v10);
      v21 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 72LL))(v11, &v21);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x16B,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
          (const char *)(unsigned int)v8,
          v10);
      if ( v21 )
      {
        v13 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IPropertyStore **))(*(_QWORD *)v11 + 48LL))(
               v11,
               0LL,
               &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
               &v13) >= 0 )
        {
          wil::PropertyStoreHelper::PropertyStoreHelper((wil::PropertyStoreHelper *)v15, v13);
          v22 = 0;
          v16 = PKEY_ImmersiveApplication_FullScreenSystemOverlayMode;
          v17 = 11;
          if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsInt32<_tagpropertykey>(v15, &v16, &v22) >= 0 )
          {
            v1 = v22 == 1;
            v19 = v22 == 1;
          }
          Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(v15);
        }
        if ( v13 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v13);
      }
      if ( v11 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
      winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)&v14);
    }
  }
  TouchEdgeGestureTelemetry::IsUWPFullScreenExclusiveMode<bool &>((char *)&v19);
  if ( ppvOut )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppvOut);
  return v1;
}
