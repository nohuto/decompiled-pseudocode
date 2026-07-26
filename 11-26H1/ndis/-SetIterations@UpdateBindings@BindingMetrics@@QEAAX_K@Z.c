/*
 * XREFs of ?SetIterations@UpdateBindings@BindingMetrics@@QEAAX_K@Z @ 0x140073490
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015C1E0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BindingMetrics::UpdateBindings::SetIterations(BindingMetrics::UpdateBindings *this, __int64 a2)
{
  *((_QWORD *)this + 6) = a2;
}
