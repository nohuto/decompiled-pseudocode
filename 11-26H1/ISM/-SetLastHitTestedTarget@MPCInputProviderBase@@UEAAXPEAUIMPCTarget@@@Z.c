/*
 * XREFs of ?SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x1800C1350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::SetLastHitTestedTarget(MPCInputProviderBase *this, struct IMPCTarget *a2)
{
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 452, (__int64)a2);
}
