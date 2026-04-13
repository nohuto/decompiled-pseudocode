/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180029B70
 * Callers:
 *     ??_GNotificationManager@ContentManagement@@UEAAPEAXI@Z @ 0x18002C860 (--_GNotificationManager@ContentManagement@@UEAAPEAXI@Z.c)
 *     ??1AppInstallInfoRecordImpl@ContentManagement@@UEAA@XZ @ 0x180042CD0 (--1AppInstallInfoRecordImpl@ContentManagement@@UEAA@XZ.c)
 *     ??1CreativeEventReportedCache@ContentManagement@@UEAA@XZ @ 0x18004D090 (--1CreativeEventReportedCache@ContentManagement@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x18006E1D0 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UITargetedContentActionInt.c)
 *     ??1TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x18006E3C4 (--1TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ.c)
 *     ??1AppManager@ContentManagement@@UEAA@XZ @ 0x180074A84 (--1AppManager@ContentManagement@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800393A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 32);
}
