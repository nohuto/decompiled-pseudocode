/*
 * XREFs of ??$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPackageManager@Deployment@Management@1@@Z @ 0x1800238A8
 * Callers:
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023A90 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ?SetCrossDevicePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z @ 0x18003B0FC (-SetCrossDevicePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z.c)
 *     ?SetYourPhonePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z @ 0x18003B7A8 (-SetYourPhonePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z.c)
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Management::Deployment::IPackageManager>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = 0LL;
  v3 = RoActivateInstance(a1, &v5);
  if ( v3 >= 0 )
  {
    if ( !memcmp_0(&GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      *a2 = v5;
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(
             v5,
             &GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)v3;
}
