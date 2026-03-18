/*
 * XREFs of ?SetIntegerProperty@CManipulationTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 6 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 120) = a4;
  *a5 = 1;
  *(_DWORD *)(a1 + 16) &= ~0x200u;
  return result;
}
