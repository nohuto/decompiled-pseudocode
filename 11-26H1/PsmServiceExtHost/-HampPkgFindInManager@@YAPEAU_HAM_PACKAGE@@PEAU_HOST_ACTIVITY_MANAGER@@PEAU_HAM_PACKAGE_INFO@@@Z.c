/*
 * XREFs of ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180037EF0
 * Callers:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800188B8 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18001AEEC (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180036468 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18003D1FC (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18003D7A0 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007A3C0 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18008AC30 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180038C60 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180038C80 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180038D00 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  void *v2; // rbp
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rsi
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // r14
  int v12; // ebx
  int v13; // eax
  unsigned __int64 v14; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  int v19; // edi
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  signed __int64 v23; // rax
  bool v24; // cc
  signed __int64 v25; // rax
  unsigned __int64 v26; // rdi
  signed __int64 v27; // rbp
  signed __int64 v28; // rbp

  v2 = (void *)*((unsigned int *)a2 + 50);
  v3 = (unsigned __int64)a1 + 392;
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v5 = *(_QWORD *)v3;
  v6 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_8;
    v5 ^= v3;
  }
  if ( !v5 )
    goto LABEL_8;
  while ( 1 )
  {
    v7 = HampSessionCompareById(v2, (void *)v5);
    if ( v7 >= 0 )
      break;
    v8 = *(_QWORD *)v5;
    if ( v6 && v8 )
    {
      v5 ^= v8;
      goto LABEL_7;
    }
LABEL_6:
    v5 = v8;
LABEL_7:
    if ( !v5 )
      goto LABEL_8;
  }
  if ( v7 > 0 )
  {
    v8 = *(_QWORD *)(v5 + 8);
    if ( v6 && v8 )
    {
      v5 ^= v8;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v5 + 24) )
  {
LABEL_8:
    RtlReleaseSRWLockShared(v3 + 16);
    return 0LL;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v3 + 16);
  RtlAcquireSRWLockShared(v5 + 56);
  v11 = *(_QWORD *)(v5 + 40);
  v12 = *(_BYTE *)(v5 + 48) & 1;
  if ( (*(_BYTE *)(v5 + 48) & 1) != 0 )
  {
    if ( v11 )
    {
      v11 ^= v5 + 40;
      goto LABEL_18;
    }
    goto LABEL_24;
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_24;
  while ( 1 )
  {
    v13 = HampUserCompareByIdentity((char *)a2 + 132, (void *)v11);
    if ( v13 >= 0 )
      break;
    v14 = *(_QWORD *)v11;
    if ( v12 && v14 )
    {
      v11 ^= v14;
      goto LABEL_23;
    }
LABEL_22:
    v11 = v14;
LABEL_23:
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v13 > 0 )
  {
    v14 = *(_QWORD *)(v11 + 8);
    if ( v12 && v14 )
    {
      v11 ^= v14;
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(v11 + 24) )
  {
LABEL_24:
    RtlReleaseSRWLockShared(v5 + 56);
    v9 = 0LL;
    v11 = 0LL;
    goto LABEL_25;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v5 + 56);
  RtlAcquireSRWLockShared(v11 + 56);
  v9 = *(_QWORD *)(v11 + 40);
  v19 = *(_BYTE *)(v11 + 48) & 1;
  if ( (*(_BYTE *)(v11 + 48) & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_47;
    v9 ^= v11 + 40;
  }
  if ( !v9 )
    goto LABEL_47;
  while ( 2 )
  {
    v20 = HampPkgCompareByIdentity(a2, (void *)v9);
    if ( v20 < 0 )
    {
      v21 = *(_QWORD *)v9;
      if ( v19 && v21 )
      {
        v9 ^= v21;
        goto LABEL_46;
      }
LABEL_45:
      v9 = v21;
      goto LABEL_46;
    }
    if ( v20 > 0 )
    {
      v21 = *(_QWORD *)(v9 + 8);
      if ( v19 && v21 )
      {
        v9 ^= v21;
LABEL_46:
        if ( !v9 )
          goto LABEL_47;
        continue;
      }
      goto LABEL_45;
    }
    break;
  }
  if ( *(_QWORD *)(v9 + 24) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24)) <= 1 )
      __fastfail(0xEu);
    RtlReleaseSRWLockShared(v11 + 56);
    goto LABEL_25;
  }
LABEL_47:
  RtlReleaseSRWLockShared(v11 + 56);
  v9 = 0LL;
LABEL_25:
  _m_prefetchw((const void *)(v5 + 24));
  v15 = *(_QWORD *)(v5 + 24);
  while ( v15 - 1 > 0 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v15 - 1, v15);
    if ( v16 == v15 )
      goto LABEL_28;
  }
  if ( v15 != 1 )
    __fastfail(0xEu);
  v22 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( *(_QWORD *)(v5 + 16) == -1LL )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 24)) <= -1 )
      __fastfail(0xEu);
    (*(void (__fastcall **)(unsigned __int64))(v22 + 24))(v5);
  }
  else
  {
    RtlAcquireSRWLockExclusive(v22 + 16);
    v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), 0xFFFFFFFFFFFFFFFFuLL);
    v24 = v23 <= 1;
    v25 = v23 - 1;
    if ( v24 )
    {
      if ( v25 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v22 + 16);
      (*(void (__fastcall **)(unsigned __int64))(v22 + 24))(v5);
    }
    else
    {
      RtlReleaseSRWLockExclusive(v22 + 16);
    }
  }
LABEL_28:
  if ( v11 )
  {
    _m_prefetchw((const void *)(v11 + 24));
    v17 = *(_QWORD *)(v11 + 24);
    while ( v17 - 1 > 0 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v17 - 1, v17);
      if ( v18 == v17 )
        return (struct _HAM_PACKAGE *)v9;
    }
    if ( v17 != 1 )
      __fastfail(0xEu);
    v26 = *(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_QWORD *)(v11 + 16) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v11 + 24)) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(unsigned __int64))(v26 + 24))(v11);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v26 + 16);
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL);
      v24 = v27 <= 1;
      v28 = v27 - 1;
      if ( v24 )
      {
        if ( v28 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v26 + 16);
        (*(void (__fastcall **)(unsigned __int64))(v26 + 24))(v11);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v26 + 16);
      }
    }
  }
  return (struct _HAM_PACKAGE *)v9;
}
