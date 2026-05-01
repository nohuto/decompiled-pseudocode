/*
 * XREFs of ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E80
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampPkgLeaveInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002A138 (-HampPkgLeaveInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F204 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006B8A8 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCheckCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // ebp
  DWORD v2; // esi
  struct _HAM_PACKAGE *v4; // r14
  _QWORD *Value; // rdi
  int v6; // edi
  __int64 *v7; // rax
  __int64 v8; // rdx
  bool v9; // zf
  __int64 *v11; // rax
  __int64 v12; // rdx
  DWORD v13; // esi
  _QWORD *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rdx
  DWORD v17; // esi
  _QWORD *v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rdx

  v1 = 0;
  v2 = HampLockTrackerId;
  v4 = *(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  if ( (*((_QWORD *)a1 + 83) & 0x800000000000LL) == 0 )
  {
    if ( HampLockTrackerId != -1 )
    {
      v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v12 = *v11;
      if ( (*v11 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v9 = v11[2]-- == 1;
      if ( v9 )
        *v11 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(a1);
    v1 = 1;
    HampPkgEnterInsertion(v4);
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v14 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v14 |= 2uLL;
      ++v14[2];
    }
    RtlAcquireSRWLockShared(a1);
    if ( (*((_QWORD *)a1 + 83) & 0x800000000000LL) == 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v15 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v16 = *v15;
        if ( (*v15 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v9 = v15[2]-- == 1;
        if ( v9 )
          *v15 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(a1);
      v6 = HampHostCompletePackageInsertion(a1);
      if ( v6 >= 0 )
      {
        v17 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v18 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *v18 |= 2uLL;
          ++v18[2];
        }
        CempLockAcquireExclusive((__int64)a1);
        *((_QWORD *)a1 + 83) |= 0x800000000000uLL;
        if ( HampLockTrackerId != -1 )
        {
          v19 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v20 = *v19;
          if ( (*v19 & 2) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          v9 = v19[2]-- == 1;
          if ( v9 )
            *v19 = v20 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        *((_DWORD *)a1 + 2) = 0;
        RtlReleaseSRWLockExclusive(a1);
        v6 = 0;
      }
      goto LABEL_10;
    }
  }
  v6 = 0;
  if ( HampLockTrackerId != -1 )
  {
    v7 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v8 = *v7;
    if ( (*v7 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v7[2]-- == 1;
    if ( v9 )
      *v7 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(a1);
  if ( v1 )
LABEL_10:
    HampPkgLeaveInsertion(v4);
  return (unsigned int)v6;
}
