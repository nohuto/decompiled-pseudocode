/*
 * XREFs of ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019214C
 * Callers:
 *     ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x140215EA0 (-IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z.c)
 *     ?ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x140216B00 (-ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 */

CInpLockGuardShared *__fastcall CInpLockGuardShared::CInpLockGuardShared(CInpLockGuardShared *this, PERESOURCE *a2)
{
  bool IsLockedShared; // al

  *(_QWORD *)this = a2;
  IsLockedShared = tagDomLock::IsLockedShared(a2);
  *((_BYTE *)this + 8) = IsLockedShared;
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(**(PERESOURCE **)this);
  return this;
}
