/*
 * XREFs of ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18002FB04
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002EFB8 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostQueryHostGenerationForProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v5; // r14
  DWORD v8; // ebp
  _QWORD *Value; // rbx
  unsigned __int64 v10; // rax
  DWORD v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r10
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 *v24; // rax
  __int64 v25; // rdx

  v3 = 0;
  v5 = 0LL;
  while ( 1 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockShared(a1);
    v10 = *((_QWORD *)a1 + 101);
    v11 = HampLockTrackerId;
    if ( v5 == v10 )
      break;
    v5 = *((_QWORD *)a1 + 101);
    if ( HampLockTrackerId != -1 )
    {
      v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v13 = *v12;
      if ( (*v12 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v14 = v12[2]-- == 1;
      if ( v14 )
        *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(a1);
    v15 = 648LL;
    if ( a1 )
      v15 = (__int64)a1 + 592;
    v16 = 32LL;
    v17 = 616LL;
    v18 = 80LL;
    v19 = 612LL;
    v20 = 48LL;
    v21 = *(_BYTE *)v15;
    v22 = 544LL;
    if ( a1 )
    {
      v16 = (__int64)a1 - 24;
      v17 = (__int64)a1 + 560;
      v18 = (__int64)a1 + 24;
      v19 = (__int64)a1 + 556;
      v22 = (__int64)a1 + 488;
    }
    v23 = *(unsigned int *)v17;
    if ( a1 )
      v20 = (__int64)a1 - 8;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, int, void *))(*(_QWORD *)(*(_QWORD *)v20 + 40LL) + 80LL))(
            v22,
            *(unsigned int *)v19,
            v18,
            v23,
            *(_QWORD *)v16,
            v21 != 0 ? 4 : 0,
            a2) )
      return (unsigned int)-1073741394;
  }
  *a3 = v10;
  if ( v11 != -1 )
  {
    v24 = (__int64 *)TlsGetValue(v11);
    v25 = *v24;
    if ( (*v24 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v14 = v24[2]-- == 1;
    if ( v14 )
      *v24 = v25 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(a1);
  return v3;
}
