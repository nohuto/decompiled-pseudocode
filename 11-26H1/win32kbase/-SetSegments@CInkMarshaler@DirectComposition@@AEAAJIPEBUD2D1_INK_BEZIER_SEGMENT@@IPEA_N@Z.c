/*
 * XREFs of ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x14023CC1C
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023C9F0 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140145A14 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetSegments(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  unsigned int v5; // edi
  DirectComposition::CDCompDynamicArrayBase *v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  int v14; // ebp
  const struct D2D1_INK_BEZIER_SEGMENT *v15; // rdi

  v5 = a2;
  v7 = (DirectComposition::CInkMarshaler *)((char *)this + 112);
  v8 = a4;
  v9 = a2;
  v10 = *((_QWORD *)v7 + 3);
  v11 = a4 + (unsigned __int64)a2;
  if ( v11 < a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v12 = *((_QWORD *)v7 + 3);
    if ( v10 <= v11 )
      v12 = a4 + (unsigned __int64)a2;
    v13 = 0LL;
    v14 = DirectComposition::CDCompDynamicArrayBase::SetCount(v7, v12, 0x6B694344u);
    if ( v14 >= 0 )
    {
      if ( v8 )
      {
        v15 = a3;
        do
        {
          memmove((void *)(*((_QWORD *)this + 14) + *((_QWORD *)this + 18) * (v13 + v9)), v15, *((_QWORD *)this + 18));
          ++v13;
          v15 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)v15 + 36);
        }
        while ( v13 < v8 );
        v5 = a2;
      }
      if ( v12 != v10 )
        *((_DWORD *)this + 4) &= ~0x100u;
      if ( *((_DWORD *)this + 38) < v5 )
        v5 = *((_DWORD *)this + 38);
      *((_DWORD *)this + 38) = v5;
      *a5 = 1;
    }
  }
  return (unsigned int)v14;
}
