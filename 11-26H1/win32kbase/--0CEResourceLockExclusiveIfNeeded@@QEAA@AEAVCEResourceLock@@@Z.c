/*
 * XREFs of ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401C2310
 * Callers:
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x14021A490 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 */

CEResourceLockExclusiveIfNeeded *__fastcall CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded(
        CEResourceLockExclusiveIfNeeded *this,
        PERESOURCE *a2)
{
  bool IsLockedShared; // al

  *(_QWORD *)this = a2;
  IsLockedShared = tagDomLock::IsLockedShared(a2);
  *((_BYTE *)this + 8) = IsLockedShared;
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceExclusive(**(PERESOURCE **)this);
  return this;
}
