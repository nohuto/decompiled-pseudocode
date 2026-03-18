/*
 * XREFs of ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401FB550
 * Callers:
 *     CddEngOffsetRgn @ 0x1401FBA50 (CddEngOffsetRgn.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     LongLongToLong @ 0x1400FD290 (LongLongToLong.c)
 *     ?RegionCore_bOffset@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_POINTL@@@Z @ 0x140183600 (-RegionCore_bOffset@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_POINTL@@@Z.c)
 */

bool __fastcall RGNCOREOBJ::bOffset(Win32kRS **this, struct _POINTL *a2, const struct _POINTL *a3)
{
  Win32kRS *v5; // r9
  __int64 x; // r14
  __int64 y; // rsi
  LONG v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ebx
  struct SCAN *i; // r8
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  LONG plResult[4]; // [rsp+20h] [rbp-10h] BYREF

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (unsigned int)Win32kRS::RegionCore_bOffset(*this, (struct REGION_CORE *)a2, a3) != 0;
  v5 = *this;
  x = a2->x;
  y = a2->y;
  if ( *((_DWORD *)*this + 6) == 1 )
    return 1;
  v8 = *((_DWORD *)v5 + 7);
  plResult[1] = *((_DWORD *)v5 + 8);
  plResult[2] = *((_DWORD *)v5 + 9);
  plResult[3] = *((_DWORD *)v5 + 10);
  plResult[0] = v8;
  if ( IsRectEmptyInl((const struct tagRECT *)plResult) )
    return 1;
  if ( LongLongToLong(x + v9, plResult) >= 0
    && LongLongToLong(y + plResult[3], &plResult[3]) >= 0
    && LongLongToLong(x + plResult[2], &plResult[2]) >= 0
    && LongLongToLong(y + plResult[1], &plResult[1]) >= 0
    && ((plResult[0] & 0xF8000000) == 0 || (plResult[0] & 0xF8000000) == 0xF8000000)
    && ((plResult[3] & 0xF8000000) == 0 || (plResult[3] & 0xF8000000) == 0xF8000000)
    && ((plResult[2] & 0xF8000000) == 0 || (plResult[2] & 0xF8000000) == 0xF8000000)
    && ((plResult[1] & 0xF8000000) == 0 || (plResult[1] & 0xF8000000) == 0xF8000000) )
  {
    *(_OWORD *)(v10 + 28) = *(_OWORD *)plResult;
    v11 = *((_DWORD *)*this + 6);
    for ( i = REGION_CORE::get_pScan(*this); v11; i = (struct SCAN *)((char *)i + (unsigned int)(4 * *(_DWORD *)i + 16)) )
    {
      *((_DWORD *)i + 1) += y;
      --v11;
      *((_DWORD *)i + 2) += y;
      v13 = *(unsigned int *)i;
      if ( (_DWORD)v13 )
      {
        v14 = (_DWORD *)((char *)i + 4 * v13 + 12);
        do
        {
          *--v14 += x;
          LODWORD(v13) = v13 - 1;
        }
        while ( (_DWORD)v13 );
      }
    }
    *(_DWORD *)((char *)i - (unsigned int)(4 * *((_DWORD *)i - 1) + 16) + 8) = 0x7FFFFFFF;
    *((_DWORD *)REGION_CORE::get_pScan(*this) + 1) = 0x80000000;
    return 1;
  }
  EngSetLastError(0x216u);
  return 0;
}
