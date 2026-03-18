/*
 * XREFs of ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140038E54
 * Callers:
 *     vConvertXformToMatrix @ 0x140038CB0 (vConvertXformToMatrix.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x140039A40 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1401F1450 (-bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIsZero(EFLOAT *this)
{
  return *(float *)this == 0.0;
}
