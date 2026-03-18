/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x14014B8F4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v1; // rax
  struct _BASEOBJECT *v3; // rcx

  v1 = *this;
  v3 = (struct _BASEOBJECT *)*((_QWORD *)*this + 15);
  if ( v3 != v1 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  *((_QWORD *)*this + 14) = *((_QWORD *)*this + 16);
  *((_QWORD *)*this + 15) = *this;
}
