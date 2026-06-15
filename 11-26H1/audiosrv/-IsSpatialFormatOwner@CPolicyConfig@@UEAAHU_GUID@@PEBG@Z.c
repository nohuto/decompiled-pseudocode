/*
 * XREFs of ?IsSpatialFormatOwner@CPolicyConfig@@UEAAHU_GUID@@PEBG@Z @ 0x18010C140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x1801414D8 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?IsSpatialFormatOwner@AtmosCheck@@QEAAJAEBU_GUID@@PEBGPEA_N@Z @ 0x180156710 (-IsSpatialFormatOwner@AtmosCheck@@QEAAJAEBU_GUID@@PEBGPEA_N@Z.c)
 */

_BOOL8 __fastcall CPolicyConfig::IsSpatialFormatOwner(
        CPolicyConfig *this,
        struct _GUID *a2,
        const unsigned __int16 *a3)
{
  bool v3; // bl
  struct AtmosCheck *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  bool v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v8 = 0;
  v7[0] = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v7);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance(v7) >= 0 && v7[0] )
  {
    AtmosCheck::IsSpatialFormatOwner(v7[0], a2, a3, &v8);
    v3 = v8;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v7);
  return v3;
}
