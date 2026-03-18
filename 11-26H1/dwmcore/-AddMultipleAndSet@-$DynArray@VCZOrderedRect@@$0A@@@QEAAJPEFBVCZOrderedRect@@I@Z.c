/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x180187790
 * Callers:
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCVisual@@PEBVCMILMatrix@@@Z @ 0x180074F58 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CZOrderedRect,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // ebx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
    return 2147942934LL;
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    result = DynArrayImpl<0>::AddMultipleAndSet(a1, 48, 1, a2);
    v8 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0xC2u, 0LL);
      return v8;
    }
  }
  else
  {
    v5 = 3 * v2;
    v6 = *(_QWORD *)a1;
    v5 *= 2LL;
    *(_OWORD *)(v6 + 8 * v5) = *a2;
    *(_OWORD *)(v6 + 8 * v5 + 16) = a2[1];
    *(_OWORD *)(v6 + 8 * v5 + 32) = a2[2];
    *(_DWORD *)(a1 + 24) = v4;
    return 0LL;
  }
  return result;
}
