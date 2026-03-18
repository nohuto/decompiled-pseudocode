/*
 * XREFs of ?IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ @ 0x14012A73C
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1400A0314 (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::IsInputProcessingActive(CInputThreadBase *this)
{
  CInputThreadBase *v1; // rbx
  char *v2; // rdi

  v1 = this;
  v2 = (char *)this + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = *((_DWORD *)v1 + 4) == 2;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
