/*
 * XREFs of ??A?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z @ 0x1800372F0
 * Callers:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18003781C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall gsl::span<PrimitiveUVDesc const,-1>::operator[](unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 >= *a1 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a1[1] + 56 * a2;
}
