/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180181470
 * Callers:
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180180B20 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180180C10 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ??1?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180181290 (--1-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801812C8 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflector.c)
 *     ??4?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180181390 (--4-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??4?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1801FBE64 (--4-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1801FBE64.c)
 *     ??4?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1802C9B30 (--4-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801814CC (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_1801814CC.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 2);
        operator delete((void *)v3, (const struct std::nothrow_t *)0x110);
      }
    }
    *a1 = 0LL;
  }
}
