/*
 * XREFs of ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180010D20
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002A6FC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180011700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012DC0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012E20 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001393C (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActInsert(struct _HAM_ACTIVITY *a1)
{
  DWORD v1; // ebp
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  int v5; // r14d
  _QWORD *Value; // rbx
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ebp
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  int v17; // r14d
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct _HAM_CLIENT_CONTEXT *v25; // rbp
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 **v28; // rcx
  __int64 v29; // r10

  v1 = HampLockTrackerId;
  v2 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v3 = *((_QWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 28);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v3);
  v7 = 0;
  *(_DWORD *)(v3 + 8) = GetCurrentThreadId();
  if ( (v5 & 0x80000) != 0 && *(_QWORD *)(v3 + 608) != v3 + 608
    || (v8 = v3 + 608, v9 = *(_QWORD *)(v3 + 608), v9 != v3 + 608)
    && (v10 = v9 - 96) != 0
    && (*(_DWORD *)(v10 + 112) & 0x80000) != 0 )
  {
    v11 = -1071513591;
    goto LABEL_9;
  }
  *((_BYTE *)a1 + 562) = 1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  v23 = *(_QWORD **)(v3 + 616);
  v24 = (_QWORD *)((char *)a1 + 96);
  if ( *v23 != v8 )
LABEL_44:
    __fastfail(3u);
  *v24 = v8;
  *((_QWORD *)a1 + 13) = v23;
  *v23 = v24;
  *(_QWORD *)(v3 + 616) = v24;
  if ( *(_QWORD *)(v3 + 832) && !HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)v3) )
    TpSetTimerEx(v29, 0LL, 0LL, 0LL);
  v25 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
  if ( v25 )
  {
    HampClientAcquireLockExclusive(*((struct _HAM_CLIENT_CONTEXT **)a1 + 8));
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    v26 = (__int64 *)((char *)a1 + 48);
    v27 = *((_QWORD *)a1 + 8) + 56LL;
    v28 = *(__int64 ***)(*((_QWORD *)a1 + 8) + 64LL);
    if ( *v28 != (__int64 *)v27 )
      goto LABEL_44;
    *((_QWORD *)a1 + 7) = v28;
    *v26 = v27;
    *v28 = v26;
    *(_QWORD *)(v27 + 8) = v26;
    HampClientReleaseLockExclusive(v25);
  }
  v11 = 0;
LABEL_9:
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v12[2]-- == 1 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v3 + 8) = 0;
  RtlReleaseSRWLockExclusive(v3);
  if ( v11 >= 0 )
  {
    RtlAcquireSRWLockExclusive(v2 + 16);
    while ( 1 )
    {
      if ( *((_QWORD *)a1 + 2) != -1LL )
        NT_ASSERT("!CempRcObjectIsInserted(ObjectToInsert)");
      if ( !*((_QWORD *)a1 + 3) )
        NT_ASSERT("!CemRcObjectIsRundownInProgress(ObjectToInsert)");
      if ( (*(_BYTE *)(v2 + 40) & 1) != 0 )
        NT_ASSERT("!Table->IsRunningDown");
      v16 = *(_QWORD *)v2;
      v17 = *(_BYTE *)(v2 + 8) & 1;
      if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
        break;
LABEL_26:
      while ( v16 )
      {
        v18 = HampActCompareByHandle((char *)a1 + 40, (void *)v16);
        if ( v18 < 0 )
        {
          v19 = *(_QWORD *)v16;
        }
        else
        {
          if ( v18 <= 0 )
            break;
          v19 = *(_QWORD *)(v16 + 8);
        }
        if ( v17 && v19 )
          v16 ^= v19;
        else
          v16 = v19;
      }
      if ( !v16 )
        goto LABEL_28;
      if ( *(_QWORD *)(v16 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v2 + 16);
        return (unsigned int)v11;
      }
      RtlSleepConditionVariableSRW(v2 + 32, v2 + 16, 0LL, 0LL);
    }
    if ( v16 )
    {
      v16 ^= v2;
      goto LABEL_26;
    }
LABEL_28:
    v20 = *(_QWORD *)v2;
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
    {
      if ( v20 )
        v20 ^= v2;
      else
        v20 = 0LL;
    }
    if ( v20 )
    {
      v15 = *((_QWORD *)a1 + 5);
      while ( 1 )
      {
        if ( v15 < *(_QWORD *)(v20 + 40) )
        {
          v21 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
          {
            if ( !v21 )
              break;
            v21 ^= v20;
          }
          if ( !v21 )
            break;
        }
        else
        {
          v21 = *(_QWORD *)(v20 + 8);
          if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
          {
            if ( !v21 )
            {
LABEL_39:
              v7 = 1;
              break;
            }
            v21 ^= v20;
          }
          if ( !v21 )
            goto LABEL_39;
        }
        v20 = v21;
      }
    }
    LOBYTE(v15) = v7;
    RtlRbInsertNodeEx(v2, v20, v15, a1);
    *(_QWORD *)(v2 + 40) ^= (*(_QWORD *)(v2 + 40) ^ (*(_QWORD *)(v2 + 40) + 2LL)) & 0xFFFFFFFFFFFFFFFEuLL;
    RtlReleaseSRWLockExclusive(v2 + 16);
    RtlWakeAllConditionVariable(v2 + 32);
  }
  return (unsigned int)v11;
}
