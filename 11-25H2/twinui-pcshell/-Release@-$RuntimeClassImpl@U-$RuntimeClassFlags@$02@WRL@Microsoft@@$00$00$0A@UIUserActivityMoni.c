/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068510
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1803EF7D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF7D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1803EF7E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF7E0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1803EF7F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF7F0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1803EF800 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF800.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1803EF810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF810.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x1803EF820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF820.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WII@EAAKXZ @ 0x1803EF830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF830.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WJA@EAAKXZ @ 0x1803EF850 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803EF850.c)
 * Callees:
 *     ?DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180069E3C (-DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 184);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 184), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_5;
  }
  v3 = Microsoft::WRL::Details::StrongReference::DecrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 72) + 64LL))(v2 + 72, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
