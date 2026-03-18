/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1401C0AC8
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8 (-vRemoveRefPalettes@@YAXK@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(XEPALOBJ *this)
{
  __int64 v2; // rcx
  unsigned int *v3; // rdx

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v3 = *(unsigned int **)(*(_QWORD *)this + 120LL);
  if ( v3 != *(unsigned int **)this )
    HmgDecrementShareReferenceCount(v2, v3);
  *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)this + 128LL);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = *(_QWORD *)this;
}
