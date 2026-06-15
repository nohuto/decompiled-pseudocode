/*
 * XREFs of ??0CSpatialAudioTechCompressed@@QEAA@XZ @ 0x1801475F8
 * Callers:
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180146FC8 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180147250 (--0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180147598 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioTechCompressed *__fastcall CSpatialAudioTechCompressed::CSpatialAudioTechCompressed(
        CSpatialAudioTechCompressed *this)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioTechCompressed::`vftable';
  return this;
}
