/*
 * XREFs of ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x180073070
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180073520 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180171BE4 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$QueueTask@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@Z @ 0x1800A454C (--$QueueTask@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_12603dae6e80c2220100b0c8836f21bd_>(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ebx
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  int v12; // [rsp+60h] [rbp+20h] BYREF
  APTTYPE pAptType; // [rsp+68h] [rbp+28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v12 = a1;
  *a3 = 0LL;
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA) )
    v8 = 65LL;
  else
    v8 = 33LL;
  v12 = 0;
  v15 = 0LL;
  v11[0] = a4;
  v11[1] = &v15;
  v11[2] = &v12;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))Windows::Internal::ComTaskPool::QueueTask<_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_>)(
         v6,
         v8,
         v7,
         v11);
  if ( v9 >= 0 )
  {
    v9 = v12;
    if ( v12 >= 0 )
    {
      *a3 = 0LL;
      if ( v15 )
        v9 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v15 + 24LL))(
               v15,
               &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e,
               a3);
      else
        v9 = 0;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  return (unsigned int)v9;
}
