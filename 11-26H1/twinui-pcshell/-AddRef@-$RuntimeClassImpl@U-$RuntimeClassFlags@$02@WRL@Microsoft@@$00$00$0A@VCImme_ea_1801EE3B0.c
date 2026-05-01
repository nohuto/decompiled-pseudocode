/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EE3B0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18056C710 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_18056C710.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18056C720 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_18056C720.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x18056C730 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_18056C730.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x18056C740 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_18056C740.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@WHI@EAAKXZ @ 0x18056C750 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_18056C750.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@WIA@EAAKXZ @ 0x18056C760 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_18056C760.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@WII@EAAKXZ @ 0x18056C780 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_18056C780.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v2 = *(_QWORD *)(a1 + 176);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      LODWORD(a2) = 0x7FFFFFFF;
      return (unsigned int)a2;
    }
    a2 = (volatile int *)(v2 + 1);
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 176), v2 + 1, v2);
    if ( v3 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
  return (unsigned int)a2;
}
