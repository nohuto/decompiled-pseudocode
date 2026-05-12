/*
 * XREFs of RaUnitStartResetIo @ 0x1400A2224
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x140033000 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidUnitClaimIrp @ 0x140014BFC (RaidUnitClaimIrp.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitCheckRemoveState @ 0x140021C30 (RaUnitCheckRemoveState.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140026404 (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 *     RaidAdapterScatterGatherExecute @ 0x14002A660 (RaidAdapterScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x14002B9D4 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1400593D0 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x14005C9E0 (RaidAdapterReleaseCryptoKeyResources.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x140071CF8 (RaidReleaseNvmeIceKeyResources.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1400A6948 (RaidResumeAndRestartUnitQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaUnitStartResetIo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  ULONG v6; // edi
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r13d
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // r13d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  bool v34; // bl
  __int64 *v35; // rax
  __int64 v36; // rcx
  void (__fastcall *v37)(__int64, _QWORD, __int64); // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  void (__fastcall *v41)(__int64, _QWORD, __int64); // rax
  int v42; // ebx
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rax
  ULONG_PTR v49; // r13
  bool v50; // zf
  __int64 v51; // r14
  ULONG_PTR v52; // rbx
  KSPIN_LOCK *v53; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v55; // rcx
  __int64 v56; // r8
  char v57; // al
  int v58; // r10d
  __int64 v59; // rcx
  KSPIN_LOCK v60; // r9
  _QWORD *v61; // rax
  ULONG_PTR v62; // rcx
  KSPIN_LOCK v63; // rdx
  KSPIN_LOCK *v64; // rax
  __int64 v65; // r8
  char v66; // al
  int v67; // r10d
  __int64 v68; // rcx
  KSPIN_LOCK v69; // r9
  _QWORD *v70; // rax
  ULONG_PTR v71; // rcx
  KSPIN_LOCK v72; // rdx
  KSPIN_LOCK *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r14
  LARGE_INTEGER v80; // rax
  LARGE_INTEGER v81; // rbx
  unsigned int v82; // r8d
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v86; // rdx
  LARGE_INTEGER v87; // rcx
  unsigned __int64 v88; // r8
  char v89; // r10
  unsigned __int64 v90; // r9
  __int64 v91; // rax
  unsigned __int64 v92; // r8
  signed __int32 v93; // eax
  signed __int32 v94; // ett
  __int64 v95; // r14
  unsigned int v96; // ebx
  unsigned int v97; // r8d
  __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned __int64 v100; // r10
  int v101; // eax
  int v102; // eax
  __int64 v103; // rax
  unsigned __int8 v104; // bl
  __int64 v105; // rsi
  unsigned __int64 v106; // rcx
  __int64 v107; // rdx
  ULONG *v108; // rax
  const EVENT_DESCRIPTOR *v109; // rdx
  __int64 v110; // rdx
  char v111; // r12
  _BYTE *v112; // r9
  unsigned __int8 v113; // si
  char v114; // r10
  char v115; // bl
  char v116; // r11
  char v117; // r14
  char *v118; // r14
  __int64 v119; // rax
  unsigned __int64 v120; // r13
  __int64 v121; // r8
  int v122; // ecx
  char v123; // cl
  char v124; // al
  char v125; // r8
  char *v126; // r11
  unsigned int v127; // eax
  ULONG v128[2]; // [rsp+20h] [rbp-E0h]
  __int64 v129; // [rsp+28h] [rbp-D8h]
  int v130; // [rsp+60h] [rbp-A0h]
  int v131; // [rsp+60h] [rbp-A0h]
  char v132; // [rsp+64h] [rbp-9Ch] BYREF
  char v133; // [rsp+65h] [rbp-9Bh] BYREF
  char v134; // [rsp+66h] [rbp-9Ah] BYREF
  __int64 v135; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-90h] BYREF
  __int64 v137; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  GUID v139; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v141; // [rsp+D0h] [rbp-30h]
  __int64 v142; // [rsp+D8h] [rbp-28h]
  __int64 v143; // [rsp+E0h] [rbp-20h]
  __int64 v144; // [rsp+E8h] [rbp-18h]
  __int64 *v145; // [rsp+F0h] [rbp-10h]
  __int64 v146; // [rsp+F8h] [rbp-8h]
  char *v147; // [rsp+100h] [rbp+0h]
  __int64 v148; // [rsp+108h] [rbp+8h]
  char *v149; // [rsp+110h] [rbp+10h]
  __int64 v150; // [rsp+118h] [rbp+18h]
  char *v151; // [rsp+120h] [rbp+20h]
  __int64 v152; // [rsp+128h] [rbp+28h]

  v3 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v137 = v8;
  v10 = RaUnitCheckRemoveState(v3, a2);
  if ( v10 < 0 )
    goto LABEL_179;
  v10 = RaUnitAcquireRemoveLock(v3, v9, 1);
  if ( v10 < 0 )
    goto LABEL_179;
  v130 = RaidUnitClaimIrp(v3, a2, 0LL, a3);
  if ( v130 >= 0 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v16 = 96LL;
    if ( *(_BYTE *)(v15 + 2) != 40 )
      v16 = 48LL;
    v17 = v137;
    v18 = *(_QWORD **)(v16 + v15);
    v19 = *(unsigned __int8 *)(v137 + 2);
    if ( (_BYTE)v19 == 40 )
      v19 = *(_DWORD *)(v137 + 20);
    if ( v19 == 16 )
    {
      v24 = 0;
LABEL_26:
      v25 = *(unsigned __int8 *)(v17 + 2);
      if ( (_BYTE)v25 == 40 )
        v25 = *(_DWORD *)(v17 + 20);
      if ( v25 == 16 && (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v15, 0x400000000000LL) )
      {
        v142 = 16LL;
        v141 = v7 + 5128;
        v144 = 16LL;
        v143 = v3 + 2104;
        LODWORD(v135) = *(_DWORD *)(v7 + 56);
        v145 = &v135;
        v132 = *(_BYTE *)(v3 + 104);
        v147 = &v132;
        v134 = *(_BYTE *)(v3 + 105);
        v149 = &v134;
        v133 = *(_BYTE *)(v3 + 106);
        v151 = &v133;
        v146 = 4LL;
        v148 = 1LL;
        v150 = 1LL;
        v152 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(v26, (unsigned __int8 *)dword_14016072B, v11, v27, 8u, &v140);
      }
      v18[82] = RaidUnitCompleteResetRequest;
      if ( *(_BYTE *)(v7 + 4434) )
      {
        v28 = v18[21];
        v29 = 24LL;
        if ( *(_BYTE *)(v28 + 2) != 40 )
          v29 = 12LL;
        if ( (*(_BYTE *)(v7 + 4435) & 4) != 0 )
        {
          v34 = (*(_DWORD *)(v29 + v28) & 0x40) != 0;
          if ( v18[13] )
          {
            v35 = (__int64 *)(v7 + 896);
            if ( v7 != -896 )
            {
              v36 = *v35;
              if ( *v35 )
              {
                v11 = *(_QWORD *)(v36 + 8);
                if ( v11 )
                {
                  if ( *(int *)(v7 + 924) >= 3
                    && (v37 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v11 + 240)) != 0LL )
                  {
                    LOBYTE(v11) = v34;
                    v37(v36, v18[13], v11);
                  }
                  else
                  {
                    LOBYTE(v11) = 1;
                    LOBYTE(v28) = v34;
                    KeFlushIoBuffers(v18[13], v28, v11);
                  }
                }
              }
            }
          }
          if ( v18[17] )
          {
            v38 = (__int64 *)(v7 + 896);
            if ( v7 != -896 )
            {
              v39 = *v38;
              if ( *v38 )
              {
                v40 = *(_QWORD *)(v39 + 8);
                if ( v40 )
                {
                  if ( *(int *)(v7 + 924) >= 3
                    && (v41 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v40 + 240)) != 0LL )
                  {
                    LOBYTE(v11) = v34;
                    v41(v39, v18[17], v11);
                  }
                  else
                  {
                    LOBYTE(v11) = 1;
                    LOBYTE(v40) = v34;
                    KeFlushIoBuffers(v18[17], v40, v11);
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( v18[17] )
          {
            v30 = RaidAdapterScatterGatherExecuteBidirectionalRequest(v7, (__int64)v18, v11);
            goto LABEL_57;
          }
          if ( (*(_DWORD *)(v29 + v28) & 0xC0) != 0 )
          {
            v30 = RaidAdapterScatterGatherExecute(v7, v18);
            goto LABEL_57;
          }
        }
      }
      v30 = RaidAdapterPostScatterGatherExecute(v7, (__int64)v18);
LABEL_57:
      v42 = v30;
      if ( v30 >= 0 )
        return;
      v130 = v30;
      if ( v24 )
      {
        v43 = v18[21];
        if ( *(_BYTE *)(v43 + 2) == 40 )
          v44 = *(_DWORD *)(v43 + 20);
        else
          v44 = *(unsigned __int8 *)(v43 + 2);
        _InterlockedDecrement((volatile signed __int32 *)(v3 + 1396));
        v130 = v42;
        v45 = v44 - 18;
        if ( v45 && (v46 = v45 - 1) != 0 )
        {
          if ( v46 != 13 )
            goto LABEL_68;
          RaidResumeAndRestartUnitQueue(v3);
        }
        else
        {
          RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24), v31, v32, v33);
        }
        v130 = v42;
      }
LABEL_68:
      v47 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      v48 = 96LL;
      if ( *(_BYTE *)(v47 + 2) != 40 )
        v48 = 48LL;
      v49 = *(_QWORD *)(v48 + v47);
      v50 = (*(_BYTE *)(v49 + 16) & 2) == 0;
      v51 = *(_QWORD *)(v49 + 224);
      v135 = v51;
      if ( v50 )
      {
LABEL_105:
        StorUnmapSenseInfo(v49, *(_QWORD *)(*(_QWORD *)(v51 + 24) + 8LL));
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
        {
          v78 = *(_QWORD *)(v51 + 3608);
          if ( v78 && *(_QWORD *)(v78 + 104) )
          {
LABEL_113:
            RaidReleaseNvmeIceKeyResources(v51, v49);
            goto LABEL_116;
          }
          v77 = *(_QWORD *)(v51 + 24);
          if ( *(_QWORD *)(v77 + 5680) )
LABEL_115:
            RaidAdapterReleaseCryptoKeyResources(v77, v49);
        }
        else
        {
          v77 = *(_QWORD *)(v51 + 24);
          if ( *(_QWORD *)(v77 + 5688) )
          {
            if ( (*(_BYTE *)(v77 + 112) & 0x10) == 0 )
              goto LABEL_115;
            goto LABEL_113;
          }
        }
LABEL_116:
        if ( *(_BYTE *)(v47 + 2) == 40 )
        {
          if ( (*(_BYTE *)(v49 + 16) & 0x40) != 0 )
          {
            v79 = *(_QWORD *)(v49 + 752);
            PerformanceFrequency.QuadPart = 1LL;
            if ( v47 && v79 )
            {
              if ( UseQPCTime )
                v80 = KeQueryPerformanceCounter(&PerformanceFrequency);
              else
                v80.QuadPart = KeQueryUnbiasedInterruptTime();
              v81 = v80;
              *(_BYTE *)(v79 + 3) = *(_BYTE *)(v47 + 3);
              *(_DWORD *)(v79 + 12) = *(_DWORD *)(v47 + 24);
              if ( (*(_DWORD *)(v47 + 24) & 0x40) != 0 )
                *(_DWORD *)(v79 + 16) = *(_DWORD *)(v47 + 60);
              if ( *(_BYTE *)(v47 + 3) == 48 )
                *(_DWORD *)(v79 + 64) = *(_DWORD *)(v47 + 44);
              if ( !*(_DWORD *)(v47 + 20) )
              {
                v82 = 0;
                if ( *(_DWORD *)(v47 + 56) )
                {
                  while ( 1 )
                  {
                    v83 = *(unsigned int *)(v47 + 4LL * v82 + 120);
                    if ( (unsigned int)v83 >= 0x80 )
                    {
                      v84 = *(unsigned int *)(v47 + 16);
                      if ( (unsigned int)v83 <= (unsigned int)v84 && *(_DWORD *)(v83 + v47) == 64 && v83 + 40 <= v84 )
                        break;
                    }
                    if ( ++v82 >= *(_DWORD *)(v47 + 56) )
                      goto LABEL_134;
                  }
                  *(_BYTE *)(v79 + 4) = *(_BYTE *)((unsigned int)v83 + v47 + 8);
                  *(_QWORD *)(v79 + 32) = *(_QWORD *)((unsigned int)v83 + v47 + 16);
                  *(_BYTE *)(v79 + 11) = *(_BYTE *)((unsigned int)v83 + v47 + 9);
                }
                else
                {
LABEL_134:
                  *(_BYTE *)(v79 + 3) = 48;
                  *(_DWORD *)(v79 + 64) = -1073741811;
                }
              }
              if ( UseQPCTime )
                PerformanceCounter = KeQueryPerformanceCounter(0LL);
              else
                PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
              if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v81.QuadPart )
                v88 = PerformanceCounter.QuadPart - v81.QuadPart;
              else
                v88 = PerformanceCounter.QuadPart - v81.QuadPart - 1;
              if ( UseQPCTime )
              {
                v87 = PerformanceFrequency;
                v89 = 0;
                if ( PerformanceFrequency.QuadPart && v88 )
                {
                  v90 = 1000 * (v88 % PerformanceFrequency.QuadPart);
                  v88 = v90 / PerformanceFrequency.QuadPart + 1000 * (v88 / PerformanceFrequency.QuadPart);
                  v86.QuadPart = 10000 * (v90 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
                  v89 = 10000 * (v90 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart + 16 * v88;
                }
              }
              else
              {
                v89 = v88;
              }
              if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
                McTemplateK0zx_EtwWriteTransfer(
                  v87.QuadPart,
                  v86.QuadPart,
                  v88,
                  L"Translate STORAGE_REQUEST_BLOCK result",
                  v89);
            }
            *(_QWORD *)(*(_QWORD *)(v49 + 752) + 48LL) = *(_QWORD *)(v49 + 176);
            *(_QWORD *)(*(_QWORD *)(v49 + 752) + 24LL) = *(_QWORD *)(v49 + 184);
            *(_QWORD *)(*(_QWORD *)(v49 + 752) + 56LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(v49 + 752) + 40LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = *(_QWORD *)(v49 + 752);
            *(_BYTE *)(v49 + 16) &= ~0x40u;
            *(_QWORD *)(v49 + 752) = 0LL;
          }
          else
          {
            *(_QWORD *)(v47 + 96) = 0LL;
            *(_QWORD *)(v47 + 64) = *(_QWORD *)(v49 + 184);
            *(_QWORD *)(v47 + 104) = 0LL;
            v95 = *(_QWORD *)(v49 + 192);
            if ( v95 )
            {
              if ( (*(_BYTE *)(v47 + 24) & 0xC0) == 0xC0 )
              {
                v96 = *(_DWORD *)(v47 + 56);
                v97 = 0;
                if ( v96 )
                {
                  while ( 1 )
                  {
                    v98 = 0LL;
                    v99 = *(unsigned int *)(v47 + 4LL * v97 + 120);
                    if ( (unsigned int)v99 >= 0x80 )
                    {
                      v100 = *(unsigned int *)(v47 + 16);
                      if ( (unsigned int)v99 <= (unsigned int)v100 && *(_DWORD *)(v99 + v47) == 1 && v99 + 24 <= v100 )
                        break;
                    }
                    if ( ++v97 >= v96 )
                      goto LABEL_169;
                  }
                  v98 = v99 + v47;
LABEL_169:
                  if ( v98 )
                    *(_QWORD *)(v98 + 16) = v95;
                }
              }
            }
            v101 = *(_DWORD *)(v47 + 24);
            if ( (v101 & 0x2000000) != 0 )
              *(_DWORD *)(v47 + 24) = v101 & 0xFDFFFFFF;
          }
          v51 = v135;
        }
        else
        {
          *(_QWORD *)(v47 + 48) = *(_QWORD *)(v49 + 176);
          *(_QWORD *)(v47 + 24) = *(_QWORD *)(v49 + 184);
          v102 = *(_DWORD *)(v47 + 12);
          *(_QWORD *)(v47 + 56) = 0LL;
          *(_QWORD *)(v47 + 40) = 0LL;
          if ( (v102 & 0x2000000) != 0 )
            *(_DWORD *)(v47 + 12) = v102 & 0xFDFFFFFF;
        }
        RaidXrbDeallocateResources(v49, 1);
        v91 = 24LL;
        if ( *(_BYTE *)(v47 + 2) != 40 )
          v91 = 12LL;
        if ( (*(_DWORD *)(v91 + v47) & 0x4000) == 0 )
        {
          v92 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v93 = *(_DWORD *)(v92 + *(_QWORD *)(v51 + 40));
          while ( (v93 & 1) == 0 )
          {
            v94 = v93;
            v93 = _InterlockedCompareExchange((volatile signed __int32 *)(v92 + *(_QWORD *)(v51 + 40)), v93 - 2, v93);
            if ( v94 == v93 )
              goto LABEL_177;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v51 + 520), 0, 0);
        }
LABEL_177:
        v8 = v137;
        goto LABEL_178;
      }
      v52 = v49 + 48;
      *(_QWORD *)&v139.Data1 = *(_QWORD *)(v51 + 560);
      PerformanceFrequency.QuadPart = (unsigned __int64)*(unsigned int *)(v49 + 84) << 6;
      v53 = (KSPIN_LOCK *)(PerformanceFrequency.QuadPart + *(_QWORD *)&v139.Data1 + 64LL);
      memset(&LockHandle, 0, sizeof(LockHandle));
      CurrentIrql = KeGetCurrentIrql();
      v55 = v53 + 5;
      if ( CurrentIrql == 2 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v55, &LockHandle);
        v56 = *(_QWORD *)&v139.Data1;
        v57 = *(_BYTE *)(v49 + 16);
        v58 = **(_DWORD **)&v139.Data1;
        if ( (v57 & 2) == 0 )
        {
LABEL_86:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          goto LABEL_101;
        }
        *(_BYTE *)(v49 + 16) = v57 & 0xFD;
        v59 = *(_QWORD *)v52;
        v60 = *v53;
        if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) == v52 )
        {
          v61 = *(_QWORD **)(v49 + 56);
          if ( *v61 == v52 )
          {
            *v61 = v59;
            *(_QWORD *)(v59 + 8) = v61;
            if ( (*(_DWORD *)(v49 + 96) & 1) == 0 )
            {
LABEL_81:
              if ( (v58 & 4) == 0 && v60 == v52 )
              {
                if ( (KSPIN_LOCK *)*v53 == v53 )
                  *(_DWORD *)(PerformanceFrequency.QuadPart + v56 + 112) = -1;
                else
                  *(_DWORD *)(PerformanceFrequency.QuadPart + v56 + 112) = *(_DWORD *)(*v53 + 32);
              }
              goto LABEL_86;
            }
            v62 = v49 + 64;
            if ( v53[4] == v49 + 64 )
              v53[4] = *(_QWORD *)v62;
            v63 = *(_QWORD *)v62;
            if ( *(_QWORD *)(*(_QWORD *)v62 + 8LL) == v62 )
            {
              v64 = *(KSPIN_LOCK **)(v49 + 72);
              if ( *v64 == v62 )
              {
                *v64 = v63;
                *(_QWORD *)(v63 + 8) = v64;
                *(_DWORD *)(v49 + 96) &= ~1u;
                goto LABEL_81;
              }
            }
          }
        }
LABEL_110:
        __fastfail(3u);
      }
      KeAcquireInStackQueuedSpinLock(v55, &LockHandle);
      v65 = *(_QWORD *)&v139.Data1;
      v66 = *(_BYTE *)(v49 + 16);
      v67 = **(_DWORD **)&v139.Data1;
      if ( (v66 & 2) != 0 )
      {
        *(_BYTE *)(v49 + 16) = v66 & 0xFD;
        v68 = *(_QWORD *)v52;
        v69 = *v53;
        if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) != v52 )
          goto LABEL_110;
        v70 = *(_QWORD **)(v49 + 56);
        if ( *v70 != v52 )
          goto LABEL_110;
        *v70 = v68;
        *(_QWORD *)(v68 + 8) = v70;
        if ( (*(_DWORD *)(v49 + 96) & 1) != 0 )
        {
          v71 = v49 + 64;
          if ( v53[4] == v49 + 64 )
            v53[4] = *(_QWORD *)v71;
          v72 = *(_QWORD *)v71;
          if ( *(_QWORD *)(*(_QWORD *)v71 + 8LL) != v71 )
            goto LABEL_110;
          v73 = *(KSPIN_LOCK **)(v49 + 72);
          if ( *v73 != v71 )
            goto LABEL_110;
          *v73 = v72;
          *(_QWORD *)(v72 + 8) = v73;
          *(_DWORD *)(v49 + 96) &= ~1u;
        }
        if ( (v67 & 4) == 0 && v69 == v52 )
        {
          if ( (KSPIN_LOCK *)*v53 == v53 )
            *(_DWORD *)(PerformanceFrequency.QuadPart + v65 + 112) = -1;
          else
            *(_DWORD *)(PerformanceFrequency.QuadPart + v65 + 112) = *(_DWORD *)(*v53 + 32);
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_101:
      if ( StorEtwLoggingEnabled )
      {
        v139 = 0LL;
        IoGetActivityIdIrp(a2, &v139);
        if ( byte_140173442 < 0 )
          McTemplateK0dud_EtwWriteTransfer(v75, v74, (__int64)&v139, v76, 4);
      }
      v51 = v135;
      goto LABEL_105;
    }
    v20 = v18[21];
    v15 = *(unsigned __int8 *)(v20 + 2);
    if ( (_BYTE)v15 == 40 )
      v21 = *(_DWORD *)(v20 + 20);
    else
      v21 = *(unsigned __int8 *)(v20 + 2);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 1396));
    v22 = v21 - 18;
    if ( v22 && (v23 = v22 - 1) != 0 )
    {
      if ( v23 != 13 )
      {
LABEL_24:
        v24 = 1;
        goto LABEL_26;
      }
      RaidPauseUnitQueue(v3);
    }
    else
    {
      RaidPauseAdapterQueue(*(_QWORD *)(v3 + 24));
    }
    v17 = v137;
    goto LABEL_24;
  }
  v12 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v13 = *(_DWORD *)(v12 + *(_QWORD *)(v3 + 40));
  while ( (v13 & 1) == 0 )
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + *(_QWORD *)(v3 + 40)), v13 - 2, v13);
    if ( v14 == v13 )
      goto LABEL_178;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
LABEL_178:
  v10 = v130;
LABEL_179:
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(v8 + 3) = RaidNtStatusToSrbStatus(v10);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(v129) = *(_DWORD *)(a2 + 48);
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x17u,
      (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      *(_QWORD *)(v3 + 8),
      a2,
      v129);
  }
  v103 = *(_QWORD *)(a2 + 184);
  v104 = *(_BYTE *)(v103 + 16) & 3;
  *(_QWORD *)(v103 + 16) = 0LL;
  v105 = *(_QWORD *)(v3 + 24);
  if ( (v104 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(v3) )
  {
    PoFxIdleComponent(**(_QWORD **)(v3 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 1864));
  }
  if ( v104 >= 2u && *(_QWORD *)(v105 + 5024) )
    RaidAdapterPoFxIdleComponent(v105, 0LL, 0LL);
  v50 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v50 )
    goto LABEL_255;
  v139 = 0LL;
  IoGetActivityIdIrp(a2, &v139);
  v107 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v107 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_255;
    v109 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_254;
  }
  if ( *(_BYTE *)v107 != 15 )
  {
    v106 = 12LL;
    if ( *(_BYTE *)v107 != 27 )
      goto LABEL_255;
    if ( *(_BYTE *)(v107 + 1) == 7 && !*(_DWORD *)(v107 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v108 = *(ULONG **)(a2 + 56);
        if ( v108 )
          v6 = *v108;
        LODWORD(v129) = *(_DWORD *)(a2 + 48);
        v128[0] = v6;
        McTemplateK0pqd_EtwWriteTransfer(12LL, v107, &v139, a2, *(_QWORD *)v128, v129);
      }
      goto LABEL_255;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_255;
    v109 = &EventPnpRequestComplete;
LABEL_254:
    v128[0] = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v106, v109, &v139, a2, *(_QWORD *)v128);
    goto LABEL_255;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_255;
  v110 = *(_QWORD *)(v107 + 8);
  v111 = 0;
  v112 = 0LL;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  if ( *(_BYTE *)(v110 + 2) == 40 )
  {
    v118 = 0LL;
    v132 = 0;
    if ( *(_DWORD *)(v110 + 20) )
      goto LABEL_255;
    v119 = 0LL;
    v131 = 0;
    LODWORD(v135) = *(_DWORD *)(v110 + 56);
    if ( !(_DWORD)v135 )
      goto LABEL_255;
    while ( 1 )
    {
      v106 = *(unsigned int *)(v110 + 4 * v119 + 120);
      if ( (unsigned int)v106 >= 0x80 )
      {
        v120 = *(unsigned int *)(v110 + 16);
        if ( (unsigned int)v106 < (unsigned int)v120 )
        {
          v121 = (unsigned int)v106;
          v122 = *(_DWORD *)(v106 + v110) - 64;
          if ( v122 )
          {
            v106 = (unsigned int)(v122 - 1);
            if ( (_DWORD)v106 )
            {
              if ( (_DWORD)v106 == 1 )
              {
                v106 = v121 + 40;
                if ( v121 + 40 <= v120 )
                {
                  if ( *(_DWORD *)(v121 + v110 + 12) )
                    v118 = (char *)(v121 + v110 + 32);
                  v112 = *(_BYTE **)(v121 + v110 + 24);
                  goto LABEL_225;
                }
              }
            }
            else
            {
              v106 = v121 + 56;
              if ( v121 + 56 <= v120 )
              {
                v132 = 1;
                if ( *(_BYTE *)(v121 + v110 + 10) )
                  v118 = (char *)(v121 + v110 + 24);
                v111 = *(_BYTE *)(v121 + v110 + 8);
                v112 = *(_BYTE **)(v121 + v110 + 16);
                v113 = *(_BYTE *)(v121 + v110 + 9);
              }
            }
          }
          else
          {
            v106 = v121 + 40;
            if ( v121 + 40 <= v120 )
            {
              if ( *(_BYTE *)(v121 + v110 + 10) )
                v118 = (char *)(v121 + v110 + 24);
              v112 = *(_BYTE **)(v121 + v110 + 16);
LABEL_225:
              v113 = *(_BYTE *)(v121 + v110 + 9);
              v111 = *(_BYTE *)(v121 + v110 + 8);
LABEL_226:
              if ( v118 )
              {
                v123 = *v118;
                v117 = 0;
                goto LABEL_229;
              }
              goto LABEL_255;
            }
          }
          if ( v132 )
            goto LABEL_226;
        }
      }
      v119 = (unsigned int)(v131 + 1);
      v131 = v119;
      if ( (unsigned int)v119 >= (unsigned int)v135 )
        goto LABEL_226;
    }
  }
  v123 = *(_BYTE *)(v110 + 72);
  v112 = *(_BYTE **)(v110 + 32);
  v113 = *(_BYTE *)(v110 + 11);
  v111 = *(_BYTE *)(v110 + 4);
  if ( *(_BYTE *)(v110 + 2) )
    goto LABEL_255;
LABEL_229:
  LOBYTE(v106) = v123 - 8;
  if ( (v106 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v110 + 3) == 1 || !v112 || !v113 )
    {
LABEL_248:
      if ( byte_140173441 < 0 )
      {
        if ( !v117 )
        {
          v116 = 0;
          v115 = 0;
          v114 = 0;
        }
        LOBYTE(v129) = *(_BYTE *)(v110 + 3);
        v128[0] = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v106, v110, &v139, a2, *(_QWORD *)v128, v129, v111, v114, v115, v116, a2);
      }
      goto LABEL_255;
    }
    v124 = *v112 & 0x7F;
    if ( v124 == 114 || v124 == 115 )
    {
      v106 = (unsigned __int64)&v112[v113];
      v125 = 0;
      if ( (unsigned __int64)(v112 + 8) > v106 )
        goto LABEL_246;
      v115 = v112[2];
      v114 = v112[1] & 0xF;
      v116 = v112[3];
    }
    else
    {
      v106 = (unsigned __int64)&v112[v113];
      v125 = 0;
      if ( (unsigned __int64)(v112 + 8) > v106 )
        goto LABEL_246;
      v126 = v112 + 13;
      v114 = v112[2] & 0xF;
      v127 = v113;
      if ( (unsigned int)(unsigned __int8)v112[7] + 8 <= v113 )
        v127 = (unsigned __int8)v112[7] + 8;
      v106 = (unsigned __int64)&v112[v127];
      if ( (unsigned __int64)v126 <= v106 )
        v115 = v112[12];
      if ( (unsigned __int64)(v112 + 14) > v106 )
        v116 = 0;
      else
        v116 = *v126;
    }
    v125 = 1;
LABEL_246:
    if ( v125 )
      v117 = 1;
    goto LABEL_248;
  }
LABEL_255:
  IofCompleteRequest((PIRP)a2, 0);
}
