/*
 * XREFs of ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140290818
 * Callers:
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x140316884 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x140318B00 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnumLayers(ENUMAREAS *this, struct SPRITE **a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // r11d
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  __int64 result; // rax

  v2 = (_DWORD *)*((_QWORD *)this + 9);
  v3 = 0;
  v6 = v2;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    if ( (unsigned __int64)v2 <= *((_QWORD *)this + 8) + 24LL )
      goto LABEL_8;
    v7 = v2 - 4;
  }
  else
  {
    if ( (unsigned __int64)v2 >= *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + *((_QWORD *)this + 8) - 16LL )
      goto LABEL_8;
    v7 = v2 + 4;
  }
  if ( *v7 == *v2 )
  {
    v6 = v7;
    *((_QWORD *)this + 9) = v7;
    v3 = 1;
  }
LABEL_8:
  result = v3;
  *a2 = (struct SPRITE *)*((_QWORD *)v6 + 1);
  return result;
}
