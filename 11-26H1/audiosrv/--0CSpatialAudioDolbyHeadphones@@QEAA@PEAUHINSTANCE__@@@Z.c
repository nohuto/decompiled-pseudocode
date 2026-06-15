/*
 * XREFs of ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180147088
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180147830 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180047620 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180147620 (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 */

CSpatialAudioDolbyHeadphones *__fastcall CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(
        CSpatialAudioDolbyHeadphones *this,
        HINSTANCE a2)
{
  CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(this);
  *(_QWORD *)this = &CSpatialAudioDolbyHeadphones::`vftable';
  *((_OWORD *)this + 1) = DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x191u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((char *)this + 32, 128LL, (char *)L"Headphones");
  if ( LoadStringW(a2, 0x1AFu, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((char *)this + 288, 256LL, (char *)L"ms-windows-store://pdp/?productid=9n0866fs04w8");
  if ( LoadStringW(a2, 0x1B2u, (LPWSTR)this + 400, 256) <= 0 )
    StringCchCopyW((char *)this + 800, 256LL, (char *)this + 288);
  return this;
}
