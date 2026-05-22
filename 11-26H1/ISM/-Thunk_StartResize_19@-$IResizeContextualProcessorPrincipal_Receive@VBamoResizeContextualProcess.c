/*
 * XREFs of ?Thunk_StartResize_19@?$IResizeContextualProcessorPrincipal_Receive@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180152C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IResizeContextualProcessorPrincipal_Receive<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>::Thunk_StartResize_19(
        BamoImpl::BamoResizeContextualProcessorPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoResizeContextualProcessorPrincipalImpl::StartResize(a1, **a2, *a2[1]);
}
