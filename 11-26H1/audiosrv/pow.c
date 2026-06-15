/*
 * XREFs of pow @ 0x1800B31B4
 * Callers:
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x1800255AC (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180050858 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180050EB4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180050FAC (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x1800540E0 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x18007D24C (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800CDD9C (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x180119B88 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x180119E90 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
