/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UIWeakReferenceSource@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803ED414
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803EE3A0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMoni.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,IWeakReferenceSource,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * *a2) = GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = GUID_4f935bdc_7650_5db7_a233_ce467a34bc72;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v8 = 2LL * v3;
  v9 = v3 + 1;
  *(GUID *)(a3 + 8 * v8) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  *(GUID *)(a3 + 16LL * (unsigned int)v9) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  *a2 = v9 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::FillArrayWithIid(
           v9,
           a2,
           a3);
}
