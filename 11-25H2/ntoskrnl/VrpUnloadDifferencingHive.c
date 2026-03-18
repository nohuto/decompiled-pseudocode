/*
 * XREFs of VrpUnloadDifferencingHive @ 0x140947228
 * Callers:
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140819C24 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCleanupNamespace @ 0x140947388 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14094ACCC (VrpHandleIoctlLoadDifferencingHive.c)
 * Callees:
 *     ZwUnloadKey @ 0x14069EC80 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14069ECA0 (ZwUnloadKey2.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140947110 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x140947160 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpUnlockDiffHiveEntry @ 0x1409471A0 (VrpUnlockDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x140947338 (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14094B480 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14094B4B8 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x14094B688 (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpLockDiffHiveEntry @ 0x14094B6C0 (VrpLockDiffHiveEntry.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(const UNICODE_STRING *a1)
{
  __int64 DiffHiveEntryForMountPoint; // rax
  _DWORD *v3; // rbx
  char v4; // al
  char v5; // si
  __int64 v6; // rdx
  int v7; // edi
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+40h] [rbp-10h]

  v9 = 0LL;
  *(_QWORD *)&v11 = 0LL;
  v10 = 0LL;
  DWORD2(v11) = 0;
  DiffHiveEntryForMountPoint = VrpFindDiffHiveEntryForMountPoint(a1);
  v3 = (_DWORD *)DiffHiveEntryForMountPoint;
  if ( DiffHiveEntryForMountPoint )
  {
    VrpLockDiffHiveEntry(DiffHiveEntryForMountPoint);
    if ( VrpDecrementDiffHiveEntryHardRefCount((__int64)v3) )
    {
      v4 = VrpBecomeDiffHiveEntryTransitionOwner((__int64)v3);
      v3[14] &= ~1u;
      v5 = v4;
      VrpUnlockDiffHiveEntry((__int64)v3);
      *((_QWORD *)&v9 + 1) = 0LL;
      LODWORD(v9) = 48;
      v11 = 0LL;
      DWORD2(v10) = 576;
      *(_QWORD *)&v10 = a1;
      v7 = ZwUnloadKey((__int64)&v9, v6);
      if ( v7 < 0 )
        v7 = ZwUnloadKey2((__int64)&v9, 1LL);
      VrpLockDiffHiveEntry(v3);
      if ( v7 < 0 )
      {
        v3[14] |= 1u;
        VrpIncrementDiffHiveEntryHardRefCount(v3);
      }
      if ( v5 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v3);
    }
    else
    {
      v7 = 0;
    }
    VrpUnlockDiffHiveEntry((__int64)v3);
    VrpDereferenceDiffHiveEntry(v3);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v7;
}
