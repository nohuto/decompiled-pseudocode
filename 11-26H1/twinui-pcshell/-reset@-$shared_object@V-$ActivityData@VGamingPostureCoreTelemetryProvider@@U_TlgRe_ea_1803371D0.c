/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803371D0
 * Callers:
 *     ??1?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18033532C (--1-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803357A4 (-Destroy@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180335364 (--1-$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsPr_ea_180335364.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(
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
        wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x110);
      }
    }
    *a1 = 0LL;
  }
}
