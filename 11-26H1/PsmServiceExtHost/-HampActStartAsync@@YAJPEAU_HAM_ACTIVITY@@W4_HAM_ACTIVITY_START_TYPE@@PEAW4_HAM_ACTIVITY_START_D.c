/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138
 * Callers:
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001113C (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007DA28 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000C808 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180012A20 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampSystemJobIoAttributionStop@@YAXPEAX@Z @ 0x180013400 (-HampSystemJobIoAttributionStop@@YAXPEAX@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180013470 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18002BE64 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18002DC6C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x180056C70 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 *     ?HampSystemJobIoAttributionStart@@YAJPEAX@Z @ 0x18006428C (-HampSystemJobIoAttributionStart@@YAJPEAX@Z.c)
 */

__int64 __fastcall HampActStartAsync(__int64 a1, int a2, int *a3, unsigned __int64 *a4)
{
  int v7; // r12d
  int v8; // eax
  struct _PEB *v9; // rcx
  unsigned __int64 v10; // r15
  _OWORD *Heap; // rax
  __int64 v12; // rdx
  void *v13; // r14
  int v14; // esi
  struct _RM_HAM_ACTIVITY_HOST *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int CanBeStarted; // eax
  int v19; // edi
  __int64 v20; // rsi
  unsigned __int64 v21; // rbp
  __int64 v22; // rcx
  struct _HAM_ACTIVITY *v23; // rdx
  unsigned __int64 v24; // r11
  __int64 *Value; // rax
  __int64 v26; // r8
  bool v27; // zf
  int v29; // ebp
  DWORD v30; // r14d
  __int64 v31; // r15
  _QWORD *v32; // rsi
  __int64 v33; // rsi
  __int64 *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  struct _RM_HAM_ACTIVITY_HOST *v38; // rcx
  unsigned __int64 v39; // [rsp+40h] [rbp-48h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v40; // [rsp+48h] [rbp-40h] BYREF
  int v41; // [rsp+98h] [rbp+10h] BYREF
  int *v42; // [rsp+A0h] [rbp+18h]

  v42 = a3;
  v39 = 0LL;
  v7 = 0;
  if ( a2 != 1 || (*(_DWORD *)(a1 + 112) & 0x40000) == 0 )
  {
    v40 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    v8 = HampUtilQueryHostHistoricCommitUse(v40, &v39);
    v9 = NtCurrentPeb();
    v10 = v39;
    if ( v8 < 0 )
      v10 = 0LL;
    Heap = RtlAllocateHeap(v9->ProcessHeap, 0, 0x30uLL);
    v13 = Heap;
    if ( Heap )
    {
      *Heap = 0LL;
      Heap[1] = 0LL;
      Heap[2] = 0LL;
      RtlQueryPerformanceCounter(Heap);
    }
    LOBYTE(v12) = 2;
    v14 = HampActBeginStateChange(a1, v12);
    if ( v14 < 0 )
    {
      v19 = 13;
      v29 = 0x2000;
LABEL_56:
      if ( v13 )
        HampFreeHeap(v13);
      goto LABEL_58;
    }
    v15 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 0;
    HampHostUpdateActivityState(v15);
    v16 = *(_QWORD *)(a1 + 512);
    *(_DWORD *)(a1 + 552) |= 4u;
    if ( v16 && a2 == 1 )
    {
      v19 = 13;
      v14 = -1073741776;
      v29 = 12288;
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 520);
      if ( v17 && !v16 )
        *(_QWORD *)(a1 + 512) = v17;
      if ( v13 )
      {
        CanBeStarted = HampActCanBeStarted(a1);
        v19 = CanBeStarted;
        if ( CanBeStarted == 12 )
        {
          v14 = -1058275327;
          v29 = 20480;
        }
        else if ( (unsigned int)(CanBeStarted - 1) <= 4 )
        {
          v14 = -1058275328;
          v29 = 24576;
        }
        else
        {
          if ( (unsigned int)(CanBeStarted - 6) > 5 )
          {
            *(_QWORD *)(a1 + 528) = v13;
            v13 = 0LL;
            if ( a2 == 1 )
            {
              v36 = *(_QWORD *)(a1 + 64);
              v37 = ((*(_DWORD *)(a1 + 552) & 2) == 0) | 2;
              v41 = 0;
              HampHostQueueTerminateEx(v40, 1LL, 5376LL, v36, v37, 0, 0LL, &v41);
            }
            v20 = *(_QWORD *)(a1 + 80);
            v21 = *(_QWORD *)(a1 + 400);
            if ( v10 && v10 <= *(_QWORD *)(a1 + 456) && v21 && (*(_BYTE *)(a1 + 408) & 1) != 0 )
              v21 = v10;
            if ( (*(_BYTE *)(a1 + 480) & 0x20) != 0 )
            {
              v22 = 1184LL;
              if ( v20 )
                v22 = v20 + 1128;
              v23 = *(struct _HAM_ACTIVITY **)(v20 + 1008);
              v24 = *(_QWORD *)v22 & -(__int64)((*(_QWORD *)(v20 + 664) & 0x2000000000000LL) != 0);
              if ( v23
                && v23 != (struct _HAM_ACTIVITY *)a1
                && (int)HampActCompareForMaxCommit((struct _HAM_ACTIVITY *)a1, v23, 1u) <= 0 )
              {
                v21 = 0LL;
              }
            }
            else
            {
              v24 = 0LL;
            }
            if ( v21 != -1LL )
            {
              if ( v21 < v24 )
                v21 = 0LL;
              else
                v21 -= v24;
            }
            if ( HampLockTrackerId != -1 )
            {
              Value = (__int64 *)TlsGetValue(HampLockTrackerId);
              v26 = *Value;
              if ( (*Value & 2) == 0 )
                NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
              v27 = Value[2]-- == 1;
              if ( v27 )
                *Value = v26 & 0xFFFFFFFFFFFFFFFDuLL;
            }
            *(_DWORD *)(v20 + 8) = 0;
            RtlReleaseSRWLockExclusive(v20);
            if ( a4 )
              *a4 = v21;
            if ( (*(_DWORD *)(a1 + 112) & 0x4000000) != 0 )
            {
              v14 = HampSystemJobIoAttributionStart(*((HANDLE *)v40 + 72));
              if ( v14 < 0 )
              {
                v19 = 13;
                v29 = 0x8000;
                goto LABEL_55;
              }
              v30 = HampLockTrackerId;
              v31 = *(_QWORD *)(a1 + 80);
              if ( HampLockTrackerId != -1 )
              {
                v32 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v30) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                  NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
                *v32 |= 2uLL;
                ++v32[2];
              }
              CempLockAcquireExclusive(v31);
              *(_DWORD *)(a1 + 552) |= 0x80u;
              v33 = *(_QWORD *)(a1 + 80);
              if ( HampLockTrackerId != -1 )
              {
                v34 = (__int64 *)TlsGetValue(HampLockTrackerId);
                v35 = *v34;
                if ( (*v34 & 2) == 0 )
                  NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
                v27 = v34[2]-- == 1;
                if ( v27 )
                  *v34 = v35 & 0xFFFFFFFFFFFFFFFDuLL;
              }
              *(_DWORD *)(v33 + 8) = 0;
              RtlReleaseSRWLockExclusive(v33);
              v7 = 1;
            }
            v14 = HampRmContextAcquireResourceSet(*(struct HAM_ACTIVITY_RM_CONTEXT **)(a1 + 88), v21);
            if ( v14 >= 0 )
            {
              HampActEndStateChange((struct _HAM_ACTIVITY *)a1, 0);
              v14 = 0;
              goto LABEL_32;
            }
            v19 = 13;
            v13 = 0LL;
            v29 = 36864;
            if ( v7 )
            {
              HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80), 0);
              v38 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
              *(_DWORD *)(a1 + 552) &= ~0x80u;
              HampHostReleaseLockExclusive(v38);
              HampSystemJobIoAttributionStop(*(HANDLE *)(*(_QWORD *)(a1 + 80) + 576LL));
            }
            goto LABEL_55;
          }
          v14 = -1058275324;
          v29 = 28672;
        }
      }
      else
      {
        v19 = 13;
        v14 = -1073741801;
        v29 = 0x4000;
      }
    }
    HampHostReleaseLockExclusive(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
LABEL_55:
    HampActEndStateChange((struct _HAM_ACTIVITY *)a1, 1u);
    goto LABEL_56;
  }
  v19 = 13;
  v14 = -1073741776;
  v29 = 4096;
LABEL_58:
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v40 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 40);
    v41 = v29;
    LODWORD(v39) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E12B0,
      (unsigned int)&unk_1800CFDBD,
      (_DWORD)a3,
      (_DWORD)a4,
      (__int64)&v39,
      (__int64)&v40,
      (__int64)&v41);
  }
LABEL_32:
  *v42 = v19;
  return (unsigned int)v14;
}
