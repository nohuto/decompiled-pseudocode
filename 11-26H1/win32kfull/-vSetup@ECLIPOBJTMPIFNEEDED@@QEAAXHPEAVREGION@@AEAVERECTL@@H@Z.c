/*
 * XREFs of ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1403159F4
 * Callers:
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400632A0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140168230 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140317190 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140318514 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ECLIPOBJTMPIFNEEDED::vSetup(
        ECLIPOBJTMPIFNEEDED *this,
        int a2,
        struct REGION *a3,
        struct ERECTL *a4,
        int a5)
{
  ECLIPOBJTMPIFNEEDED *v6; // rbx
  struct REGION *v7; // rdx
  struct REGION *v8; // [rsp+30h] [rbp+8h] BYREF
  struct REGION *v9; // [rsp+40h] [rbp+18h] BYREF

  *((_QWORD *)this + 7) = 0LL;
  v9 = a3;
  *((_DWORD *)this + 38) = 0;
  v6 = this;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 4) = 0LL;
  if ( a3 )
  {
    *((_DWORD *)this + 38) = a2;
    if ( !a2 )
    {
      v7 = a3;
      goto LABEL_7;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
    if ( v8 && RGNOBJ::bCopy((RGNOBJ *)&v8, (struct RGNOBJ *)&v9) )
    {
      v7 = v8;
      this = v6;
LABEL_7:
      XCLIPOBJ::vSetup(this, v7, a4, a5);
    }
  }
}
