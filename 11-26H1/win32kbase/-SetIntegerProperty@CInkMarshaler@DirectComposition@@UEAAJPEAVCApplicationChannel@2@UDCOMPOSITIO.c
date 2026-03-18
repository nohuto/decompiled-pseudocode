/*
 * XREFs of ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023CB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x140147020 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        _BYTE *a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx

  *a5 = 0;
  if ( a3 != 4 )
    return 3221225485LL;
  result = DirectComposition::CDCompDynamicArrayBase::Shrink(
             (DirectComposition::CDCompDynamicArrayBase *)(a1 + 112),
             a4);
  if ( (int)result >= 0 )
  {
    v7 = *(unsigned int *)(a1 + 152);
    if ( v7 >= *(_QWORD *)(a1 + 136) )
      LODWORD(v7) = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 16) &= ~0x100u;
    *(_DWORD *)(a1 + 152) = v7;
    *a5 = 1;
  }
  return result;
}
