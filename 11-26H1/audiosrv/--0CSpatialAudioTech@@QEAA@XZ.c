/*
 * XREFs of ??0CSpatialAudioTech@@QEAA@XZ @ 0x180147598
 * Callers:
 *     ??0CSpatialAudioTechCompressed@@QEAA@XZ @ 0x1801475F8 (--0CSpatialAudioTechCompressed@@QEAA@XZ.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180147620 (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 * Callees:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x1800836C8 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

CSpatialAudioTech *__fastcall CSpatialAudioTech::CSpatialAudioTech(CSpatialAudioTech *this)
{
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  memset_0((char *)this + 32, 0, 0x100uLL);
  memset_0((char *)this + 288, 0, 0x200uLL);
  *((_QWORD *)this + 1) = CSpatialAudioTech::GetAtmosCheck();
  return this;
}
