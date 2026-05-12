/*
 * XREFs of NvmeNamespaceActiveConditionStep1 @ 0x1400318C0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     StorRestartDeviceIoQueue @ 0x140031C58 (StorRestartDeviceIoQueue.c)
 */

__int64 __fastcall NvmeNamespaceActiveConditionStep1(__int64 a1)
{
  __int64 result; // rax

  result = NvmeNamespaceCheckAndAcquirePoFx(a1);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 64LL) = 1;
    StorRestartDeviceIoQueue(*(_QWORD *)(a1 + 256));
    return NvmeNamespaceReleasePoFx(a1);
  }
  return result;
}
