/*
 * XREFs of ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023CE20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1401222E4 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140145A14 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v9; // xmm0_8
  int v10; // r14d

  v6 = 0;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 3 )
    {
      return (unsigned int)DirectComposition::CGenericInkMarshaler::AddSegments(
                             (DirectComposition::CGenericInkMarshaler *)a1,
                             (const unsigned __int8 *)a4,
                             a5,
                             a6);
    }
    else if ( a3 == 10 && a4 && a5 == 40 )
    {
      *(_OWORD *)(a1 + 184) = *(_OWORD *)a4;
      *(_OWORD *)(a1 + 200) = *(_OWORD *)(a4 + 16);
      v9 = *(_QWORD *)(a4 + 32);
      *(_DWORD *)(a1 + 16) &= ~0x200u;
      *(_QWORD *)(a1 + 216) = v9;
      *(_BYTE *)(a1 + 180) = 1;
      *a6 = 1;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( a4 && a5 <= 0x400 )
    {
      v10 = DirectComposition::CDCompDynamicArrayBase::SetCount(
              (DirectComposition::CDCompDynamicArrayBase *)(a1 + 56),
              a5,
              0x69674344u);
      if ( v10 >= 0 )
      {
        memmove(*(void **)(a1 + 56), (const void *)a4, *(_QWORD *)(a1 + 88) * a5);
        *(_DWORD *)(a1 + 16) &= ~0x40u;
        *a6 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return (unsigned int)v10;
  }
  return v6;
}
