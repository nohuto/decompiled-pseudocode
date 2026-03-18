/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     VidSchSignalPagingFences @ 0x14010A330 (VidSchSignalPagingFences.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer @ 0x140011498 (McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 *     VidMmFreeFenceStorageSlot @ 0x140036E30 (VidMmFreeFenceStorageSlot.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VmBusSendSignalGuestEvent @ 0x14003D3E0 (VmBusSendSignalGuestEvent.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiAllocateQueuePacket @ 0x140108F9C (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        unsigned int a1,
        unsigned __int64 a2,
        int a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        char a9)
{
  __int64 v9; // r13
  int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // edx
  unsigned __int8 v13; // bl
  struct _KEVENT *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  _QWORD **Pool2; // r15
  unsigned int v18; // esi
  struct _KEVENT *v19; // r12
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // edx
  _DWORD *HwQueuePacket; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rbx
  char *v29; // r9
  __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // r11
  _QWORD *v33; // r13
  int v34; // eax
  _QWORD *v35; // rdx
  _QWORD *v36; // rcx
  unsigned int v37; // edi
  _QWORD *v38; // rax
  unsigned int v39; // r12d
  unsigned __int64 *v40; // rsi
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // rdi
  int v46; // ecx
  unsigned __int64 v47; // rcx
  int v48; // eax
  unsigned int *v49; // rax
  __int64 v50; // r8
  struct _VIDSCH_QUEUE_PACKET **v51; // r15
  __int64 v52; // rbx
  struct _VIDSCH_QUEUE_PACKET *v53; // rcx
  bool v54; // zf
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  unsigned int v56; // esi
  __int64 v57; // rdx
  __int64 v58; // rdi
  int v59; // ecx
  unsigned __int64 v60; // r12
  int v61; // eax
  unsigned int *v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdx
  char *v66; // rax
  unsigned __int64 v67; // r9
  char v68; // r8
  unsigned __int64 v69; // rcx
  _QWORD *v70; // r12
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  void (*v73)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rax
  const wchar_t *v76; // r9
  __int64 v77; // r9
  __int64 v78; // r11
  __int64 v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned __int64 v82; // r12
  unsigned __int64 v83; // r8
  unsigned int v84; // eax
  unsigned __int64 v85; // r8
  unsigned int v86; // eax
  int v87; // ecx
  unsigned __int64 v88; // r8
  unsigned __int64 v89; // r9
  _QWORD *v90; // rbx
  struct _VIDSCH_QUEUE_PACKET *v91; // rdx
  int v92; // ecx
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // r9
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // r8
  int v101; // eax
  __int64 v102; // r8
  KSPIN_LOCK *v103; // rcx
  __int64 v104; // rdx
  _QWORD *v105; // rax
  __int64 *v106; // r12
  void *v107; // rcx
  KSPIN_LOCK *v108; // rcx
  __int64 *v109; // rcx
  __int64 **v110; // rax
  __int64 v111; // [rsp+20h] [rbp-E0h]
  struct _KEVENT *v112; // [rsp+50h] [rbp-B0h]
  __int64 v113; // [rsp+50h] [rbp-B0h]
  __int64 v114; // [rsp+50h] [rbp-B0h]
  __int64 v115; // [rsp+50h] [rbp-B0h]
  __int64 v116; // [rsp+50h] [rbp-B0h]
  struct _KEVENT *v118; // [rsp+68h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  __int16 v120; // [rsp+88h] [rbp-78h]
  unsigned int v121; // [rsp+90h] [rbp-70h]
  _QWORD *v122; // [rsp+98h] [rbp-68h]
  unsigned __int64 v123; // [rsp+A0h] [rbp-60h]
  struct VIDSCH_HW_QUEUE *v124; // [rsp+A8h] [rbp-58h]
  __int64 v125; // [rsp+B0h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v126; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v127; // [rsp+D8h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE v128; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v129; // [rsp+F8h] [rbp-8h]
  struct _VIDSCH_QUEUE_PACKET **v130; // [rsp+100h] [rbp+0h]
  PVOID P; // [rsp+108h] [rbp+8h]
  _BYTE v132[16]; // [rsp+110h] [rbp+10h] BYREF
  int v133; // [rsp+120h] [rbp+20h]
  __int64 v134; // [rsp+128h] [rbp+28h] BYREF
  __int64 *v135; // [rsp+130h] [rbp+30h]
  __int64 v136; // [rsp+138h] [rbp+38h]
  struct _KEVENT *v137; // [rsp+140h] [rbp+40h]
  struct _KLOCK_QUEUE_HANDLE v138; // [rsp+148h] [rbp+48h] BYREF
  __int16 v139; // [rsp+160h] [rbp+60h]
  PVOID v140; // [rsp+170h] [rbp+70h]
  _BYTE v141[16]; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v142; // [rsp+188h] [rbp+88h]
  char *v143; // [rsp+190h] [rbp+90h]
  PVOID v144; // [rsp+198h] [rbp+98h]
  char v145[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v146; // [rsp+1A8h] [rbp+A8h]
  char *v147; // [rsp+1B0h] [rbp+B0h]
  PVOID v148; // [rsp+1B8h] [rbp+B8h]
  _BYTE v149[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v150; // [rsp+1D0h] [rbp+D0h]
  char *v151; // [rsp+1D8h] [rbp+D8h]

  v9 = a6;
  v10 = a3;
  v11 = a5;
  v123 = a2;
  v12 = a1;
  v135 = a4;
  v136 = a6;
  v134 = 0LL;
  if ( a3 || a1 )
  {
    if ( a6 && a5 )
      goto LABEL_4;
    WdLogSingleEntry1(1LL, -1073741811LL);
    v76 = L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x";
    WdLogGlobalForLineNumber = 11926;
LABEL_175:
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      v76,
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !a6 || !a5 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    v76 = L"NULL VIDSCH_CONTEXT pointer, returning 0x%I64x";
    WdLogGlobalForLineNumber = 11909;
    goto LABEL_175;
  }
  v10 = 1;
  v134 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a6 + 8LL) + 272LL);
  v135 = &v134;
LABEL_4:
  v13 = a7;
  v14 = *(struct _KEVENT **)(*(_QWORD *)a6 + 8LL);
  v112 = v14;
  if ( (a7 & 0x80000004) != 0 )
    goto LABEL_12;
  v120 = 0;
  v118 = v14 + 84;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v14[84], &LockHandle);
  v15 = 0LL;
  LOBYTE(v120) = 1;
  while ( (unsigned int)v15 < a5 )
  {
    v22 = *(_QWORD *)(8 * v15 + a6);
    v23 = *(_DWORD *)(v22 + 48);
    if ( v23 != 4 && (unsigned int)(v23 - 5) > 1 || *(_BYTE *)(v22 + 29) )
      goto LABEL_31;
    v67 = a8[v15];
    v68 = *(_BYTE *)(v22 + 30);
    if ( *(_BYTE *)(v22 + 28) )
    {
      v69 = *(_QWORD *)(*(_QWORD *)(v22 + 344) + 40LL);
    }
    else if ( v23 == 2 )
    {
      v69 = *(_QWORD *)(v22 + 72);
    }
    else if ( v23 == 6 )
    {
      v69 = *(_QWORD *)(v22 + 200);
    }
    else
    {
      v69 = *(_QWORD *)(v22 + 96);
    }
    if ( v68 )
    {
      if ( v67 < v69 )
      {
        WdLogSingleEntry2(3LL, v67, v69);
        WdLogGlobalForLineNumber = 6019;
        goto LABEL_164;
      }
      if ( v67 != v69 )
        goto LABEL_31;
      WdLogSingleEntry1(3LL, v67);
      v15 = (unsigned int)(v15 + 1);
      WdLogGlobalForLineNumber = 6028;
    }
    else
    {
      if ( (int)v69 - (int)v67 > 0 )
      {
        WdLogSingleEntry2(3LL, (unsigned int)v67, (unsigned int)v69);
        WdLogGlobalForLineNumber = 6038;
LABEL_164:
        WdLogSingleEntry2(1LL, a8[v15], -1073741811LL);
        v73 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
        v111 = a8[v15];
        WdLogGlobalForLineNumber = 11950;
        v73(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
          v111,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        if ( (_BYTE)v120 )
        {
          if ( HIBYTE(v120) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            return 3221225485LL;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        return 3221225485LL;
      }
      if ( (_DWORD)v69 == (_DWORD)v67 )
      {
        WdLogSingleEntry1(3LL, (unsigned int)v67);
        WdLogGlobalForLineNumber = 6047;
      }
LABEL_31:
      v15 = (unsigned int)(v15 + 1);
    }
  }
  if ( (_BYTE)v120 )
  {
    if ( HIBYTE(v120) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v120) = 0;
  }
  v12 = a1;
LABEL_12:
  v16 = v10 + v12;
  P = 0LL;
  v133 = 0;
  if ( (unsigned int)v16 <= 2 )
  {
    Pool2 = (_QWORD **)v132;
    v130 = (struct _VIDSCH_QUEUE_PACKET **)v132;
    P = v132;
    if ( (_DWORD)v16 )
    {
      memset(v132, 0, 8LL * (unsigned int)v16);
      Pool2 = (_QWORD **)P;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v16 < 8 )
    goto LABEL_191;
  Pool2 = (_QWORD **)ExAllocatePool2(64LL, 8 * v16, 945908054LL);
  P = Pool2;
LABEL_15:
  v12 = a1;
  v130 = (struct _VIDSCH_QUEUE_PACKET **)Pool2;
LABEL_16:
  v133 = v16;
  if ( !Pool2 )
  {
LABEL_191:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11963;
LABEL_180:
    if ( P != v132 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225495LL;
  }
  v121 = 0;
  v18 = 0;
  v129 = 0LL;
  v19 = v14 + 84;
  while ( v18 < (unsigned int)v16 )
  {
    v125 = 0LL;
    v124 = 0LL;
    if ( v18 < v12 )
    {
      v122 = (_QWORD *)v18;
      v118 = v19;
      v120 = 0;
      v124 = *(struct VIDSCH_HW_QUEUE **)(v123 + 8LL * v18);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v19, &LockHandle);
      LOBYTE(v120) = 1;
      if ( *((struct VIDSCH_HW_QUEUE **)v124 + 20) != (struct VIDSCH_HW_QUEUE *)((char *)v124 + 160) )
      {
        if ( HIBYTE(v120) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        LOBYTE(v120) = 0;
        if ( v124 )
        {
          HwQueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(v124, 0LL);
          v25 = v18;
LABEL_36:
          Pool2[v25] = HwQueuePacket;
          if ( !HwQueuePacket )
          {
            WdLogSingleEntry1(3LL, -1073741801LL);
            WdLogGlobalForLineNumber = 12038;
            if ( v18 )
            {
              v90 = v122;
              do
              {
                v91 = (struct _VIDSCH_QUEUE_PACKET *)*Pool2;
                if ( *Pool2 )
                {
                  if ( *((_QWORD *)v91 + 12) )
                    VidSchiFreeQueuePacket(v124, v91);
                  else
                    VidSchiFreeQueuePacket(v125, v91);
                }
                ++Pool2;
                v90 = (_QWORD *)((char *)v90 - 1);
              }
              while ( v90 );
            }
            goto LABEL_180;
          }
          *HwQueuePacket = 895576406;
          v26 = Pool2[v25];
          v121 = v18;
          *((_DWORD *)v26 + 12) = 5;
          Pool2[v25][7] = MEMORY[0xFFFFF78000000320];
          *((_DWORD *)Pool2[v25] + 13) = 2;
          v27 = Pool2[v25];
          if ( v124 )
            v27[12] = v124;
          else
            v27[11] = v125;
          Pool2[v25][13] = KeGetCurrentThread();
          Pool2[v25][9] = 0LL;
          *((_DWORD *)Pool2[v25] + 70) ^= (v13 ^ (unsigned __int8)*((_DWORD *)Pool2[v25] + 70)) & 1;
          *((_DWORD *)Pool2[v25] + 70) ^= ((unsigned __int8)*((_DWORD *)Pool2[v25] + 70) ^ (unsigned __int8)(16 * a9)) & 0x10;
          if ( (v13 & 4) != 0 )
            *((_DWORD *)Pool2[v25] + 70) |= 4u;
          if ( *(_DWORD *)(*(_QWORD *)v9 + 48LL) == 2 )
            Pool2[v25][68] = *a8;
          v28 = 288 - v9;
          v29 = (char *)a8 - v9;
          v30 = v9;
          v31 = 544 - v9;
          v32 = a5;
          v33 = &Pool2[v18];
          do
          {
            *(_QWORD *)(v28 + v30 + *v33) = *(_QWORD *)v30;
            v34 = *(_DWORD *)(*(_QWORD *)v30 + 48LL);
            if ( v34 == 4 || (unsigned int)(v34 - 5) <= 1 )
              *(_QWORD *)(v31 + v30 + *v33) = *(_QWORD *)&v29[v30];
            v30 += 8LL;
            --v32;
          }
          while ( v32 );
          v13 = a7;
          v9 = v136;
          v35 = v129;
          *((_DWORD *)Pool2[v18] + 71) = a5;
          Pool2[v18][100] = 0LL;
          v36 = Pool2[v18];
          if ( v35 )
          {
            v36[101] = v35;
            v35[100] = Pool2[v18];
          }
          else
          {
            v36[101] = 0LL;
          }
          v129 = Pool2[v18];
LABEL_23:
          v12 = a1;
          ++v18;
          continue;
        }
LABEL_35:
        HwQueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v125, *(_DWORD *)(v125 + 804) == 0);
        v25 = v18;
        v122 = (_QWORD *)v18;
        goto LABEL_36;
      }
      if ( HIBYTE(v120) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      v12 = a1;
      ++v18;
      LOBYTE(v120) = 0;
    }
    else
    {
      _mm_lfence();
      v126.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)v19;
      v127 = 0;
      v125 = v135[v18 - v12];
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v19, (PKLOCK_QUEUE_HANDLE)&v126.LockQueue.Lock);
      LOBYTE(v127) = 1;
      if ( *(_QWORD *)(v125 + 672) != v125 + 672 )
      {
        if ( HIBYTE(v127) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v126.LockQueue.Lock);
        else
          KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&v126.LockQueue.Lock);
        LOBYTE(v127) = 0;
        goto LABEL_35;
      }
      if ( !HIBYTE(v127) )
      {
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&v126.LockQueue.Lock);
        LOBYTE(v127) = 0;
        goto LABEL_23;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v126.LockQueue.Lock);
      v12 = a1;
      ++v18;
      LOBYTE(v127) = 0;
    }
  }
  if ( !v129 )
  {
    v137 = v19;
    v139 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v19, &v138);
    LOBYTE(v139) = 1;
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      v140 = 0LL;
      v142 = 0;
      v144 = 0LL;
      v146 = 0;
      v148 = 0LL;
      v150 = 0;
      if ( a5 <= 2 )
      {
        v140 = v141;
        memset(v141, 0, 8LL * a5);
LABEL_122:
        v21 = a5;
        v143 = (char *)v140;
        v142 = a5;
        if ( a5 > 2 )
          goto LABEL_146;
        v144 = v145;
        memset(v145, 0, 4LL * a5);
      }
      else
      {
        v21 = a5;
        if ( 0xFFFFFFFFFFFFFFFFuLL / a5 >= 8 )
        {
          v140 = (PVOID)ExAllocatePool2(64LL, 8LL * a5, 945908054LL);
          goto LABEL_122;
        }
        v143 = 0LL;
LABEL_146:
        if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 4 )
        {
          v147 = 0LL;
          v66 = 0LL;
          goto LABEL_127;
        }
        v144 = (PVOID)ExAllocatePool2(64LL, 4 * v21, 945908054LL);
      }
      v147 = (char *)v144;
      v146 = a5;
      if ( a5 > 2 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 8 )
        {
          v66 = 0LL;
          goto LABEL_127;
        }
        v148 = (PVOID)ExAllocatePool2(64LL, 8 * v21, 945908054LL);
      }
      else
      {
        v148 = v149;
        memset(v149, 0, 8 * v21);
      }
      v66 = (char *)v148;
      v150 = a5;
LABEL_127:
      v151 = v66;
      if ( v147 && v143 && v66 )
      {
        v77 = a5;
        if ( a8 )
        {
          v78 = 0LL;
          v20 = v9;
          do
          {
            v78 += 4LL;
            v79 = v20 - v9;
            *(_QWORD *)&v143[v79] = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
            *(_DWORD *)&v147[v78 - 4] = *(unsigned __int8 *)(*(_QWORD *)v20 + 29LL);
            v80 = *(_QWORD *)((char *)a8 + v20 - v9);
            v20 += 8LL;
            *(_QWORD *)&v151[v79] = v80;
            --v77;
          }
          while ( v77 );
        }
        else
        {
          v97 = 0LL;
          v20 = 0LL;
          do
          {
            v98 = *(_QWORD *)(v97 + v9);
            v97 += 8LL;
            v20 += 4LL;
            *(_QWORD *)&v143[v97 - 8] = *(_QWORD *)(v98 + 16);
            *(_DWORD *)&v147[v20 - 4] = *(unsigned __int8 *)(*(_QWORD *)(v97 + v9 - 8) + 29LL);
            *(_QWORD *)&v151[v97 - 8] = 0LL;
            --v77;
          }
          while ( v77 );
        }
        v66 = v151;
      }
      if ( v143 && v147 && v66 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer(
          (_DWORD)v143,
          (unsigned int)&EventVidSchSignalSyncObjectsFromGpuImmediate,
          v20,
          a5,
          v9,
          (__int64)v143,
          (__int64)v66,
          (__int64)v147);
      if ( v148 != v149 && v148 )
        ExFreePoolWithTag(v148, 0);
      v148 = 0LL;
      v150 = 0;
      if ( v144 != v145 && v144 )
        ExFreePoolWithTag(v144, 0);
      v144 = 0LL;
      v146 = 0;
      if ( v140 != v141 && v140 )
        ExFreePoolWithTag(v140, 0);
      v140 = 0LL;
      v142 = 0;
    }
    v118 = v112;
    LockHandle.OldIrql = 0;
    v56 = 0;
    *((_DWORD *)&LockHandle.OldIrql + 1) = 1;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)&LockHandle;
    LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)&LockHandle;
    while ( 2 )
    {
      v57 = v56;
      v58 = *(_QWORD *)(v57 * 8 + v9);
      v59 = *(_DWORD *)(v58 + 48);
      switch ( v59 )
      {
        case 6:
LABEL_89:
          if ( *(_BYTE *)(v58 + 29) )
            goto LABEL_100;
          if ( !*(_BYTE *)(v58 + 28) )
          {
            if ( (v13 & 4) != 0 )
              goto LABEL_92;
            v70 = &a8[v57];
            v71 = a8[v57];
            if ( v59 == 6 )
              v72 = *(_QWORD *)(v58 + 200);
            else
              v72 = *(_QWORD *)(v58 + 96);
            if ( *(_BYTE *)(v58 + 30) )
            {
              if ( v71 >= v72 )
              {
                if ( v71 == v72 )
                {
                  WdLogSingleEntry1(3LL, *v70);
                  WdLogGlobalForLineNumber = 6028;
                }
                goto LABEL_92;
              }
              WdLogSingleEntry2(3LL, *v70, v72);
              WdLogGlobalForLineNumber = 6019;
LABEL_288:
              if ( *(_BYTE *)(v58 + 28) )
              {
                v100 = *(_QWORD *)(*(_QWORD *)(v58 + 344) + 40LL);
              }
              else
              {
                v99 = *(_DWORD *)(v58 + 48);
                if ( v99 == 2 )
                {
                  v100 = *(_QWORD *)(v58 + 72);
                }
                else if ( v99 == 6 )
                {
                  v100 = *(_QWORD *)(v58 + 200);
                }
                else
                {
                  v100 = *(_QWORD *)(v58 + 96);
                }
              }
              WdLogSingleEntry3(3LL, *(_QWORD *)(v58 + 16), v100, *v70);
              WdLogGlobalForLineNumber = 26626;
            }
            else
            {
              if ( (int)v72 - (int)v71 > 0 )
              {
                WdLogSingleEntry2(3LL, (unsigned int)v71, (unsigned int)v72);
                WdLogGlobalForLineNumber = 6038;
                goto LABEL_288;
              }
              if ( (_DWORD)v72 == (_DWORD)v71 )
              {
                WdLogSingleEntry1(3LL, (unsigned int)v71);
                WdLogGlobalForLineNumber = 6047;
              }
LABEL_92:
              v60 = a8[v56];
              if ( *(_BYTE *)(v58 + 28) )
              {
                v115 = *(_QWORD *)(v58 + 344);
                memset(&v128, 0, sizeof(v128));
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v115 + 8), &v128);
                v95 = *(_QWORD *)(v115 + 40);
                if ( v95 >= v60 )
                {
                  WdLogSingleEntry3(3LL, *(_QWORD *)(v58 + 16), v95, v60);
                  WdLogGlobalForLineNumber = 6247;
                }
                else
                {
                  *(_QWORD *)(v115 + 40) = v60;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v128);
              }
              else
              {
                v61 = *(_DWORD *)(v58 + 48);
                if ( v61 == 2 )
                {
                  *(_QWORD *)(v58 + 72) = v60;
                }
                else if ( v61 == 6 )
                {
                  *(_QWORD *)(v58 + 200) = v60;
                }
                else
                {
                  *(_QWORD *)(v58 + 96) = v60;
                }
              }
            }
            if ( *(_DWORD *)(v58 + 48) == 6 )
            {
              v63 = *(_QWORD *)(*(unsigned int *)(v58 + 80) + *(_QWORD *)(*(_QWORD *)(v58 + 64) + 192LL));
            }
            else
            {
              v62 = *(unsigned int **)(v58 + 72);
              if ( *(_BYTE *)(v58 + 30) )
                v63 = *(_QWORD *)v62;
              else
                v63 = *v62;
            }
            WdLogSingleEntry4(4LL, v58, v63, a8[v56], *(unsigned __int8 *)(v58 + 29));
            WdLogGlobalForLineNumber = 26634;
LABEL_100:
            _InterlockedIncrement((volatile signed __int32 *)(v58 + 36));
            VidSchiCompleteSignalSyncObject((HwQueueStagingList *)&v118, (struct _VIDSCH_SYNC_OBJECT *)v58, 1);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 36), 0xFFFFFFFF) != 1 )
            {
LABEL_101:
              if ( ++v56 >= a5 )
              {
                HwQueueStagingList::~HwQueueStagingList(&v118);
                if ( (_BYTE)v139 )
                {
                  v54 = HIBYTE(v139) == 0;
                  p_LockHandle = &v138;
                  goto LABEL_104;
                }
                goto LABEL_106;
              }
              continue;
            }
            v87 = *(_DWORD *)(v58 + 48);
            if ( v87 == 5 )
            {
LABEL_222:
              if ( !*(_QWORD *)(v58 + 16) )
                VidMmFreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(v58 + 64));
            }
            else
            {
              v92 = v87 - 3;
              if ( v92 )
              {
                if ( v92 == 1 )
                  goto LABEL_222;
              }
              else if ( *(_BYTE *)(v58 + 32) )
              {
                if ( *(_BYTE *)(v58 + 33) )
                {
                  LOBYTE(v64) = 1;
                  VmBusSendSignalGuestEvent(*(_QWORD *)(v58 + 72), v64);
                }
                ((void (__fastcall *)(_QWORD))DxgCoreInterface[94])(*(_QWORD *)(v58 + 72));
                *(_QWORD *)(v58 + 72) = 0LL;
              }
              else
              {
                ObfDereferenceObject(*(PVOID *)(v58 + 64));
                *(_QWORD *)(v58 + 64) = 0LL;
              }
            }
            if ( *(_BYTE *)(v58 + 28) )
            {
              v103 = (KSPIN_LOCK *)(*(_QWORD *)(v58 + 8) + 3432LL);
              memset(&v128, 0, sizeof(v128));
              KeAcquireInStackQueuedSpinLock(v103, &v128);
              v104 = *(_QWORD *)(v58 + 328);
              if ( *(_QWORD *)(v104 + 8) != v58 + 328 || (v105 = *(_QWORD **)(v58 + 336), *v105 != v58 + 328) )
LABEL_314:
                __fastfail(3u);
              *v105 = v104;
              *(_QWORD *)(v104 + 8) = v105;
              KeReleaseInStackQueuedSpinLock(&v128);
              v106 = (__int64 *)(v58 + 280);
              if ( *(_QWORD *)(v58 + 280) )
              {
                v108 = (KSPIN_LOCK *)(*(_QWORD *)(v58 + 344) + 8LL);
                memset(&v126, 0, sizeof(v126));
                KeAcquireInStackQueuedSpinLock(v108, &v126);
                v109 = (__int64 *)*v106;
                if ( *(__int64 **)(*v106 + 8) != v106 )
                  goto LABEL_314;
                v110 = *(__int64 ***)(v58 + 288);
                if ( *v110 != v106 )
                  goto LABEL_314;
                *v110 = v109;
                v109[1] = (__int64)v110;
                KeReleaseInStackQueuedSpinLock(&v126);
              }
              v107 = *(void **)(v58 + 344);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v107, 0xFFFFFFFF) == 1 )
                ExFreePoolWithTag(v107, 0);
            }
            ExFreePoolWithTag((PVOID)v58, 0);
            goto LABEL_101;
          }
          v81 = a8;
          break;
        case 0:
          if ( !*(_QWORD *)(v58 + 72) )
          {
            WdLogSingleEntry1(3LL, *(_QWORD *)(v58 + 16));
            WdLogGlobalForLineNumber = 26545;
          }
          *(_QWORD *)(v58 + 72) = 0LL;
          goto LABEL_100;
        case 1:
          v84 = *(_DWORD *)(v58 + 72);
          if ( v84 >= *(_DWORD *)(v58 + 68) )
          {
            WdLogSingleEntry1(3LL, *(_QWORD *)(v58 + 16));
            WdLogGlobalForLineNumber = 26559;
          }
          else
          {
            *(_DWORD *)(v58 + 72) = v84 + 1;
          }
          goto LABEL_100;
        case 2:
          v81 = a8;
          if ( !*(_BYTE *)(v58 + 28) )
          {
            v88 = *(_QWORD *)(v58 + 72);
            v89 = a8[v57];
            if ( v88 >= v89 )
            {
              WdLogSingleEntry3(3LL, *(_QWORD *)(v58 + 16), v88, v89);
              WdLogGlobalForLineNumber = 26594;
            }
            else
            {
              *(_QWORD *)(v58 + 72) = v89;
            }
            goto LABEL_100;
          }
          break;
        default:
          if ( (unsigned int)(v59 - 4) <= 1 )
            goto LABEL_89;
          goto LABEL_100;
      }
      break;
    }
    v82 = v81[v57];
    v113 = *(_QWORD *)(v58 + 344);
    memset(&v128, 0, sizeof(v128));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v113 + 8), &v128);
    v83 = *(_QWORD *)(v113 + 40);
    if ( v83 >= v82 )
    {
      WdLogSingleEntry3(3LL, *(_QWORD *)(v58 + 16), v83, v82);
      WdLogGlobalForLineNumber = 6247;
    }
    else
    {
      *(_QWORD *)(v113 + 40) = v82;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v128);
    goto LABEL_100;
  }
  v118 = v19;
  v120 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v19, &LockHandle);
  v37 = v121;
  v38 = Pool2;
  v122 = Pool2;
  v39 = 0;
  LOBYTE(v120) = 1;
  while ( 2 )
  {
    if ( *v38 && v11 )
    {
      v40 = a8;
      v41 = v121;
      v42 = v9 - (_QWORD)a8;
      v43 = v11;
      v44 = v42;
      while ( 1 )
      {
        v45 = *(unsigned __int64 *)((char *)v40 + v44);
        if ( v39 != v41 )
          goto LABEL_67;
        v46 = *(_DWORD *)(v45 + 48);
        if ( v46 != 6 )
        {
          switch ( v46 )
          {
            case 0:
              if ( !*(_QWORD *)(v45 + 72) )
              {
                WdLogSingleEntry1(3LL, *(_QWORD *)(v45 + 16));
                WdLogGlobalForLineNumber = 26545;
              }
              *(_QWORD *)(v45 + 72) = 0LL;
              goto LABEL_67;
            case 1:
              v86 = *(_DWORD *)(v45 + 72);
              if ( v86 >= *(_DWORD *)(v45 + 68) )
              {
                WdLogSingleEntry1(3LL, *(_QWORD *)(v45 + 16));
                WdLogGlobalForLineNumber = 26559;
              }
              else
              {
                *(_DWORD *)(v45 + 72) = v86 + 1;
              }
              goto LABEL_67;
            case 2:
              if ( *(_BYTE *)(v45 + 28) )
              {
LABEL_205:
                v123 = *v40;
                v114 = *(_QWORD *)(v45 + 344);
                memset(&v126, 0, sizeof(v126));
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v114 + 8), &v126);
                v85 = *(_QWORD *)(v114 + 40);
                if ( v85 >= v123 )
                {
                  WdLogSingleEntry3(3LL, *(_QWORD *)(v45 + 16), v85, v123);
                  WdLogGlobalForLineNumber = 6247;
                }
                else
                {
                  *(_QWORD *)(v114 + 40) = v123;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v126);
                goto LABEL_67;
              }
              v93 = *(_QWORD *)(v45 + 72);
              v94 = *v40;
              if ( v93 >= *v40 )
              {
                WdLogSingleEntry3(3LL, *(_QWORD *)(v45 + 16), v93, v94);
                WdLogGlobalForLineNumber = 26594;
              }
              else
              {
                *(_QWORD *)(v45 + 72) = v94;
              }
              goto LABEL_67;
          }
          if ( (unsigned int)(v46 - 4) > 1 )
            goto LABEL_67;
        }
        if ( !*(_BYTE *)(v45 + 29) )
        {
          if ( *(_BYTE *)(v45 + 28) )
            goto LABEL_205;
          if ( (v13 & 4) != 0 )
          {
LABEL_59:
            v54 = *(_BYTE *)(v45 + 28) == 0;
            v47 = *v40;
            v123 = *v40;
            if ( v54 )
            {
              v48 = *(_DWORD *)(v45 + 48);
              if ( v48 == 2 )
              {
                *(_QWORD *)(v45 + 72) = v47;
              }
              else if ( v48 == 6 )
              {
                *(_QWORD *)(v45 + 200) = v47;
              }
              else
              {
                *(_QWORD *)(v45 + 96) = v47;
              }
            }
            else
            {
              v116 = *(_QWORD *)(v45 + 344);
              memset(&v126, 0, sizeof(v126));
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v116 + 8), &v126);
              v96 = *(_QWORD *)(v116 + 40);
              if ( v96 >= v123 )
              {
                WdLogSingleEntry3(3LL, *(_QWORD *)(v45 + 16), v96, v123);
                WdLogGlobalForLineNumber = 6247;
              }
              else
              {
                *(_QWORD *)(v116 + 40) = v123;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v126);
            }
          }
          else
          {
            v74 = *v40;
            if ( v46 == 6 )
              v75 = *(_QWORD *)(v45 + 200);
            else
              v75 = *(_QWORD *)(v45 + 96);
            if ( *(_BYTE *)(v45 + 30) )
            {
              if ( v74 >= v75 )
              {
                if ( v74 == v75 )
                {
                  WdLogSingleEntry1(3LL, v74);
                  WdLogGlobalForLineNumber = 6028;
                }
                goto LABEL_59;
              }
              WdLogSingleEntry2(3LL, v74, v75);
              WdLogGlobalForLineNumber = 6019;
            }
            else
            {
              if ( (int)v75 - (int)v74 <= 0 )
              {
                if ( (_DWORD)v75 == (_DWORD)v74 )
                {
                  WdLogSingleEntry1(3LL, (unsigned int)v74);
                  WdLogGlobalForLineNumber = 6047;
                }
                goto LABEL_59;
              }
              WdLogSingleEntry2(3LL, (unsigned int)v74, (unsigned int)v75);
              WdLogGlobalForLineNumber = 6038;
            }
            if ( *(_BYTE *)(v45 + 28) )
            {
              v102 = *(_QWORD *)(*(_QWORD *)(v45 + 344) + 40LL);
            }
            else
            {
              v101 = *(_DWORD *)(v45 + 48);
              if ( v101 == 2 )
              {
                v102 = *(_QWORD *)(v45 + 72);
              }
              else if ( v101 == 6 )
              {
                v102 = *(_QWORD *)(v45 + 200);
              }
              else
              {
                v102 = *(_QWORD *)(v45 + 96);
              }
            }
            WdLogSingleEntry3(3LL, *(_QWORD *)(v45 + 16), v102, *v40);
            WdLogGlobalForLineNumber = 26626;
          }
          if ( *(_DWORD *)(v45 + 48) == 6 )
          {
            v50 = *(_QWORD *)(*(unsigned int *)(v45 + 80) + *(_QWORD *)(*(_QWORD *)(v45 + 64) + 192LL));
          }
          else
          {
            v49 = *(unsigned int **)(v45 + 72);
            if ( *(_BYTE *)(v45 + 30) )
              v50 = *(_QWORD *)v49;
            else
              v50 = *v49;
          }
          WdLogSingleEntry4(4LL, v45, v50, *v40, *(unsigned __int8 *)(v45 + 29));
          WdLogGlobalForLineNumber = 26634;
        }
LABEL_67:
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 36));
        ++v40;
        if ( !--v43 )
        {
          v11 = a5;
          v37 = v41;
          v9 = v136;
          v38 = v122;
          break;
        }
      }
    }
    ++v38;
    ++v39;
    v122 = v38;
    if ( v39 <= v37 )
      continue;
    break;
  }
  v51 = v130;
  if ( (_BYTE)v120 )
  {
    if ( HIBYTE(v120) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v120) = 0;
  }
  v52 = v37 + 1;
  do
  {
    v53 = *v51;
    if ( *v51 )
    {
      if ( *((_QWORD *)v53 + 12) )
        VidSchiSubmitCommandPacketToHwQueue(v53);
      else
        VidSchiSubmitCommandPacketToQueue();
    }
    ++v51;
    --v52;
  }
  while ( v52 );
  if ( (_BYTE)v120 )
  {
    v54 = HIBYTE(v120) == 0;
    p_LockHandle = &LockHandle;
LABEL_104:
    if ( v54 )
      KeReleaseInStackQueuedSpinLock(p_LockHandle);
    else
      KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
  }
LABEL_106:
  if ( P != v132 && P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
