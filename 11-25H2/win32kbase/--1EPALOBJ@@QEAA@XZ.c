/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x14001C960
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C9224 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D13B8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitPALOBJ @ 0x1402E8008 (bInitPALOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall EPALOBJ::~EPALOBJ(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v1; // rcx

  v1 = *this;
  if ( v1 )
    HmgDecrementShareReferenceCountEx(v1, 0LL);
}
