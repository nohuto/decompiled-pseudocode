/*
 * XREFs of ?NotifyFailure@ThreadFailureCache@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180639BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180178104 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

bool __fastcall wil::ThreadFailureCache::NotifyFailure(
        wil::ThreadFailureCache *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // eax
  wil::StoredFailureInfo *v3; // rcx

  v2 = *((_DWORD *)this + 4);
  v3 = (wil::ThreadFailureCache *)((char *)this + 8);
  if ( *((_DWORD *)a2 + 2) != v2 )
    wil::StoredFailureInfo::SetFailureInfo(v3, a2);
  return 0;
}
