/*
 * XREFs of DirectComposition::SetGuidProperty @ 0x14023F3AC
 * Callers:
 *     ?SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023F350 (-SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::SetGuidProperty(_OWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  if ( a2 != 16 )
    return 3221225485LL;
  result = *a3;
  if ( !*a3 )
    result = a3[1];
  if ( result )
    return 3221225485LL;
  *(_OWORD *)a3 = *a1;
  return result;
}
