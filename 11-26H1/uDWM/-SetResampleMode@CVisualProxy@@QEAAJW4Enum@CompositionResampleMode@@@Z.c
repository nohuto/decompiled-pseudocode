/*
 * XREFs of ?SetResampleMode@CVisualProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x180077664
 * Callers:
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18007761C (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetResampleMode(__int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 496LL))(
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24),
           a2);
}
