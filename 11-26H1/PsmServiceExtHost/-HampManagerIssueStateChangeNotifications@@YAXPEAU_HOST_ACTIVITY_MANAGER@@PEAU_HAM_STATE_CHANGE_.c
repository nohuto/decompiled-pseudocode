/*
 * XREFs of ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x18003B6D4
 * Callers:
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000C624 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003A7E0 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CemRcTableGetNext @ 0x18003BDF0 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18003C4D4 (CemRcTableGetFirst.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampManagerIssueStateChangeNotifications(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *a2,
        char a3)
{
  __int64 i; // rax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  bool v9; // zf
  const wchar_t *v10; // r14
  DWORD v11; // esi
  _QWORD *Value; // rdi
  int v13; // esi
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  DWORD v18; // esi
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  _DWORD *v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  char *Heap; // rax
  __int64 v26; // rdx
  struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  _QWORD *v30; // rax
  __int64 v31; // rcx
  char v32; // [rsp+30h] [rbp-89h] BYREF
  int v33; // [rsp+34h] [rbp-85h] BYREF
  _DWORD v34[4]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v35; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-59h] BYREF
  void *v38; // [rsp+70h] [rbp-49h]
  int v39; // [rsp+78h] [rbp-41h]
  int v40; // [rsp+7Ch] [rbp-3Dh]
  __int64 *v41; // [rsp+80h] [rbp-39h]
  __int64 v42; // [rsp+88h] [rbp-31h]
  _DWORD *v43; // [rsp+90h] [rbp-29h]
  __int64 v44; // [rsp+98h] [rbp-21h]
  const wchar_t *v45; // [rsp+A0h] [rbp-19h]
  int v46; // [rsp+A8h] [rbp-11h]
  int v47; // [rsp+ACh] [rbp-Dh]
  char *v48; // [rsp+B0h] [rbp-9h]
  __int64 v49; // [rsp+B8h] [rbp-1h]
  int *v50; // [rsp+C0h] [rbp+7h]
  __int64 v51; // [rsp+C8h] [rbp+Fh]

  for ( i = CemRcTableGetFirst((char *)a1 + 304); ; i = CemRcTableGetNext(v24) )
  {
    v24 = i;
    if ( !i )
      break;
    v6 = *((_DWORD *)a2 + 135);
    if ( v6 )
    {
      v7 = *(_DWORD *)(i + 168);
      if ( v7 )
      {
        if ( v6 != v7 )
          continue;
      }
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 != 1 )
        continue;
      v8 = *(_DWORD *)(v24 + 172);
      v9 = (v8 & 2) == 0;
    }
    else
    {
      v8 = *(_DWORD *)(v24 + 172);
      v9 = (v8 & 1) == 0;
    }
    if ( !v9 && ((v8 & 4) != 0 && (a3 & 1) != 0 || (v8 & 8) != 0 && (a3 & 2) != 0 || (a3 & 4) != 0 && (v8 & 0x10) != 0) )
    {
      if ( (unsigned int)dword_1800E12B0 > 5 )
      {
        v10 = (const wchar_t *)((char *)a2 + 8);
        v11 = HampLockTrackerId;
        v33 = *((_DWORD *)a2 + 1);
        v32 = *(_BYTE *)a2;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 0x200uLL;
          ++Value[10];
        }
        RtlAcquireSRWLockShared(v24 + 40);
        v13 = *(_DWORD *)(v24 + 176);
        if ( HampLockTrackerId != -1 )
        {
          v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v15 = *v14;
          if ( (*v14 & 0x200) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          v9 = v14[10]-- == 1;
          if ( v9 )
            *v14 = v15 & 0xFFFFFFFFFFFFFDFFuLL;
        }
        RtlReleaseSRWLockShared(v24 + 40);
        v35 = *(_QWORD *)(v24 + 152);
        v50 = &v33;
        v48 = &v32;
        v34[0] = v13;
        v51 = 4LL;
        v49 = 1LL;
        if ( a2 == (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)-8LL )
        {
          v10 = &word_1800BBB1C;
          v17 = 2;
        }
        else
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v10[v16] );
          v17 = 2 * v16 + 2;
        }
        v46 = v17;
        v45 = v10;
        v43 = v34;
        v47 = 0;
        v41 = &v35;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E12B8;
        v44 = 4LL;
        v42 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 0LL;
        UserData.Size = *(unsigned __int16 *)off_1800E12B8;
        v38 = &unk_1800CF96E;
        UserData.Reserved = 2;
        v39 = 81;
        v40 = 1;
        v34[2] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
      }
      if ( (*(_BYTE *)(v24 + 144) & 1) != 0 )
      {
        (*(void (__fastcall **)(struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *, _QWORD))(v24 + 128))(
          a2,
          *(_QWORD *)(v24 + 136));
      }
      else
      {
        v18 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v19 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *v19 |= 0x200uLL;
          ++v19[10];
        }
        RtlAcquireSRWLockShared(v24 + 40);
        if ( *(_DWORD *)(v24 + 120) || *(_DWORD *)(v24 + 124) )
        {
          v20 = *(_QWORD *)(v24 + 128);
          v21 = 0LL;
          v33 = 0;
          RtlAcquireSRWLockExclusive(v20 + 24);
          if ( *(_BYTE *)(v20 + 32) || (int)RtlQueryWnfMetaNotification(&v33, 2LL, *(_QWORD *)(v24 + 120)) >= 0 && !v33 )
          {
            Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x23CuLL);
            v21 = Heap;
            if ( Heap )
            {
              v26 = 4LL;
              *((_QWORD *)Heap + 2) = *(_QWORD *)(v24 + 120);
              v27 = a2;
              v28 = Heap + 28;
              do
              {
                *v28 = *(_OWORD *)v27;
                v28[1] = *((_OWORD *)v27 + 1);
                v28[2] = *((_OWORD *)v27 + 2);
                v28[3] = *((_OWORD *)v27 + 3);
                v28[4] = *((_OWORD *)v27 + 4);
                v28[5] = *((_OWORD *)v27 + 5);
                v28[6] = *((_OWORD *)v27 + 6);
                v28 += 8;
                v29 = *((_OWORD *)v27 + 7);
                v27 = (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)((char *)v27 + 128);
                *(v28 - 1) = v29;
                --v26;
              }
              while ( v26 );
              *v28 = *(_OWORD *)v27;
              v28[1] = *((_OWORD *)v27 + 1);
              v21[6] = 544;
              v30 = *(_QWORD **)(v20 + 8);
              if ( *v30 != v20 )
                __fastfail(3u);
              *(_QWORD *)v21 = v20;
              *((_QWORD *)v21 + 1) = v30;
              *v30 = v21;
              *(_QWORD *)(v20 + 8) = v21;
              v21 = 0LL;
              if ( !*(_BYTE *)(v20 + 32) )
              {
                v31 = *(_QWORD *)(v20 + 16);
                *(_BYTE *)(v20 + 32) = 1;
                TpPostWork(v31);
              }
            }
          }
          else
          {
            RtlPublishWnfStateData(*(_QWORD *)(v24 + 120), 0LL, a2, 544LL, 0LL);
          }
          RtlReleaseSRWLockExclusive(v20 + 24);
          if ( v21 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
        }
        if ( HampLockTrackerId != -1 )
        {
          v22 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v23 = *v22;
          if ( (*v22 & 0x200) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          v9 = v22[10]-- == 1;
          if ( v9 )
            *v22 = v23 & 0xFFFFFFFFFFFFFDFFuLL;
        }
        RtlReleaseSRWLockShared(v24 + 40);
      }
    }
  }
}
