/*
 * XREFs of ?ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18031FB50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18008E6C8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x1802D7784 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18031FDF8 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180320148 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FullScreenPositioner::ControlGainedForActivation(
        PositionerPropertySetHelpers *a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))
{
  int DetailsForActivation; // eax
  const char *v8; // r9
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-28h]
  struct IUnknown v21; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    LODWORD(v21.lpVtbl) = 0;
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(a1, a4, &v21, 0LL);
    if ( DetailsForActivation < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C3,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)DetailsForActivation,
        v20);
    if ( ((__int64)v21.lpVtbl & 1) != 0 )
      return 0LL;
    if ( a3 != 4 )
      FullScreenPositioner::ControlGainedHelper((char *)a1 - 120, a2, a3, 0LL, 0LL);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
    {
      v9 = *(_QWORD *)a2;
      if ( ((__int64)v21.lpVtbl & 2) != 0 )
      {
        v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(v9 + 224))(a2, 1LL);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1D4,
            (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
            (const char *)(unsigned int)v10,
            v20);
        v11 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 352LL))(a2);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1D5,
            (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
            (const char *)(unsigned int)v11,
            v20);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(struct IApplicationView *))(v9 + 56))(a2);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D7,
            (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
            (const char *)(unsigned int)v12);
          if ( GetForegroundWindow() )
          {
            v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 224LL))(a2, 1LL);
            if ( v14 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1E3,
                (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                (const char *)(unsigned int)v14,
                v20);
            v15 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 352LL))(a2);
            if ( v15 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1E4,
                (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                (const char *)(unsigned int)v15,
                v20);
          }
          else
          {
            v13 = FullScreenPositioner::FullScreenViewGetsFocus((PositionerPropertySetHelpers *)((char *)a1 - 120), a2);
            if ( v13 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1DE,
                (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                (const char *)(unsigned int)v13,
                v20);
          }
        }
      }
      return 0LL;
    }
    if ( ((__int64)v21.lpVtbl & 2) == 0 )
    {
      v16 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
      if ( v16 >= 0 )
        return 0LL;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EB,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v16);
    }
    v17 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 224LL))(a2, 1LL);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EE,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v17,
        v20);
    v18 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 352LL))(a2);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EF,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v18,
        v20);
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F5,
                           (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v8);
  }
  return result;
}
