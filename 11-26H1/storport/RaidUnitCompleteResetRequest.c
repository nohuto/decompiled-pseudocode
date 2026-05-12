/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x140024200
 * Callers:
 *     <none>
 * Callees:
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140026404 (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidLogRequestComplete @ 0x14002A288 (RaidLogRequestComplete.c)
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
 */

void __fastcall RaidUnitCompleteResetRequest(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  int v6; // edx
  __int64 v7; // r15
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // edi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r15
  bool v24; // zf
  __int64 v25; // r12
  __int64 v26; // rbx
  KSPIN_LOCK *v27; // r12
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v29; // rcx
  __int64 v30; // r8
  char v31; // al
  int v32; // r10d
  __int64 v33; // rcx
  KSPIN_LOCK v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rcx
  KSPIN_LOCK v37; // rdx
  KSPIN_LOCK *v38; // rax
  __int64 v39; // r8
  char v40; // al
  int v41; // r10d
  __int64 v42; // rcx
  KSPIN_LOCK v43; // r9
  _QWORD *v44; // rax
  __int64 v45; // rcx
  KSPIN_LOCK v46; // rdx
  KSPIN_LOCK *v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // r9d
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r13
  LARGE_INTEGER v54; // rax
  LARGE_INTEGER v55; // rbx
  unsigned int v56; // r8d
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v60; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v62; // r8
  char v63; // r10
  unsigned __int64 v64; // r9
  __int64 v65; // r12
  unsigned int v66; // r11d
  unsigned int v67; // r8d
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r10
  int v71; // eax
  int v72; // eax
  __int64 v73; // rax
  unsigned __int64 v74; // r8
  signed __int32 v75; // eax
  signed __int32 v76; // ett
  __int64 v77; // rbx
  unsigned __int64 v78; // rcx
  __int64 v79; // rdx
  int *v80; // rax
  void *v81; // rdx
  __int64 v82; // rdx
  char v83; // r13
  _BYTE *v84; // r9
  unsigned __int8 v85; // si
  char v86; // r10
  char v87; // bl
  char v88; // r11
  char v89; // r15
  char *v90; // r15
  int v91; // ecx
  __int64 v92; // rax
  unsigned __int64 v93; // r12
  __int64 v94; // r8
  int v95; // ecx
  char v96; // cl
  char v97; // al
  char v98; // r8
  char *v99; // r11
  unsigned int v100; // eax
  char v101; // [rsp+60h] [rbp-A0h] BYREF
  char v102; // [rsp+61h] [rbp-9Fh] BYREF
  char v103; // [rsp+62h] [rbp-9Eh] BYREF
  char v104; // [rsp+63h] [rbp-9Dh] BYREF
  int v105; // [rsp+64h] [rbp-9Ch]
  __int64 v106; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-90h] BYREF
  __int64 v108; // [rsp+78h] [rbp-88h]
  __int64 v109; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-78h] BYREF
  __int128 v111; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v112; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v113[18]; // [rsp+C0h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 60LL;
  v3 = *(_QWORD *)(a1 + 224);
  v4 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)&v111 = a1;
  v6 = *(unsigned __int8 *)(v1 + 2);
  v108 = v1;
  v109 = v3;
  if ( (_BYTE)v6 != 40 )
    v2 = 16LL;
  v7 = *(unsigned int *)(v2 + v1);
  if ( (_BYTE)v6 == 40 )
    v8 = *(_DWORD *)(v1 + 20);
  else
    v8 = v6;
  v105 = v8;
  if ( v8 != 16 )
  {
    if ( (_BYTE)v6 == 40 )
      v6 = *(_DWORD *)(v1 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 1396));
    v9 = v6 - 18;
    if ( v9 && (v10 = v9 - 1) != 0 )
    {
      if ( v10 == 13 )
        RaidResumeAndRestartUnitQueue(v3);
    }
    else
    {
      RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24));
    }
  }
  v11 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v11 == 40 )
    v11 = *(_DWORD *)(v1 + 20);
  LOBYTE(v12) = 0;
  if ( v11 == 16 && (unsigned int)dword_140172178 > 5 && (unsigned __int8)tlgKeywordOn(a1, 0x400000000000LL) )
  {
    v15 = *(_QWORD *)(v3 + 24);
    v113[5] = 16LL;
    v113[7] = 16LL;
    v113[4] = v15 + 5128;
    v113[6] = v3 + 2104;
    LODWORD(v106) = *(_DWORD *)(v15 + 56);
    v113[8] = (__int64)&v106;
    v101 = *(_BYTE *)(v3 + 104);
    v113[10] = (__int64)&v101;
    v103 = *(_BYTE *)(v3 + 105);
    v113[12] = (__int64)&v103;
    v104 = *(_BYTE *)(v3 + 106);
    v113[14] = (__int64)&v104;
    v16 = *(_BYTE *)(v1 + 3) & 0x3F;
    v113[9] = 4LL;
    v102 = v16;
    v113[16] = (__int64)&v102;
    v113[11] = 1LL;
    v113[13] = 1LL;
    v113[15] = 1LL;
    v113[17] = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v15, (int)&dword_140160791, v13, v14, 9u, (__int64)v113);
  }
  v17 = *(_QWORD *)(v4 + 184);
  v18 = *(_BYTE *)(v17 + 16) & 3;
  *(_QWORD *)(v17 + 16) = 0LL;
  v19 = *(_QWORD *)(v3 + 24);
  if ( (v18 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(v3) )
  {
    PoFxIdleComponent(**(_QWORD **)(v3 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 1864));
  }
  if ( v18 >= 2u && *(_QWORD *)(v19 + 5024) )
    RaidAdapterPoFxIdleComponent(v19, 0LL, 0LL);
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v3, *(_DWORD *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  *(_DWORD *)(v4 + 48) = RaidSrbStatusToNtStatus(*(_BYTE *)(v108 + 3));
  v20 = *(_QWORD *)(v4 + 184);
  *(_QWORD *)(v4 + 56) = v7;
  v21 = *(_QWORD *)(v20 + 8);
  v22 = 96LL;
  if ( *(_BYTE *)(v21 + 2) != 40 )
    v22 = 48LL;
  v23 = *(_QWORD *)(v22 + v21);
  v24 = (*(_BYTE *)(v23 + 16) & 2) == 0;
  v25 = *(_QWORD *)(v23 + 224);
  v106 = v25;
  if ( !v24 )
  {
    v26 = v23 + 48;
    *(_QWORD *)&v112 = *(_QWORD *)(v25 + 560);
    PerformanceFrequency.QuadPart = (unsigned __int64)*(unsigned int *)(v23 + 84) << 6;
    v27 = (KSPIN_LOCK *)(PerformanceFrequency.QuadPart + v112 + 64);
    memset(&LockHandle, 0, sizeof(LockHandle));
    CurrentIrql = KeGetCurrentIrql();
    v29 = v27 + 5;
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v29, &LockHandle);
      v30 = v112;
      v31 = *(_BYTE *)(v23 + 16);
      v32 = *(_DWORD *)v112;
      if ( (v31 & 2) == 0 )
      {
LABEL_46:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_61;
      }
      *(_BYTE *)(v23 + 16) = v31 & 0xFD;
      v33 = *(_QWORD *)v26;
      v34 = *v27;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == v26 )
      {
        v35 = *(_QWORD **)(v23 + 56);
        if ( *v35 == v26 )
        {
          *v35 = v33;
          *(_QWORD *)(v33 + 8) = v35;
          if ( (*(_DWORD *)(v23 + 96) & 1) == 0 )
          {
LABEL_41:
            if ( (v32 & 4) == 0 && v34 == v26 )
            {
              if ( (KSPIN_LOCK *)*v27 == v27 )
                *(_DWORD *)(PerformanceFrequency.QuadPart + v30 + 112) = -1;
              else
                *(_DWORD *)(PerformanceFrequency.QuadPart + v30 + 112) = *(_DWORD *)(*v27 + 32);
            }
            goto LABEL_46;
          }
          v36 = v23 + 64;
          if ( v27[4] == v23 + 64 )
            v27[4] = *(_QWORD *)v36;
          v37 = *(_QWORD *)v36;
          if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) == v36 )
          {
            v38 = *(KSPIN_LOCK **)(v23 + 72);
            if ( *v38 == v36 )
            {
              *v38 = v37;
              *(_QWORD *)(v37 + 8) = v38;
              *(_DWORD *)(v23 + 96) &= ~1u;
              goto LABEL_41;
            }
          }
        }
      }
LABEL_70:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLock(v29, &LockHandle);
    v39 = v112;
    v40 = *(_BYTE *)(v23 + 16);
    v41 = *(_DWORD *)v112;
    if ( (v40 & 2) != 0 )
    {
      *(_BYTE *)(v23 + 16) = v40 & 0xFD;
      v42 = *(_QWORD *)v26;
      v43 = *v27;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
        goto LABEL_70;
      v44 = *(_QWORD **)(v23 + 56);
      if ( *v44 != v26 )
        goto LABEL_70;
      *v44 = v42;
      *(_QWORD *)(v42 + 8) = v44;
      if ( (*(_DWORD *)(v23 + 96) & 1) != 0 )
      {
        v45 = v23 + 64;
        if ( v27[4] == v23 + 64 )
          v27[4] = *(_QWORD *)v45;
        v46 = *(_QWORD *)v45;
        if ( *(_QWORD *)(*(_QWORD *)v45 + 8LL) != v45 )
          goto LABEL_70;
        v47 = *(KSPIN_LOCK **)(v23 + 72);
        if ( *v47 != v45 )
          goto LABEL_70;
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
        *(_DWORD *)(v23 + 96) &= ~1u;
      }
      if ( (v41 & 4) == 0 && v43 == v26 )
      {
        if ( (KSPIN_LOCK *)*v27 == v27 )
          *(_DWORD *)(PerformanceFrequency.QuadPart + v39 + 112) = -1;
        else
          *(_DWORD *)(PerformanceFrequency.QuadPart + v39 + 112) = *(_DWORD *)(*v27 + 32);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_61:
    if ( StorEtwLoggingEnabled )
    {
      v112 = 0LL;
      IoGetActivityIdIrp(v4, &v112);
      if ( byte_140173442 < 0 )
        McTemplateK0dud_EtwWriteTransfer(v49, v48, (unsigned int)&v112, v50, 4);
    }
    v25 = v106;
  }
  StorUnmapSenseInfo(v23, *(_QWORD *)(*(_QWORD *)(v25 + 24) + 8LL));
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v51 = *(_QWORD *)(v25 + 24);
    if ( !*(_QWORD *)(v51 + 5688) )
      goto LABEL_76;
    if ( (*(_BYTE *)(v51 + 112) & 0x10) != 0 )
      goto LABEL_73;
LABEL_75:
    RaidAdapterReleaseCryptoKeyResources(v51, v23);
    goto LABEL_76;
  }
  v52 = *(_QWORD *)(v25 + 3608);
  if ( v52 && *(_QWORD *)(v52 + 104) )
  {
LABEL_73:
    RaidReleaseNvmeIceKeyResources(v25, v23);
    goto LABEL_76;
  }
  v51 = *(_QWORD *)(v25 + 24);
  if ( *(_QWORD *)(v51 + 5680) )
    goto LABEL_75;
LABEL_76:
  if ( *(_BYTE *)(v21 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v23 + 16) & 0x40) != 0 )
    {
      v53 = *(_QWORD *)(v23 + 752);
      PerformanceFrequency.QuadPart = 1LL;
      if ( v21 && v53 )
      {
        if ( UseQPCTime )
          v54 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v54.QuadPart = KeQueryUnbiasedInterruptTime();
        v55 = v54;
        *(_BYTE *)(v53 + 3) = *(_BYTE *)(v21 + 3);
        *(_DWORD *)(v53 + 12) = *(_DWORD *)(v21 + 24);
        if ( (*(_DWORD *)(v21 + 24) & 0x40) != 0 )
          *(_DWORD *)(v53 + 16) = *(_DWORD *)(v21 + 60);
        if ( *(_BYTE *)(v21 + 3) == 48 )
          *(_DWORD *)(v53 + 64) = *(_DWORD *)(v21 + 44);
        if ( !*(_DWORD *)(v21 + 20) )
        {
          v56 = 0;
          if ( *(_DWORD *)(v21 + 56) )
          {
            while ( 1 )
            {
              v57 = *(unsigned int *)(v21 + 4LL * v56 + 120);
              if ( (unsigned int)v57 >= 0x80 )
              {
                v58 = *(unsigned int *)(v21 + 16);
                if ( (unsigned int)v57 <= (unsigned int)v58 && *(_DWORD *)(v57 + v21) == 64 && v57 + 40 <= v58 )
                  break;
              }
              if ( ++v56 >= *(_DWORD *)(v21 + 56) )
                goto LABEL_94;
            }
            *(_BYTE *)(v53 + 4) = *(_BYTE *)((unsigned int)v57 + v21 + 8);
            *(_QWORD *)(v53 + 32) = *(_QWORD *)((unsigned int)v57 + v21 + 16);
            *(_BYTE *)(v53 + 11) = *(_BYTE *)((unsigned int)v57 + v21 + 9);
          }
          else
          {
LABEL_94:
            *(_BYTE *)(v53 + 3) = 48;
            *(_DWORD *)(v53 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v55.QuadPart )
          v62 = PerformanceCounter.QuadPart - v55.QuadPart;
        else
          v62 = PerformanceCounter.QuadPart - v55.QuadPart - 1;
        if ( UseQPCTime )
        {
          LowPart = PerformanceFrequency.LowPart;
          v63 = 0;
          if ( PerformanceFrequency.QuadPart && v62 )
          {
            v64 = 1000 * (v62 % PerformanceFrequency.QuadPart);
            v62 = v64 / PerformanceFrequency.QuadPart + 1000 * (v62 / PerformanceFrequency.QuadPart);
            v60.QuadPart = 10000 * (v64 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v63 = 10000 * (v64 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart + 16 * v62;
          }
        }
        else
        {
          v63 = v62;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v60.LowPart,
            v62,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v63);
      }
      v3 = v109;
      *(_QWORD *)(*(_QWORD *)(v23 + 752) + 48LL) = *(_QWORD *)(v23 + 176);
      *(_QWORD *)(*(_QWORD *)(v23 + 752) + 24LL) = *(_QWORD *)(v23 + 184);
      *(_QWORD *)(*(_QWORD *)(v23 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v23 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v4 + 184) + 8LL) = *(_QWORD *)(v23 + 752);
      *(_BYTE *)(v23 + 16) &= ~0x40u;
      *(_QWORD *)(v23 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v21 + 96) = 0LL;
      *(_QWORD *)(v21 + 64) = *(_QWORD *)(v23 + 184);
      *(_QWORD *)(v21 + 104) = 0LL;
      v65 = *(_QWORD *)(v23 + 192);
      if ( v65 )
      {
        if ( (*(_BYTE *)(v21 + 24) & 0xC0) == 0xC0 )
        {
          v66 = *(_DWORD *)(v21 + 56);
          v67 = 0;
          if ( v66 )
          {
            while ( 1 )
            {
              v68 = 0LL;
              v69 = *(unsigned int *)(v21 + 4LL * v67 + 120);
              if ( (unsigned int)v69 >= 0x80 )
              {
                v70 = *(unsigned int *)(v21 + 16);
                if ( (unsigned int)v69 <= (unsigned int)v70 && *(_DWORD *)(v69 + v21) == 1 && v69 + 24 <= v70 )
                  break;
              }
              if ( ++v67 >= v66 )
                goto LABEL_121;
            }
            v68 = v69 + v21;
LABEL_121:
            if ( v68 )
              *(_QWORD *)(v68 + 16) = v65;
          }
        }
      }
      v71 = *(_DWORD *)(v21 + 24);
      v25 = v106;
      if ( (v71 & 0x2000000) != 0 )
        *(_DWORD *)(v21 + 24) = v71 & 0xFDFFFFFF;
    }
  }
  else
  {
    *(_QWORD *)(v21 + 48) = *(_QWORD *)(v23 + 176);
    *(_QWORD *)(v21 + 24) = *(_QWORD *)(v23 + 184);
    v72 = *(_DWORD *)(v21 + 12);
    *(_QWORD *)(v21 + 56) = 0LL;
    *(_QWORD *)(v21 + 40) = 0LL;
    if ( (v72 & 0x2000000) != 0 )
      *(_DWORD *)(v21 + 12) = v72 & 0xFDFFFFFF;
  }
  RaidXrbDeallocateResources(v23, 1);
  v73 = 24LL;
  if ( *(_BYTE *)(v21 + 2) != 40 )
    v73 = 12LL;
  if ( (*(_DWORD *)(v73 + v21) & 0x4000) == 0 )
  {
    v74 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v75 = *(_DWORD *)(v74 + *(_QWORD *)(v25 + 40));
    while ( (v75 & 1) == 0 )
    {
      v76 = v75;
      v75 = _InterlockedCompareExchange((volatile signed __int32 *)(v74 + *(_QWORD *)(v25 + 40)), v75 - 2, v75);
      if ( v76 == v75 )
        goto LABEL_136;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v25 + 520), 0, 0);
  }
LABEL_136:
  if ( v105 == 16 )
  {
    v77 = v111;
    RaidXrbDeallocateResources(v111, 1);
    StorFreeContiguousIoResources(*(_QWORD *)(v3 + 24), v77 - 48);
  }
  else
  {
    *(_DWORD *)(v3 + 1856) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      24LL,
      &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      v3,
      v4,
      *(_DWORD *)(v4 + 48));
  }
  if ( (qword_140172448 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v3 + 24), v4, v108);
  v24 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v4 + 141) = -84;
  if ( v24 )
    goto LABEL_211;
  v111 = 0LL;
  IoGetActivityIdIrp(v4, &v111);
  v79 = *(_QWORD *)(v4 + 184);
  if ( *(_BYTE *)v79 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_211;
    v81 = &EventNonReadWriteRequestComplete;
    goto LABEL_210;
  }
  if ( *(_BYTE *)v79 != 15 )
  {
    if ( *(_BYTE *)v79 != 27 )
      goto LABEL_211;
    if ( *(_BYTE *)(v79 + 1) == 7 && !*(_DWORD *)(v79 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v80 = *(int **)(v4 + 56);
        if ( v80 )
          v12 = *v80;
        McTemplateK0pqd_EtwWriteTransfer(v78, v79, (unsigned int)&v111, v4, v12, *(_DWORD *)(v4 + 48));
      }
      goto LABEL_211;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_211;
    v81 = &EventPnpRequestComplete;
LABEL_210:
    McTemplateK0pd_EtwWriteTransfer(v78, v81, &v111, v4, *(_DWORD *)(v4 + 48));
    goto LABEL_211;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_211;
  v82 = *(_QWORD *)(v79 + 8);
  v83 = 0;
  v84 = 0LL;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  if ( *(_BYTE *)(v82 + 2) != 40 )
  {
    v96 = *(_BYTE *)(v82 + 72);
    v84 = *(_BYTE **)(v82 + 32);
    v85 = *(_BYTE *)(v82 + 11);
    v83 = *(_BYTE *)(v82 + 4);
    if ( *(_BYTE *)(v82 + 2) )
      goto LABEL_211;
LABEL_185:
    LOBYTE(v78) = v96 - 8;
    if ( (v78 & 0x5D) != 0 )
      goto LABEL_211;
    if ( *(_BYTE *)(v82 + 3) == 1 || !v84 || !v85 )
      goto LABEL_204;
    v97 = *v84 & 0x7F;
    if ( v97 == 114 || v97 == 115 )
    {
      v78 = (unsigned __int64)&v84[v85];
      v98 = 0;
      if ( (unsigned __int64)(v84 + 8) > v78 )
        goto LABEL_202;
      v87 = v84[2];
      v86 = v84[1] & 0xF;
      v88 = v84[3];
    }
    else
    {
      v78 = (unsigned __int64)&v84[v85];
      v98 = 0;
      if ( (unsigned __int64)(v84 + 8) > v78 )
        goto LABEL_202;
      v99 = v84 + 13;
      v86 = v84[2] & 0xF;
      v100 = v85;
      if ( (unsigned int)(unsigned __int8)v84[7] + 8 <= v85 )
        v100 = (unsigned __int8)v84[7] + 8;
      v78 = (unsigned __int64)&v84[v100];
      if ( (unsigned __int64)v99 <= v78 )
        v87 = v84[12];
      if ( (unsigned __int64)(v84 + 14) > v78 )
        v88 = 0;
      else
        v88 = *v99;
    }
    v98 = 1;
LABEL_202:
    if ( v98 )
      v89 = 1;
LABEL_204:
    if ( byte_140173441 < 0 )
    {
      if ( !v89 )
      {
        v88 = 0;
        v87 = 0;
        v86 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v78,
        v82,
        (unsigned int)&v111,
        v4,
        *(_DWORD *)(v4 + 48),
        *(_BYTE *)(v82 + 3),
        v83,
        v86,
        v87,
        v88,
        v4);
    }
    goto LABEL_211;
  }
  v90 = 0LL;
  v101 = 0;
  if ( *(_DWORD *)(v82 + 20) )
    goto LABEL_211;
  v91 = *(_DWORD *)(v82 + 56);
  v92 = 0LL;
  v105 = 0;
  LODWORD(v106) = v91;
  if ( !v91 )
    goto LABEL_211;
  while ( 1 )
  {
    v78 = *(unsigned int *)(v82 + 4 * v92 + 120);
    if ( (unsigned int)v78 >= 0x80 )
    {
      v93 = *(unsigned int *)(v82 + 16);
      if ( (unsigned int)v78 < (unsigned int)v93 )
        break;
    }
LABEL_176:
    v92 = (unsigned int)(v105 + 1);
    v105 = v92;
    if ( (unsigned int)v92 >= (unsigned int)v106 )
      goto LABEL_182;
  }
  v94 = (unsigned int)v78;
  v95 = *(_DWORD *)(v82 + v78) - 64;
  if ( v95 )
  {
    LODWORD(v78) = v95 - 1;
    if ( (_DWORD)v78 )
    {
      if ( (_DWORD)v78 == 1 )
      {
        LODWORD(v78) = v94 + 40;
        if ( v94 + 40 <= v93 )
        {
          if ( *(_DWORD *)(v82 + v94 + 12) )
            v90 = (char *)(v94 + v82 + 32);
          v84 = *(_BYTE **)(v82 + v94 + 24);
          goto LABEL_181;
        }
      }
    }
    else
    {
      LODWORD(v78) = v94 + 56;
      if ( v94 + 56 <= v93 )
      {
        v101 = 1;
        if ( *(_BYTE *)(v82 + v94 + 10) )
          v90 = (char *)(v94 + v82 + 24);
        v83 = *(_BYTE *)(v82 + v94 + 8);
        v84 = *(_BYTE **)(v82 + v94 + 16);
        v85 = *(_BYTE *)(v82 + v94 + 9);
      }
    }
    goto LABEL_175;
  }
  LODWORD(v78) = v94 + 40;
  if ( v94 + 40 > v93 )
  {
LABEL_175:
    if ( v101 )
      goto LABEL_182;
    goto LABEL_176;
  }
  if ( *(_BYTE *)(v82 + v94 + 10) )
    v90 = (char *)(v94 + v82 + 24);
  v84 = *(_BYTE **)(v82 + v94 + 16);
LABEL_181:
  v85 = *(_BYTE *)(v82 + v94 + 9);
  v83 = *(_BYTE *)(v82 + v94 + 8);
LABEL_182:
  if ( v90 )
  {
    v96 = *v90;
    v89 = 0;
    goto LABEL_185;
  }
LABEL_211:
  IofCompleteRequest((PIRP)v4, 0);
}
