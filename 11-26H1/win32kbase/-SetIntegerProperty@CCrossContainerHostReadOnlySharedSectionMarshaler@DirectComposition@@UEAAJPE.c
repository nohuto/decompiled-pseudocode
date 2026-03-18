/*
 * XREFs of ?SetIntegerProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJPEA_N@Z @ 0x14023F2E0 (-IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJ.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::SetIntegerProperty(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( *((_QWORD *)a1 + 8) != a4 )
    *((_QWORD *)a1 + 8) = a4;
  return DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(a1, a5);
}
