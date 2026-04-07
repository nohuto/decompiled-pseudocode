/*
 * XREFs of ?SetResampleMode@CMagnifierRenderTargetProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x1800BB718
 * Callers:
 *     ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800BA1B8 (-OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetResampleMode(__int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 504LL))(
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24),
           a2);
}
