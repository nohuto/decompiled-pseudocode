/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14093B458
 * Callers:
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408ABCD4 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14093AE58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x14093BFD0 (VrpCleanupNamespace.c)
 * Callees:
 *     ZwUnloadKey @ 0x14072BB20 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14072BB40 (ZwUnloadKey2.c)
 *     VrpLockDiffHiveEntry @ 0x14093B8B8 (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14093BC84 (VrpUnlockDiffHiveEntry.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14093BCC0 (VrpDereferenceDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14093BD10 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14093BD4C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x14093BE1C (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14093C044 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14093C0AC (VrpDecrementDiffHiveEntryHardRefCount.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *a1)
{
  __int64 DiffHiveEntryForMountPoint; // rax
  _DWORD *v3; // rbx
  char v4; // al
  char v5; // si
  NTSTATUS v6; // edi
  OBJECT_ATTRIBUTES TargetKey; // [rsp+20h] [rbp-30h] BYREF

  memset(&TargetKey, 0, 44);
  DiffHiveEntryForMountPoint = VrpFindDiffHiveEntryForMountPoint(a1);
  v3 = (_DWORD *)DiffHiveEntryForMountPoint;
  if ( DiffHiveEntryForMountPoint )
  {
    VrpLockDiffHiveEntry(DiffHiveEntryForMountPoint);
    if ( (unsigned __int8)VrpDecrementDiffHiveEntryHardRefCount(v3) )
    {
      v4 = VrpBecomeDiffHiveEntryTransitionOwner(v3);
      v3[14] &= ~1u;
      v5 = v4;
      VrpUnlockDiffHiveEntry(v3);
      TargetKey.Length = 48;
      TargetKey.RootDirectory = 0LL;
      *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
      TargetKey.Attributes = 576;
      TargetKey.ObjectName = a1;
      v6 = ZwUnloadKey(&TargetKey);
      if ( v6 < 0 )
        v6 = ZwUnloadKey2(&TargetKey, 1u);
      VrpLockDiffHiveEntry(v3);
      if ( v6 < 0 )
      {
        v3[14] |= 1u;
        VrpIncrementDiffHiveEntryHardRefCount(v3);
      }
      if ( v5 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v3);
    }
    else
    {
      v6 = 0;
    }
    VrpUnlockDiffHiveEntry(v3);
    VrpDereferenceDiffHiveEntry(v3);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v6;
}
