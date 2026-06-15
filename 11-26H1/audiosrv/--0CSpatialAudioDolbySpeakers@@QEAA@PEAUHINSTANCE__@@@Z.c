/*
 * XREFs of ??0CSpatialAudioDolbySpeakers@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180147190
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180147830 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180047620 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180147620 (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 */

CSpatialAudioDolbySpeakers *__fastcall CSpatialAudioDolbySpeakers::CSpatialAudioDolbySpeakers(
        CSpatialAudioDolbySpeakers *this,
        HINSTANCE a2)
{
  CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(this);
  *(_QWORD *)this = &CSpatialAudioDolbySpeakers::`vftable';
  *((_OWORD *)this + 1) = DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x192u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((char *)this + 32, 128LL, (char *)L"Stereo");
  if ( LoadStringW(a2, 0x1B0u, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((char *)this + 288, 256LL, (char *)L"ms-windows-store://pdp/?productid=9n0866fs04w8");
  return this;
}
