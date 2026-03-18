/*
 * XREFs of ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x14012223C
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023C9F0 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140122390 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::AddSegments(
        DirectComposition::CInkMarshaler *this,
        const struct D2D1_INK_BEZIER_SEGMENT *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // rdi
  int v10; // ebp

  v4 = *((_QWORD *)this + 17);
  v6 = a3;
  v9 = 0LL;
  v10 = DirectComposition::CDCompDynamicArrayBase::Grow(
          (DirectComposition::CInkMarshaler *)((char *)this + 112),
          a3,
          0x6B694344u);
  if ( v10 >= 0 )
  {
    if ( v6 )
    {
      do
      {
        memmove((void *)(*((_QWORD *)this + 14) + *((_QWORD *)this + 18) * (v9 + v4)), a2, *((_QWORD *)this + 18));
        ++v9;
        a2 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)a2 + 36);
      }
      while ( v9 < v6 );
    }
    *((_DWORD *)this + 4) &= ~0x100u;
    *a4 = 1;
  }
  return (unsigned int)v10;
}
