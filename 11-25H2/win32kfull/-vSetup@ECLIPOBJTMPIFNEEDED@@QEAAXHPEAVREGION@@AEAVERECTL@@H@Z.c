/*
 * XREFs of ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x14032CE3C
 * Callers:
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140007B54 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14000ADB0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032E604 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032F9C0 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
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
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 4) = 0;
  v6 = this;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  v9 = a3;
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
