/*
 * XREFs of NvmeAdapterDirectedPowerDown @ 0x140123300
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterDirectedPowerDownRequestD3 @ 0x1401233A0 (NvmeAdapterDirectedPowerDownRequestD3.c)
 */

BOOLEAN __fastcall NvmeAdapterDirectedPowerDown(_QWORD *Context)
{
  BOOLEAN result; // al

  ++*(_QWORD *)(*(_QWORD *)(Context[20] + 24LL) + 40LL);
  result = NvmeAdapterCheckAndAcquirePoFx((__int64)Context);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(Context[20] + 8LL) + 20LL) &= ~1u;
    return NvmeAdapterDirectedPowerDownRequestD3(Context);
  }
  return result;
}
