/*
 * XREFs of ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024350
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002409C (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostComputeDesiredHamState(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  BOOL v4; // r13d
  int v5; // r12d
  DWORD v6; // r14d
  __int64 v7; // r15
  _QWORD *Value; // rdi
  bool v9; // di
  __int64 *v10; // rax
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h] BYREF
  BOOL v22; // [rsp+80h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 704);
  v2 = 0;
  v20 = 0;
  v21 = 0;
  if ( v1 )
  {
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v1);
    v17 = *(_QWORD *)(a1 + 704);
    v5 = 1;
    v4 = *(_QWORD *)(v17 + 104) < *(_QWORD *)(a1 + 624);
    v22 = *(_DWORD *)(v17 + 92) != 0;
  }
  else
  {
    v4 = 0;
    v22 = 0;
    v5 = 0;
  }
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)a1,
    (union _RM_OPTIMIZATION_STATE *)&v20,
    (union _RM_OPTIMIZATION_STATE *)&v21);
  v6 = HampLockTrackerId;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v7 + 304);
  v9 = (*(_DWORD *)(v7 + 340) & 4) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v12 = v10[7]-- == 1;
    if ( v12 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared(v7 + 304);
  if ( !v9
    || (v18 = *(_QWORD *)(a1 + 664), (v18 & 0x10000000000000LL) != 0)
    || ((v20 & 0x80u) != 0 || (v21 & 0x80u) != 0 ? (v19 = 0) : (v19 = 1),
        (v18 & 0x30000) != 0 || (v18 & 0x2000000000000LL) == 0 || !v19) )
  {
    if ( v4 )
    {
      v2 = v20 & 0x188;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 664);
      if ( (v13 & 0x10000000000LL) != 0 )
      {
        if ( v22 )
          v2 = v20;
      }
      else
      {
        if ( v1 && *(_DWORD *)(v1 + 88) )
          v2 = v20 & 0x100 | 0x80;
        else
          v2 = 384;
        if ( (v13 & 0x2080000000000LL) == 0x2000000000000LL && !*(_BYTE *)(a1 + 592) )
          v2 |= (v2 >> 5) & 8;
      }
    }
  }
  if ( v5 )
  {
    *(_DWORD *)(v1 + 16) = 0;
    RtlReleaseSRWLockExclusive(v1 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v15 = *v14;
      if ( (*v14 & 8) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v12 = v14[4]-- == 1;
      if ( v12 )
        *v14 = v15 & 0xFFFFFFFFFFFFFFF7uLL;
    }
  }
  return v2;
}
