/*
 * XREFs of ?SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140242080
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1400A44F0 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetHandleProperty(
        DirectComposition::CInteractionMarshaler *a1,
        int a2,
        void *a3,
        bool *a4)
{
  if ( a2 )
    return 3221225485LL;
  else
    return DirectComposition::CInteractionMarshaler::SetInputSinkHelper(a1, a3, a4);
}
