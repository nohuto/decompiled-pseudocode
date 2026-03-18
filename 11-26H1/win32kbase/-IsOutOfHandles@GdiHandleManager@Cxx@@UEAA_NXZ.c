/*
 * XREFs of ?IsOutOfHandles@GdiHandleManager@Cxx@@UEAA_NXZ @ 0x14024B240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Cxx::GdiHandleManager::IsOutOfHandles(Cxx::GdiHandleManager *this)
{
  return *((_DWORD *)this + 5) >= *((_DWORD *)this + 6);
}
