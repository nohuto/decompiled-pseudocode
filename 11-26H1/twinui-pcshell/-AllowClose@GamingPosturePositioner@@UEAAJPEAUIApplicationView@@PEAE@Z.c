/*
 * XREFs of ?AllowClose@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x1804F8B20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x1804FF398 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF398.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::AllowClose(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        bool *a3)
{
  const char *v5; // r9
  _QWORD *v6; // rdx
  __int64 result; // rax
  _QWORD v8[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    *a3 = *((_BYTE *)this + 616) == 0;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      if ( !*a3 )
      {
        v8[0] = off_180750268;
        v9 = v8;
        GamingPosturePositioner::LogViewDiagnosticInfo(a2);
        if ( v9 )
        {
          v6 = v8;
          LOBYTE(v6) = v9 != v8;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v6);
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4CE,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           v5);
  }
  return result;
}
