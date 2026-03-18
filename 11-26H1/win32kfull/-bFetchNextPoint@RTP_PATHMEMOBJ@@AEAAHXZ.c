/*
 * XREFs of ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019C24C
 * Callers:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019BFDC (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTP_PATHMEMOBJ::bFetchNextPoint(struct _PATHDATA *this)
{
  __int64 pptfx_high; // rbp
  char v3; // di
  ULONG *p_count; // r14
  int v5; // esi
  signed int count; // ecx
  bool v7; // cc
  int v9; // eax
  signed int v10; // ecx

  pptfx_high = SHIDWORD(this[11].pptfx);
  v3 = 1;
  HIDWORD(this[11].pptfx) = pptfx_high + 1;
  if ( (int)pptfx_high + 1 > 2 )
    HIDWORD(this[11].pptfx) = pptfx_high - 2;
  p_count = &this[8].count;
  v5 = 0;
  count = this[8].count;
  v7 = count <= 0;
  if ( !count )
  {
    if ( (this[8].flags & 2) != 0 )
    {
      *(&this[12].flags + pptfx_high) = 0;
      v3 = 3;
      *(POINTFIX **)((char *)&(&this[12].pptfx)[pptfx_high] + 4) = *(POINTFIX **)&this[9].flags;
      *p_count = this[8].count - 1;
      return v3 & 1;
    }
    v9 = EPATHOBJ::bEnum((EPATHOBJ *)this, this + 8);
    v10 = *p_count;
    LODWORD(this[7].pptfx) = v9;
    if ( !v10 || (this[8].flags & 1) != 0 || !this[8].pptfx )
    {
      v3 = 2;
      return v3 & 1;
    }
    v7 = v10 <= 0;
  }
  if ( !v7 )
  {
    *(POINTFIX **)((char *)&(&this[12].pptfx)[pptfx_high] + 4) = (POINTFIX *)*this[8].pptfx;
    if ( *p_count == 1 && (this[8].flags & 2) != 0 )
      v5 = 1;
    *(&this[12].flags + pptfx_high) = v5;
    ++this[8].pptfx;
    --*p_count;
  }
  return v3 & 1;
}
