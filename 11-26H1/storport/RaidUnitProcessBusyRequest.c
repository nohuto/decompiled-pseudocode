/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x140012A1C
 * Callers:
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidDeleteDeviceQueueEntry @ 0x140012998 (RaidDeleteDeviceQueueEntry.c)
 *     StorRemoveIoGatewayItem @ 0x1400135F0 (StorRemoveIoGatewayItem.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140026404 (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1400593D0 (McTemplateK0zx_EtwWriteTransfer.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x14005C9E0 (RaidAdapterReleaseCryptoKeyResources.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x140071CF8 (RaidReleaseNvmeIceKeyResources.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // edi
  __int64 v5; // r15
  unsigned int v6; // eax
  char v7; // r8
  unsigned int v8; // edx
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r13
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // rbx
  KSPIN_LOCK *v17; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v19; // rcx
  __int64 v20; // r8
  char v21; // al
  int v22; // r10d
  __int64 v23; // rcx
  KSPIN_LOCK v24; // r9
  _QWORD *v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  char v36; // al
  __int64 v37; // rsi
  char v38; // al
  int v39; // ecx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r14
  LARGE_INTEGER v46; // rax
  LARGE_INTEGER v47; // rbx
  unsigned int v48; // r8d
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v52; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v54; // r8
  char v55; // r10
  unsigned __int64 v56; // r9
  void *v57; // rdx
  __int64 v58; // r8
  char v59; // al
  int v60; // r10d
  __int64 v61; // rcx
  KSPIN_LOCK v62; // r9
  _QWORD *v63; // rax
  __int64 v64; // rcx
  KSPIN_LOCK v65; // rdx
  KSPIN_LOCK *v66; // rax
  __int64 v67; // rcx
  KSPIN_LOCK v68; // rdx
  KSPIN_LOCK *v69; // rax
  int *v70; // rax
  char v71; // al
  char v72; // r8
  char *v73; // r11
  char v74; // r10
  unsigned int v75; // eax
  char v76; // bl
  char v77; // r11
  char v78; // r14
  unsigned int v79; // ebx
  char v80; // r11
  unsigned int v81; // r10d
  unsigned int v82; // ebx
  unsigned int v83; // r8d
  __int64 v84; // rdx
  char v85; // r12
  _BYTE *v86; // r9
  unsigned __int8 v87; // si
  char *v88; // r14
  __int64 v89; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // r9
  __int64 v92; // rdx
  int v93; // ecx
  int v94; // ecx
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned __int64 v97; // r10
  unsigned __int64 v98; // r13
  __int64 v99; // r8
  int v100; // ecx
  char v101; // cl
  char v102; // [rsp+60h] [rbp-79h]
  unsigned int v103; // [rsp+64h] [rbp-75h]
  unsigned int v104; // [rsp+68h] [rbp-71h]
  unsigned int v105; // [rsp+6Ch] [rbp-6Dh]
  int v106; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v107; // [rsp+70h] [rbp-69h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v109; // [rsp+80h] [rbp-59h]
  int v110; // [rsp+84h] [rbp-55h]
  __int64 v111; // [rsp+88h] [rbp-51h]
  __int64 v112; // [rsp+90h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v114[3]; // [rsp+B0h] [rbp-29h] BYREF
  int v115; // [rsp+C8h] [rbp-11h]
  __int128 v116; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v117; // [rsp+E0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 168);
  LOBYTE(v4) = 0;
  v5 = *(_QWORD *)(a2 + 160);
  v114[0] = 0LL;
  v114[1] = 0LL;
  v115 = 0;
  v114[2] = a2;
  v6 = *(unsigned __int8 *)(v3 + 2);
  *(_QWORD *)&v116 = a3;
  v7 = 0;
  v111 = a1;
  v105 = 0;
  v109 = 0;
  if ( (_BYTE)v6 != 40 )
  {
    v8 = *(_DWORD *)(v3 + 12);
    v9 = v6;
    v7 = *(_BYTE *)(v3 + 4);
    v103 = v8;
    v104 = v6;
    goto LABEL_3;
  }
  v9 = *(unsigned int *)(v3 + 20);
  v8 = *(_DWORD *)(v3 + 24);
  v104 = v9;
  v103 = v8;
  if ( !(_DWORD)v9 )
  {
    v79 = *(_DWORD *)(v3 + 56);
    v80 = 0;
    v81 = 0;
    if ( v79 )
    {
      while ( 1 )
      {
        v90 = *(unsigned int *)(v3 + 4LL * v81 + 120);
        if ( (unsigned int)v90 >= 0x80 )
        {
          v91 = *(unsigned int *)(v3 + 16);
          if ( (unsigned int)v90 < (unsigned int)v91 )
            break;
        }
LABEL_182:
        if ( ++v81 >= v79 )
          goto LABEL_183;
      }
      v92 = (unsigned int)v90;
      v93 = *(_DWORD *)(v90 + v3) - 64;
      if ( v93 )
      {
        v94 = v93 - 1;
        if ( !v94 )
        {
          if ( v92 + 56 <= v91 )
          {
            v7 = *(_BYTE *)(v92 + v3 + 8);
            v80 = 1;
          }
LABEL_181:
          if ( v80 )
            goto LABEL_183;
          goto LABEL_182;
        }
        if ( v94 != 1 )
          goto LABEL_181;
      }
      if ( v92 + 40 <= v91 )
      {
        v7 = *(_BYTE *)(v92 + v3 + 8);
LABEL_183:
        v9 = 0LL;
        v8 = *(_DWORD *)(v3 + 24);
        a1 = v111;
        goto LABEL_3;
      }
      goto LABEL_181;
    }
  }
LABEL_3:
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v7 == 8 )
  {
    v109 = *(_DWORD *)(a1 + 1936);
    v105 = 1;
  }
  if ( v7 == 40 )
  {
    v109 = *(_DWORD *)(a1 + 1932);
    v105 = 2;
  }
  v10 = 0x1000D0000LL;
  v107 = EnableSolitaryIO
      || (v8 & 0x102) != 0x102 && (v8 & 0x80010) == 0 && ((unsigned int)v9 > 0x20 || !_bittest64(&v10, v9));
  v110 = RaUnitAcquireRemoveLock(a1, v5, 1);
  if ( v110 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  v11 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
  v12 = 96LL;
  if ( *(_BYTE *)(v11 + 2) != 40 )
    v12 = 48LL;
  v13 = *(_QWORD *)(v12 + v11);
  v14 = (*(_BYTE *)(v13 + 16) & 2) == 0;
  v15 = *(_QWORD *)(v13 + 224);
  v112 = v15;
  if ( !v14 )
  {
    v16 = v13 + 48;
    *(_QWORD *)&v117 = *(_QWORD *)(v15 + 560);
    PerformanceFrequency.QuadPart = (unsigned __int64)*(unsigned int *)(v13 + 84) << 6;
    v17 = (KSPIN_LOCK *)(PerformanceFrequency.QuadPart + v117 + 64);
    memset(&LockHandle, 0, sizeof(LockHandle));
    CurrentIrql = KeGetCurrentIrql();
    v19 = v17 + 5;
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v19, &LockHandle);
      v20 = v117;
      v21 = *(_BYTE *)(v13 + 16);
      v22 = *(_DWORD *)v117;
      if ( (v21 & 2) == 0 )
      {
LABEL_23:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_24;
      }
      *(_BYTE *)(v13 + 16) = v21 & 0xFD;
      v23 = *(_QWORD *)v16;
      v24 = *v17;
      if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) == v16 )
      {
        v25 = *(_QWORD **)(v13 + 56);
        if ( *v25 == v16 )
        {
          *v25 = v23;
          *(_QWORD *)(v23 + 8) = v25;
          if ( (*(_DWORD *)(v13 + 96) & 1) == 0 )
          {
LABEL_19:
            if ( (v22 & 4) == 0 && v24 == v16 )
            {
              if ( (KSPIN_LOCK *)*v17 == v17 )
                *(_DWORD *)(PerformanceFrequency.QuadPart + v20 + 112) = -1;
              else
                *(_DWORD *)(PerformanceFrequency.QuadPart + v20 + 112) = *(_DWORD *)(*v17 + 32);
            }
            goto LABEL_23;
          }
          v64 = v13 + 64;
          if ( v17[4] == v13 + 64 )
            v17[4] = *(_QWORD *)v64;
          v65 = *(_QWORD *)v64;
          if ( *(_QWORD *)(*(_QWORD *)v64 + 8LL) == v64 )
          {
            v66 = *(KSPIN_LOCK **)(v13 + 72);
            if ( *v66 == v64 )
            {
              *v66 = v65;
              *(_QWORD *)(v65 + 8) = v66;
              *(_DWORD *)(v13 + 96) &= ~1u;
              goto LABEL_19;
            }
          }
        }
      }
LABEL_120:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLock(v19, &LockHandle);
    v58 = v117;
    v59 = *(_BYTE *)(v13 + 16);
    v60 = *(_DWORD *)v117;
    if ( (v59 & 2) != 0 )
    {
      *(_BYTE *)(v13 + 16) = v59 & 0xFD;
      v61 = *(_QWORD *)v16;
      v62 = *v17;
      if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
        goto LABEL_120;
      v63 = *(_QWORD **)(v13 + 56);
      if ( *v63 != v16 )
        goto LABEL_120;
      *v63 = v61;
      *(_QWORD *)(v61 + 8) = v63;
      if ( (*(_DWORD *)(v13 + 96) & 1) != 0 )
      {
        v67 = v13 + 64;
        if ( v17[4] == v13 + 64 )
          v17[4] = *(_QWORD *)v67;
        v68 = *(_QWORD *)v67;
        if ( *(_QWORD *)(*(_QWORD *)v67 + 8LL) != v67 )
          goto LABEL_120;
        v69 = *(KSPIN_LOCK **)(v13 + 72);
        if ( *v69 != v67 )
          goto LABEL_120;
        *v69 = v68;
        *(_QWORD *)(v68 + 8) = v69;
        *(_DWORD *)(v13 + 96) &= ~1u;
      }
      if ( (v60 & 4) == 0 && v62 == v16 )
      {
        if ( (KSPIN_LOCK *)*v17 == v17 )
          *(_DWORD *)(PerformanceFrequency.QuadPart + v58 + 112) = -1;
        else
          *(_DWORD *)(PerformanceFrequency.QuadPart + v58 + 112) = *(_DWORD *)(*v17 + 32);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_24:
    if ( StorEtwLoggingEnabled )
    {
      v117 = 0LL;
      IoGetActivityIdIrp(v5, &v117);
      if ( byte_140173442 < 0 )
        McTemplateK0dud_EtwWriteTransfer(v27, v26, (unsigned int)&v117, v28, 4);
    }
    v15 = v112;
  }
  StorUnmapSenseInfo(v13, *(_QWORD *)(*(_QWORD *)(v15 + 24) + 8LL));
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v30 = *(_QWORD *)(v15 + 24);
    if ( !*(_QWORD *)(v30 + 5688) )
      goto LABEL_31;
    if ( (*(_BYTE *)(v30 + 112) & 0x10) != 0 )
      goto LABEL_188;
LABEL_72:
    RaidAdapterReleaseCryptoKeyResources(v30, v13);
    goto LABEL_31;
  }
  v29 = *(_QWORD *)(v15 + 3608);
  if ( !v29 || !*(_QWORD *)(v29 + 104) )
  {
    v30 = *(_QWORD *)(v15 + 24);
    if ( !*(_QWORD *)(v30 + 5680) )
      goto LABEL_31;
    goto LABEL_72;
  }
LABEL_188:
  RaidReleaseNvmeIceKeyResources(v15, v13);
LABEL_31:
  if ( *(_BYTE *)(v11 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v13 + 16) & 0x40) != 0 )
    {
      v45 = *(_QWORD *)(v13 + 752);
      PerformanceFrequency.QuadPart = 1LL;
      if ( v11 && v45 )
      {
        if ( UseQPCTime )
          v46 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v46.QuadPart = KeQueryUnbiasedInterruptTime();
        v47 = v46;
        *(_BYTE *)(v45 + 3) = *(_BYTE *)(v11 + 3);
        *(_DWORD *)(v45 + 12) = *(_DWORD *)(v11 + 24);
        if ( (*(_DWORD *)(v11 + 24) & 0x40) != 0 )
          *(_DWORD *)(v45 + 16) = *(_DWORD *)(v11 + 60);
        if ( *(_BYTE *)(v11 + 3) == 48 )
          *(_DWORD *)(v45 + 64) = *(_DWORD *)(v11 + 44);
        if ( !*(_DWORD *)(v11 + 20) )
        {
          v48 = 0;
          if ( *(_DWORD *)(v11 + 56) )
          {
            while ( 1 )
            {
              v49 = *(unsigned int *)(v11 + 4LL * v48 + 120);
              if ( (unsigned int)v49 >= 0x80 )
              {
                v50 = *(unsigned int *)(v11 + 16);
                if ( (unsigned int)v49 <= (unsigned int)v50 && *(_DWORD *)(v49 + v11) == 64 && v49 + 40 <= v50 )
                  break;
              }
              if ( ++v48 >= *(_DWORD *)(v11 + 56) )
                goto LABEL_88;
            }
            *(_BYTE *)(v45 + 4) = *(_BYTE *)((unsigned int)v49 + v11 + 8);
            *(_QWORD *)(v45 + 32) = *(_QWORD *)((unsigned int)v49 + v11 + 16);
            *(_BYTE *)(v45 + 11) = *(_BYTE *)((unsigned int)v49 + v11 + 9);
          }
          else
          {
LABEL_88:
            *(_BYTE *)(v45 + 3) = 48;
            *(_DWORD *)(v45 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart > 0 && PerformanceCounter.QuadPart < v47.QuadPart )
          v54 = PerformanceCounter.QuadPart - v47.QuadPart - 1;
        else
          v54 = PerformanceCounter.QuadPart - v47.QuadPart;
        if ( UseQPCTime )
        {
          LowPart = PerformanceFrequency.LowPart;
          v55 = 0;
          if ( PerformanceFrequency.QuadPart && v54 )
          {
            v56 = 1000 * (v54 % PerformanceFrequency.QuadPart);
            v54 = v56 / PerformanceFrequency.QuadPart + 1000 * (v54 / PerformanceFrequency.QuadPart);
            v52.QuadPart = 10000 * (v56 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v55 = 10000 * (v56 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart + 16 * v54;
          }
        }
        else
        {
          v55 = v54;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v52.LowPart,
            v54,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v55);
      }
      v15 = v112;
      *(_QWORD *)(*(_QWORD *)(v13 + 752) + 48LL) = *(_QWORD *)(v13 + 176);
      *(_QWORD *)(*(_QWORD *)(v13 + 752) + 24LL) = *(_QWORD *)(v13 + 184);
      *(_QWORD *)(*(_QWORD *)(v13 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v13 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL) = *(_QWORD *)(v13 + 752);
      *(_BYTE *)(v13 + 16) &= ~0x40u;
      *(_QWORD *)(v13 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v11 + 96) = 0LL;
      *(_QWORD *)(v11 + 64) = *(_QWORD *)(v13 + 184);
      *(_QWORD *)(v11 + 104) = 0LL;
      if ( *(_QWORD *)(v13 + 192) )
      {
        if ( (*(_BYTE *)(v11 + 24) & 0xC0) == 0xC0 )
        {
          v82 = *(_DWORD *)(v11 + 56);
          v83 = 0;
          if ( v82 )
          {
            while ( 1 )
            {
              v95 = 0LL;
              v96 = *(unsigned int *)(v11 + 4LL * v83 + 120);
              if ( (unsigned int)v96 >= 0x80 )
              {
                v97 = *(unsigned int *)(v11 + 16);
                if ( (unsigned int)v96 <= (unsigned int)v97 && *(_DWORD *)(v96 + v11) == 1 && v96 + 24 <= v97 )
                  break;
              }
              if ( ++v83 >= v82 )
                goto LABEL_195;
            }
            v95 = v96 + v11;
LABEL_195:
            if ( v95 )
              *(_QWORD *)(v95 + 16) = *(_QWORD *)(v13 + 192);
          }
        }
      }
      v43 = *(_DWORD *)(v11 + 24);
      if ( (v43 & 0x2000000) != 0 )
        *(_DWORD *)(v11 + 24) = v43 & 0xFDFFFFFF;
    }
  }
  else
  {
    *(_QWORD *)(v11 + 48) = *(_QWORD *)(v13 + 176);
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(v13 + 184);
    v31 = *(_DWORD *)(v11 + 12);
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    if ( (v31 & 0x2000000) != 0 )
      *(_DWORD *)(v11 + 12) = v31 & 0xFDFFFFFF;
  }
  RaidXrbDeallocateResources(v13, 1);
  v32 = 24LL;
  if ( *(_BYTE *)(v11 + 2) != 40 )
    v32 = 12LL;
  if ( (*(_DWORD *)(v32 + v11) & 0x4000) == 0 )
  {
    v33 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v34 = *(_DWORD *)(v33 + *(_QWORD *)(v15 + 40));
    while ( (v34 & 1) == 0 )
    {
      v35 = v34;
      v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v33 + *(_QWORD *)(v15 + 40)), v34 - 2, v34);
      if ( v35 == v34 )
        goto LABEL_40;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v15 + 520), 0, 0);
  }
LABEL_40:
  v36 = StorRemoveIoGatewayItem(v114, 0LL, 0LL);
  v37 = v111;
  if ( v36 )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v111 + 24) + 1776LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(v37 + 720, v107);
  if ( v110 >= 0 )
  {
    RaidStallDeviceQueue(v37 + 720, v105, v109, v37);
    if ( (_QWORD)v116 )
      *(_BYTE *)v116 = 0;
    v42 = (v103 >> 3) & 2 | 4;
    if ( (v103 & 0x80000) == 0 )
      v42 = (v103 >> 3) & 2;
    if ( EnableSolitaryIO
      || (v103 & 0x102) != 0x102
      && (v103 & 0x80010) == 0
      && (v104 > 0x20 || (v44 = 0x1000D0000LL, !_bittest64(&v44, v104))) )
    {
      v42 |= 1u;
    }
    if ( !(unsigned int)RaidStartIoPacket(v37, v5, v42) )
      RaidUnitRestartQueue(v37, 0LL);
    return;
  }
  v38 = RaidNtStatusToSrbStatus(v110);
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v3 + 3) = v38;
  *(_BYTE *)(v5 + 141) = -84;
  *(_DWORD *)(v5 + 48) = v39;
  if ( v14 )
    goto LABEL_47;
  v116 = 0LL;
  IoGetActivityIdIrp(v5, &v116);
  v41 = *(_QWORD *)(v5 + 184);
  if ( *(_BYTE *)v41 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_47;
    v57 = &EventNonReadWriteRequestComplete;
    goto LABEL_103;
  }
  if ( *(_BYTE *)v41 != 15 )
  {
    if ( *(_BYTE *)v41 != 27 )
      goto LABEL_47;
    if ( *(_BYTE *)(v41 + 1) == 7 && !*(_DWORD *)(v41 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v70 = *(int **)(v5 + 56);
        if ( v70 )
          v4 = *v70;
        McTemplateK0pqd_EtwWriteTransfer(v40, v41, (unsigned int)&v116, v5, v4, *(_DWORD *)(v5 + 48));
      }
      goto LABEL_47;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_47;
    v57 = &EventPnpRequestComplete;
LABEL_103:
    McTemplateK0pd_EtwWriteTransfer(v40, v57, &v116, v5, *(_DWORD *)(v5 + 48));
    goto LABEL_47;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_47;
  v84 = *(_QWORD *)(v41 + 8);
  v85 = 0;
  v86 = 0LL;
  v87 = 0;
  v74 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  if ( *(_BYTE *)(v84 + 2) == 40 )
  {
    v88 = 0LL;
    v102 = 0;
    if ( *(_DWORD *)(v84 + 20) )
      goto LABEL_47;
    v89 = 0LL;
    v106 = 0;
    v110 = *(_DWORD *)(v84 + 56);
    if ( !v110 )
      goto LABEL_47;
    while ( 1 )
    {
      v40 = *(unsigned int *)(v84 + 4 * v89 + 120);
      if ( (unsigned int)v40 >= 0x80 )
      {
        v98 = *(unsigned int *)(v84 + 16);
        if ( (unsigned int)v40 < (unsigned int)v98 )
        {
          v99 = (unsigned int)v40;
          v100 = *(_DWORD *)(v84 + v40) - 64;
          if ( v100 )
          {
            LODWORD(v40) = v100 - 1;
            if ( (_DWORD)v40 )
            {
              if ( (_DWORD)v40 == 1 )
              {
                LODWORD(v40) = v99 + 40;
                if ( v99 + 40 <= v98 )
                {
                  if ( *(_DWORD *)(v84 + v99 + 12) )
                    v88 = (char *)(v99 + v84 + 32);
                  v86 = *(_BYTE **)(v84 + v99 + 24);
                  goto LABEL_218;
                }
              }
            }
            else
            {
              LODWORD(v40) = v99 + 56;
              if ( v99 + 56 <= v98 )
              {
                v102 = 1;
                if ( *(_BYTE *)(v84 + v99 + 10) )
                  v88 = (char *)(v99 + v84 + 24);
                v85 = *(_BYTE *)(v84 + v99 + 8);
                v86 = *(_BYTE **)(v84 + v99 + 16);
                v87 = *(_BYTE *)(v84 + v99 + 9);
              }
            }
          }
          else
          {
            LODWORD(v40) = v99 + 40;
            if ( v99 + 40 <= v98 )
            {
              if ( *(_BYTE *)(v84 + v99 + 10) )
                v88 = (char *)(v99 + v84 + 24);
              v86 = *(_BYTE **)(v84 + v99 + 16);
LABEL_218:
              v87 = *(_BYTE *)(v84 + v99 + 9);
              v85 = *(_BYTE *)(v84 + v99 + 8);
LABEL_219:
              if ( v88 )
              {
                v101 = *v88;
                v78 = 0;
                goto LABEL_222;
              }
              goto LABEL_47;
            }
          }
          if ( v102 )
            goto LABEL_219;
        }
      }
      v89 = (unsigned int)(v106 + 1);
      v106 = v89;
      if ( (unsigned int)v89 >= v110 )
        goto LABEL_219;
    }
  }
  v101 = *(_BYTE *)(v84 + 72);
  v86 = *(_BYTE **)(v84 + 32);
  v87 = *(_BYTE *)(v84 + 11);
  v85 = *(_BYTE *)(v84 + 4);
  if ( *(_BYTE *)(v84 + 2) )
    goto LABEL_47;
LABEL_222:
  LOBYTE(v40) = v101 - 8;
  if ( (v40 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v84 + 3) == 1 || !v86 || !v87 )
    {
LABEL_154:
      if ( byte_140173441 < 0 )
      {
        if ( !v78 )
        {
          v77 = 0;
          v76 = 0;
          v74 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v40,
          v84,
          (unsigned int)&v116,
          v5,
          *(_DWORD *)(v5 + 48),
          *(_BYTE *)(v84 + 3),
          v85,
          v74,
          v76,
          v77,
          v5);
      }
      goto LABEL_47;
    }
    v71 = *v86 & 0x7F;
    if ( v71 == 114 || v71 == 115 )
    {
      v40 = (unsigned __int64)&v86[v87];
      v72 = 0;
      if ( (unsigned __int64)(v86 + 8) > v40 )
      {
LABEL_152:
        if ( v72 )
          v78 = 1;
        goto LABEL_154;
      }
      v76 = v86[2];
      v74 = v86[1] & 0xF;
      v77 = v86[3];
    }
    else
    {
      v40 = (unsigned __int64)&v86[v87];
      v72 = 0;
      if ( (unsigned __int64)(v86 + 8) > v40 )
        goto LABEL_152;
      v73 = v86 + 13;
      v74 = v86[2] & 0xF;
      v75 = v87;
      if ( (unsigned int)(unsigned __int8)v86[7] + 8 <= v87 )
        v75 = (unsigned __int8)v86[7] + 8;
      v40 = (unsigned __int64)&v86[v75];
      if ( (unsigned __int64)v73 <= v40 )
        v76 = v86[12];
      if ( (unsigned __int64)(v86 + 14) > v40 )
        v77 = 0;
      else
        v77 = *v73;
    }
    v72 = 1;
    goto LABEL_152;
  }
LABEL_47:
  IofCompleteRequest((PIRP)v5, 0);
}
