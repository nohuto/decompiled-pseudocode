/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x180050728
 * Callers:
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180079744 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081708 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800D6CD4 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x1801177FC (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180118648 (-LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180050FAC (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this, __int64 a2)
{
  CVolumeUnit::SetDBRange(this, a2);
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
