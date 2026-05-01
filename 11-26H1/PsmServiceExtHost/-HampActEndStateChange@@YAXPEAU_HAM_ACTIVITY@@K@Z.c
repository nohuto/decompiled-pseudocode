/*
 * XREFs of ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180016FA4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000A6C0 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800138C0 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180017E80 (-HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B354 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180041DF8 (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18005E314 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampActEndStateChange(struct _HAM_ACTIVITY *a1, int a2)
{
  DWORD v2; // esi
  __int64 v4; // rbp
  _QWORD *Value; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  char v8; // al
  char v9; // al
  BOOL v10; // r14d
  __int64 v11; // rcx
  struct _HAM_DEPENDENCY_GROUP *v12; // r15
  struct _HAM_DEPENDENCY_GROUP *v13; // rbx
  int v14; // ebp
  unsigned int v15; // ebp
  struct _HAM_HOST_DEPENDENCY *v16; // rbx
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v21; // rsi
  struct _HOST_ACTIVITY_MANAGER *v22; // rcx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  char v26; // [rsp+80h] [rbp+8h] BYREF
  char v27; // [rsp+88h] [rbp+10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+18h] BYREF

  v2 = HampLockTrackerId;
  v4 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(v4);
  if ( a2 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
    {
      v27 = *((_BYTE *)a1 + 562);
      v28 = *((_QWORD *)a1 + 5);
      v26 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v23,
        (unsigned int)&unk_1800CFEC9,
        v24,
        v25,
        (__int64)&v28,
        (__int64)&v26,
        (__int64)&v27);
    }
    *((_BYTE *)a1 + 562) = 1;
    HampActSetPendState((__int64)a1, 6u);
    HampActResetToStopped(a1);
  }
  v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_DWORD *)a1 + 138) &= ~1u;
  HampHostUpdateActivityState(v7);
  v8 = *((_BYTE *)a1 + 562);
  if ( (v8 == 3 || v8 == 2) && (*((_DWORD *)a1 + 138) & 0x300) != 0 )
    HampActIssueStopRequestCallback(a1, 0);
  v9 = *((_BYTE *)a1 + 562);
  v10 = (v9 == 1 || v9 == 4) && ((*((_BYTE *)a1 + 120) & 0xC) != 0 || (*((_DWORD *)a1 + 28) & 0x4000) != 0);
  v11 = *((_QWORD *)a1 + 10);
  v12 = 0LL;
  v13 = *(struct _HAM_DEPENDENCY_GROUP **)(v11 + 704);
  if ( v13 )
  {
    HampActCheckEnterDependencyWorker(a1);
    v15 = *((_DWORD *)a1 + 138);
    *((_DWORD *)a1 + 138) = v15 & 0xFFFFFFFD;
    v14 = (v15 >> 1) & 1;
    if ( v14 )
      v12 = v13;
  }
  else
  {
    v14 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v11, 0);
  }
  if ( !a2 && *((_BYTE *)a1 + 562) == 4 )
  {
    v16 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v19 = *v18;
    if ( (*v18 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v18[2]-- == 1 )
      *v18 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v17 + 8) = 0;
  RtlReleaseSRWLockExclusive(v17);
  RtlWakeAddressAll((char *)a1 + 552);
  if ( v16 )
    HampHostDepDestroy(v16);
  if ( v10 )
  {
    v21 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)(v21 + 136));
    v22 = *(struct _HOST_ACTIVITY_MANAGER **)(v21 + 136);
    if ( *(_DWORD *)(v21 + 220) )
    {
      ++*(_QWORD *)(v21 + 232);
      HampManagerReleaseLockExclusive(v22);
      RtlWakeAddressAll(v21 + 232);
    }
    else
    {
      HampManagerReleaseLockExclusive(v22);
    }
  }
  if ( v14 )
    HampDepGroupRunStateChangeWorker(v12);
  RmHamHostUpdateSettings(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
}
