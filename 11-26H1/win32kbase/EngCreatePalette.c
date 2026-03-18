/*
 * XREFs of EngCreatePalette @ 0x1400C3940
 * Callers:
 *     <none>
 * Callees:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 */

HPALETTE __stdcall EngCreatePalette(
        ULONG iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  HPALETTE v6; // rbx
  ULONG v7; // r11d
  ULONG v8; // ecx
  HPALETTE *v10; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp-10h]

  v6 = 0LL;
  v11 = 0;
  v10 = 0LL;
  v7 = iMode & 0x8000;
  v8 = iMode & 0xFFFF7FFF;
  if ( v8 == 2 && flGreen == 65280 )
  {
    if ( flRed == 255 && flBlue == 16711680 )
    {
      v8 = 4;
    }
    else if ( flBlue == 255 && flRed == 16711680 )
    {
      v8 = 8;
    }
  }
  if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                       (PALMEMOBJ *)&v10,
                       v8,
                       cColors,
                       pulColors,
                       flRed,
                       flGreen,
                       flBlue,
                       v7 != 0 ? 50332160 : 16777728,
                       v7 == 0) )
  {
    v11 = 1;
    v6 = *v10;
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
  return v6;
}
