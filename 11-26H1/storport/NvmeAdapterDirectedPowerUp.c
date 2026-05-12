/*
 * XREFs of NvmeAdapterDirectedPowerUp @ 0x1401235E0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterDirectedPowerUpRequestD0 @ 0x1401236F8 (NvmeAdapterDirectedPowerUpRequestD0.c)
 */

BOOLEAN __fastcall NvmeAdapterDirectedPowerUp(_QWORD *Context)
{
  BOOLEAN result; // al

  ++*(_QWORD *)(*(_QWORD *)(Context[20] + 24LL) + 48LL);
  result = NvmeAdapterCheckAndAcquirePoFx((__int64)Context);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(Context[20] + 8LL) + 20LL) |= 1u;
    return NvmeAdapterDirectedPowerUpRequestD0(Context);
  }
  return result;
}
