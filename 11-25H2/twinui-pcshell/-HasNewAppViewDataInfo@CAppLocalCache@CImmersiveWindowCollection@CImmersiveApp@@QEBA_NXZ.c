/*
 * XREFs of ?HasNewAppViewDataInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800D74A4
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800D71E8 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewAppViewDataInfo(
        CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *this)
{
  return *((_DWORD *)this + 8) != *((_DWORD *)this + 18)
      || *((_DWORD *)this + 9) != *((_DWORD *)this + 19)
      || *((_DWORD *)this + 10) != *((_DWORD *)this + 20)
      || *((_DWORD *)this + 11) != *((_DWORD *)this + 21)
      || *((_DWORD *)this + 13) != *((_DWORD *)this + 23)
      || *((_DWORD *)this + 12) != *((_DWORD *)this + 22)
      || *((_DWORD *)this + 14) != *((_DWORD *)this + 24)
      || *((_DWORD *)this + 15) != *((_DWORD *)this + 25)
      || *((_DWORD *)this + 16) != *((_DWORD *)this + 26)
      || *((_DWORD *)this + 17) != *((_DWORD *)this + 27);
}
