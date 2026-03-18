/*
 * XREFs of ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x140217DA8
 * Callers:
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     ?MulSurfaceComplete@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x140333920 (-MulSurfaceComplete@@YAHPEAUDHPDEV__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PDEVOBJ::vDeviceBitmapAdapterHint(PDEVOBJ *this, struct _LUID *a2)
{
  struct _LUID *v2; // rcx

  v2 = *(struct _LUID **)(*(_QWORD *)this + 1784LL);
  if ( v2 )
    v2[13] = *a2;
}
