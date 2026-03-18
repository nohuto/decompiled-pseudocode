/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000BB50 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14000BCAC (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiRewindPacket @ 0x14000BD80 (VidSchiRewindPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D028 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14001DC14 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiRestartQueuedFlip @ 0x1400324EC (VidSchiRestartQueuedFlip.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400341A0 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004BA9C (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_FLIP_QUEUE_ENTRY **a1)
{
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v1; // rsi
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r14
  struct _VIDSCH_PRESENT_INFO **v7; // r15
  unsigned int v8; // r15d
  struct _VIDSCH_PRESENT_INFO *v9; // r13
  int v10; // eax
  struct _VIDSCH_PRESENT_INFO *v11; // r11
  unsigned __int64 v12; // rdx
  _DWORD *v13; // r15
  __int64 v14; // r12
  int v15; // eax
  unsigned int v16; // r8d
  bool v17; // zf
  int v18; // eax
  char v19; // cl
  __int64 v20; // r9
  int v21; // ecx
  int v22; // edx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int16 v28; // r8
  unsigned int v29; // r8d
  int v30; // eax
  char v31; // cl
  struct _VIDSCH_PRESENT_INFO **v32; // r11
  struct _VIDSCH_PRESENT_INFO *v33; // rax
  int v34; // eax
  _DWORD *v35; // rdi
  bool v36; // al
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int *v40; // r12
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // r8
  __int64 v47; // rdx
  unsigned int v48; // edi
  __int64 v49; // rsi
  __int64 v50; // rcx
  char v51; // cl
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  __int64 v59; // rdx
  unsigned int v60; // r9d
  __int64 v61; // rcx
  bool v62; // dl
  int v63; // eax
  _DWORD *v64; // rax
  unsigned int v65; // r10d
  int v66; // edi
  unsigned int v67; // r9d
  char v68; // cl
  int v69; // eax
  unsigned int v70; // r15d
  char v71; // cl
  int v72; // eax
  unsigned int v73; // edx
  struct VIDSCH_FLIP_QUEUE *v74; // r12
  struct _VIDSCH_PRESENT_INFO **v75; // rax
  struct _VIDSCH_PRESENT_INFO *v76; // r15
  __int64 v77; // rdx
  __int64 v78; // rsi
  void *v79; // rcx
  __int64 v80; // rdi
  char *v81; // rdi
  unsigned int v82; // r13d
  char v83; // dl
  int v84; // eax
  __int64 *v85; // rdi
  __int64 *v86; // rcx
  int v87; // edx
  unsigned int v88; // r12d
  int v89; // ecx
  __int64 v90; // rcx
  int v91; // r8d
  int v92; // esi
  unsigned __int64 v93; // rdx
  __int64 v94; // r11
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rax
  char v100; // cl
  int v101; // eax
  int v102; // ecx
  char v103; // cl
  int v104; // eax
  struct _VIDSCH_PRESENT_INFO **v105; // rax
  struct _VIDSCH_PRESENT_INFO *v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rdi
  void *v109; // rcx
  __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // rdx
  int v113; // eax
  int v114; // ecx
  char v115; // di
  int v116; // eax
  unsigned int v117; // esi
  __int64 v118; // rax
  unsigned int v119; // edx
  unsigned int v120; // r8d
  __int64 *v121; // rdx
  __int64 *v122; // rcx
  __int64 **v123; // rax
  __int64 v124; // rax
  __int64 v125; // r9
  void (__fastcall *v126)(_QWORD, _QWORD); // rax
  unsigned int v127; // eax
  void (__fastcall *v128)(_QWORD, _QWORD); // rax
  int v129; // ecx
  unsigned int v130; // eax
  struct VIDSCH_FLIP_QUEUE *v131; // r9
  _QWORD *v132; // rdx
  __int64 *v133; // rcx
  __int64 v134; // rax
  __int64 **v135; // rax
  __int64 v136; // rax
  __int64 **v137; // rdx
  unsigned int v138; // [rsp+40h] [rbp-89h]
  __int64 v139; // [rsp+48h] [rbp-81h] BYREF
  __int64 v140; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v141; // [rsp+58h] [rbp-71h]
  char v142; // [rsp+60h] [rbp-69h]
  int v143; // [rsp+64h] [rbp-65h]
  unsigned int v144; // [rsp+68h] [rbp-61h]
  BOOL v145; // [rsp+6Ch] [rbp-5Dh]
  int v146; // [rsp+70h] [rbp-59h]
  unsigned int v147; // [rsp+74h] [rbp-55h]
  struct _VIDSCH_PRESENT_INFO *v148; // [rsp+78h] [rbp-51h]
  int v149; // [rsp+80h] [rbp-49h]
  __int64 v150; // [rsp+88h] [rbp-41h]
  __int64 v151; // [rsp+90h] [rbp-39h]
  struct VIDSCH_FLIP_QUEUE *v152; // [rsp+98h] [rbp-31h]
  struct _VIDSCH_PRESENT_INFO **v153; // [rsp+A0h] [rbp-29h]
  _BYTE *v154; // [rsp+A8h] [rbp-21h]
  __int64 v155; // [rsp+B0h] [rbp-19h]
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v156; // [rsp+B8h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-9h] BYREF
  struct _VIDSCH_QUEUE_PACKET *v158; // [rsp+130h] [rbp+67h] BYREF
  char v159; // [rsp+138h] [rbp+6Fh] BYREF
  KIRQL v160; // [rsp+140h] [rbp+77h]
  unsigned int v161; // [rsp+148h] [rbp+7Fh]

  v158 = (struct _VIDSCH_QUEUE_PACKET *)a1;
  v1 = a1[11];
  v2 = (struct _VIDSCH_QUEUE_PACKET *)a1;
  v3 = *((unsigned int *)a1 + 42);
  v161 = v3;
  v4 = (unsigned int)v3;
  v5 = *((_QWORD *)v1 + 13);
  v151 = v5;
  v6 = *(_QWORD *)(v5 + 40);
  v7 = (struct _VIDSCH_PRESENT_INFO **)(v6 + 8 * (v3 + 431));
  v148 = *v7;
  v153 = v7;
  if ( (*(_BYTE *)(v6 + 3284) & 1) == 0
    && !*(_DWORD *)(v6 + 3260)
    && !*(_BYTE *)(v5 + 212)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 208), 0, 0) )
  {
    if ( (*(_DWORD *)(v5 + 56) & 2) != 0 || *((int *)v2 + 100) >= 4 || *(_BYTE *)(v6 + 164) )
      VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v6, v3);
    v8 = *((_DWORD *)*v7 + 11122);
    if ( v8 != -1 )
    {
      v128 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 3304);
      if ( v128 )
        v128(*(_QWORD *)(v6 + 3368), v8);
    }
    v160 = KfRaiseIrql(2u);
    LOBYTE(v9) = v160;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 2016), &LockHandle);
    v139 = v6;
    v142 = 0;
    v141 = &v140;
    v140 = (__int64)&v140;
    v10 = *((_DWORD *)v2 + 16);
    v143 = 2;
    if ( (v10 & 0x20) != 0 )
    {
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v139, 0LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeLowerIrql((KIRQL)v9);
      do
        v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
      while ( v2 );
      if ( v8 == -1 )
        goto LABEL_174;
      v126 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 3320);
      if ( !v126 )
        goto LABEL_174;
    }
    else
    {
      v11 = v148;
      v12 = *((_QWORD *)v2 + 51) - *(_QWORD *)(v5 + 8 * (v4 + 48));
      v154 = (_BYTE *)(v5 + 8 * (v4 + 48));
      if ( v12 <= (unsigned int)(64 - *((_DWORD *)v148 + 809)) )
      {
        v159 = 0;
        v145 = *((_DWORD *)v148 + 1) == 3 || !*((_DWORD *)v2 + 101) && (*((_DWORD *)v2 + 70) & 0x10000000) != 0;
        v13 = (_DWORD *)((char *)v2 + 880);
        v14 = *((_QWORD *)v148 + 4);
        v15 = *((_DWORD *)v2 + 18) >> 23;
        v152 = (struct VIDSCH_FLIP_QUEUE *)v14;
        if ( (v15 & 1) != 0 )
          v16 = ((unsigned __int16)*v13 | (unsigned __int16)(*v13 >> 10)) & 0x3FF;
        else
          v16 = (1 << *(_DWORD *)(v6 + 160)) - 1;
        while ( 1 )
        {
          v17 = !_BitScanForward((unsigned int *)&v18, v16);
          v19 = -1;
          v146 = 0;
          if ( !v17 )
            v19 = v18;
          if ( !v16 )
            break;
          v20 = *(int *)(304LL * (unsigned int)v19 + *(_QWORD *)(v6 + 8 * v4 + 3448) + 188);
          if ( (int)v20 > -1 && *(_DWORD *)(160 * v20 + *(_QWORD *)(v6 + 3576) + 112) == 2 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v19, v4, v6);
            WdLogGlobalForLineNumber = 916;
LABEL_203:
            McTemplateK0qqqqq_EtwWriteTransfer(
              v21,
              (unsigned int)&EventBoostUnboostRefreshRate,
              v16,
              v161,
              *((_DWORD *)v11 + 798),
              v22,
              *((_DWORD *)v2 + 106),
              v21);
            v11 = v148;
LABEL_183:
            *((_DWORD *)v11 + 20773) = *((_DWORD *)v2 + 108);
            goto LABEL_25;
          }
          v16 &= ~(1 << v19);
        }
        v4 = v151;
        if ( *(_BYTE *)(*(_QWORD *)(v151 + 48) + 2632LL) )
        {
          v21 = *((_DWORD *)v2 + 108);
          v22 = *((_DWORD *)v148 + 20773);
          if ( v22 != v21 && !*(_BYTE *)(*(_QWORD *)(v6 + 16) + 3110LL) )
          {
            if ( (byte_14008A204 & 0x20) != 0 )
              goto LABEL_203;
            goto LABEL_183;
          }
        }
LABEL_25:
        v23 = *((_BYTE *)v2 + 408) - *v154 + *(_DWORD *)(v14 + 56);
        v146 = *((_DWORD *)v2 + 102) - *(_DWORD *)v154;
        v24 = *(_QWORD *)(v6 + 696);
        v25 = v23 & 0x3F;
        v144 = v25;
        v26 = v14 + 1400 * v25;
        v155 = v25;
        v27 = *((unsigned int *)v1 + 22);
        v156 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v26 + 120);
        if ( (unsigned int)v27 < *(_DWORD *)(v6 + 768) )
          v24 += 8 * v27;
        v17 = *(_DWORD *)(v26 + 1172) == 8;
        v28 = *(_WORD *)(*(_QWORD *)v24 + 6LL);
        v147 = v28;
        if ( v17 )
        {
          v59 = v26 + 1160;
          v40 = (int *)(v26 + 1272);
          *(_QWORD *)(v26 + 120 + 8LL * *(unsigned int *)(v26 + 1212)) = v1;
          *(_QWORD *)(v26 + 120 + 8LL * *(unsigned int *)(v26 + 1212) + 520) = *((_QWORD *)v1 + 20);
          v124 = *((_QWORD *)v1 + 13);
          ++*(_DWORD *)(v26 + 1212);
          *(_QWORD *)(v26 + 1160) = v124;
          ++*((_DWORD *)v1 + 200);
          *(_DWORD *)(v26 + 1204) |= 1 << v28;
        }
        else
        {
          ++*(_DWORD *)(v6 + 868);
          ++*(_DWORD *)(v4 + 1840);
          ++*((_DWORD *)v1 + 200);
          ++*((_DWORD *)v11 + 809);
          if ( (*((_DWORD *)v2 + 70) & 0x800000) != 0 )
            v29 = ((unsigned __int16)*v13 | (unsigned __int16)(*v13 >> 10)) & 0x3FF;
          else
            v29 = (1 << *(_DWORD *)(v6 + 160)) - 1;
          v17 = !_BitScanForward((unsigned int *)&v30, v29);
          v31 = -1;
          v138 = 0;
          if ( !v17 )
            v31 = v30;
          if ( v29 )
          {
            v32 = v153;
            do
            {
              v33 = *v32;
              v138 = 0;
              ++*((_DWORD *)v33 + 76 * v31 + 49);
              v34 = 1 << v31;
              v31 = -1;
              v29 &= ~v34;
              v17 = !_BitScanForward((unsigned int *)&v34, v29);
              if ( !v17 )
                v31 = v34;
            }
            while ( v29 );
          }
          v35 = *(_DWORD **)(v26 + 1312);
          memset((void *)(v26 + 120), 0, 0x4A8uLL);
          memset((void *)(v26 + 1320), 0, 0xC8uLL);
          *(_QWORD *)(v26 + 1312) = v35;
          memset(v35 + 6, 0, (unsigned int)(v35[1] * (72 * v35[2] + 224)));
          *(_QWORD *)(v26 + 120) = v1;
          *(_QWORD *)(v26 + 1160) = *((_QWORD *)v1 + 13);
          *(_DWORD *)(v26 + 1168) = *((_DWORD *)v2 + 28);
          *(_DWORD *)(v26 + 1176) = *((_DWORD *)v2 + 98);
          *(_QWORD *)(v26 + 640) = *((_QWORD *)v1 + 20);
          v36 = (*((_DWORD *)v2 + 70) & 0x10) != 0;
          v150 = v26 + 1160;
          *(_BYTE *)(v26 + 1196) = v36;
          v37 = *(_DWORD *)(v26 + 1272) ^ ((unsigned __int8)*(_DWORD *)(v26 + 1272) ^ (unsigned __int8)(*((_DWORD *)v2 + 18) >> 19)) & 0x10;
          *(_DWORD *)(v26 + 1272) = v37;
          v38 = v37 ^ ((unsigned __int16)v37 ^ (*((_DWORD *)v2 + 70) >> 20)) & 0x400;
          *(_DWORD *)(v26 + 1272) = v38;
          v17 = v146 == 0;
          *(_DWORD *)(v26 + 1272) = v38 ^ ((unsigned __int16)v38 ^ (*((_DWORD *)v2 + 70) >> 20)) & 0x800;
          if ( v17 )
            *(_QWORD *)(v26 + 1184) = ++*(_QWORD *)(v14 + 88);
          v39 = *((_DWORD *)v2 + 160);
          v40 = (int *)(v26 + 1272);
          v41 = *(_DWORD *)(v26 + 1272);
          *(_DWORD *)(v26 + 1320) = v39;
          if ( (v41 & 0x400) != 0 )
          {
            v102 = v39 - 1;
            if ( v102 )
            {
              if ( v102 == 1 )
              {
                *(_OWORD *)(v26 + 1324) = *(_OWORD *)((char *)v2 + 644);
                *(_OWORD *)(v26 + 1340) = *(_OWORD *)((char *)v2 + 660);
                *(_OWORD *)(v26 + 1356) = *(_OWORD *)((char *)v2 + 676);
                *(_OWORD *)(v26 + 1372) = *(_OWORD *)((char *)v2 + 692);
                *(_QWORD *)(v26 + 1388) = *(_QWORD *)((char *)v2 + 708);
              }
            }
            else
            {
              *(_OWORD *)(v26 + 1324) = *(_OWORD *)((char *)v2 + 644);
              *(_QWORD *)(v26 + 1340) = *(_QWORD *)((char *)v2 + 660);
              *(_DWORD *)(v26 + 1348) = *((_DWORD *)v2 + 167);
            }
          }
          if ( (v41 & 0x800) != 0 )
          {
            *(_OWORD *)(v26 + 1396) = *(_OWORD *)((char *)v2 + 716);
            *(_OWORD *)(v26 + 1412) = *(_OWORD *)((char *)v2 + 732);
          }
          v42 = *((_QWORD *)v2 + 105);
          if ( v42 )
          {
            *(_QWORD *)(v26 + 1472) = v42;
            *(_DWORD *)(v26 + 1480) = *((_DWORD *)v2 + 212);
            *(_QWORD *)(v26 + 1488) = *((_QWORD *)v2 + 107);
            *(_QWORD *)(v26 + 1496) = *((_QWORD *)v2 + 108);
            *(_QWORD *)(v26 + 1504) = *((_QWORD *)v2 + 109);
            v129 = *(_DWORD *)(v26 + 1512) ^ ((unsigned __int8)*(_DWORD *)(v26 + 1512) ^ (unsigned __int8)(*((_DWORD *)v2 + 71) >> 5)) & 1;
            *(_DWORD *)(v26 + 1512) = v129;
            *(_DWORD *)(v26 + 1512) = v129 ^ ((unsigned __int8)v129 ^ (unsigned __int8)(*((_DWORD *)v2 + 71) >> 3)) & 2;
          }
          v43 = v26 + 120;
          memmove(*(void **)(v26 + 1312), (char *)v2 + 880, *((unsigned int *)v2 + 223));
          *((_DWORD *)v2 + 224) = 0;
          v44 = 0;
          v45 = *(_DWORD *)(v6 + 160);
          v46 = *(_QWORD *)(v26 + 1312);
          if ( v45 )
          {
            do
            {
              v47 = *(_QWORD *)(8 * v44 * (*(_DWORD *)(v46 + 8) + 28) + v46 + 208);
              if ( v47 )
                _InterlockedIncrement((volatile signed __int32 *)(v47 + 12));
              v45 = *(_DWORD *)(v6 + 160);
              ++v44;
            }
            while ( v44 < v45 );
          }
          v48 = 0;
          if ( v45 )
          {
            do
            {
              v49 = 2 * v48 * (*((_DWORD *)v2 + 222) + 28);
              v50 = *(_QWORD *)&v13[v49 + 52];
              if ( v50 )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFFFFFFFF) == 1 )
                {
                  if ( *(_QWORD *)v50 )
                    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v50, (PVOID)v50);
                  else
                    ExFreePoolWithTag((PVOID)v50, 0);
                }
                *(_QWORD *)&v13[v49 + 52] = 0LL;
              }
              ++v48;
            }
            while ( v48 < *(_DWORD *)(v6 + 160) );
            v43 = v26 + 120;
          }
          VidSchiAcquireFlipFencesReference(
            (struct _VIDSCH_GLOBAL *)v6,
            *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v43 + 1192));
          v51 = v147;
          *(_DWORD *)(v26 + 1200) = *((_DWORD *)v2 + 104);
          *(_DWORD *)(v26 + 1204) = 1 << v51;
          v52 = *v40 ^ (*v40 ^ (*((_DWORD *)v2 + 70) >> 19)) & 1;
          *v40 = v52;
          v53 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)(*((_DWORD *)v2 + 70) >> 19)) & 2;
          *v40 = v53;
          v54 = v53 ^ ((unsigned __int8)v53 ^ (unsigned __int8)(*((_DWORD *)v2 + 70) >> 19)) & 4;
          *v40 = v54;
          *v40 = v54 ^ ((unsigned __int8)v54 ^ (unsigned __int8)(*((_DWORD *)v2 + 70) >> 19)) & 8;
          *(_QWORD *)(v26 + 1296) = *((_QWORD *)v2 + 38);
          v55 = *((_QWORD *)v2 + 39);
          *(_QWORD *)(v26 + 1304) = v55;
          if ( v55 )
            _InterlockedIncrement((volatile signed __int32 *)(v55 + 12));
          v56 = *((_DWORD *)v2 + 70);
          *(_DWORD *)(v26 + 1212) = 1;
          if ( (v56 & 0x400) != 0 )
          {
            *(_DWORD *)(v26 + 1208) = *((_DWORD *)v2 + 105);
            v57 = *((_DWORD *)v2 + 105);
          }
          else
          {
            *(_DWORD *)(v26 + 1208) = 1;
            v57 = 1;
          }
          *(_DWORD *)(v26 + 1216) = v57;
          if ( *(_BYTE *)(v26 + 1196) || v145 )
          {
            v113 = *v40;
            v59 = v43 + 1040;
            v11 = v148;
            v4 = v151;
            *(_DWORD *)(v26 + 1192) = 0;
            v114 = v113 ^ ((unsigned __int8)v113 ^ (unsigned __int8)(*((_DWORD *)v2 + 70) >> 21)) & 0x80;
            *v40 = v114;
            *v40 = v114 ^ ((unsigned __int16)v114 ^ (*((_DWORD *)v2 + 70) >> 20)) & 0x100;
          }
          else
          {
            v58 = *((_DWORD *)v2 + 101);
            v11 = v148;
            v4 = v151;
            if ( v58 )
            {
              *(_DWORD *)(v26 + 1192) = v58;
              v59 = v43 + 1040;
            }
            else
            {
              v59 = v150;
              v127 = *v40 & 0xFFFFFE7F | 0x80;
              *(_DWORD *)(v26 + 1192) = 0;
              *v40 = v127;
            }
          }
        }
        v60 = *(_DWORD *)(v26 + 1456);
        if ( !v60 )
        {
          *(_DWORD *)(v26 + 1456) = 1;
          v60 = 1;
        }
        v61 = *(_QWORD *)(*(_QWORD *)v59 + 48LL);
        if ( !*(_BYTE *)(*(_QWORD *)(v61 + 16) + 138LL) )
        {
          v119 = *((_DWORD *)v11 + 20773);
          if ( v60 != v119 && (*v40 & 0x100) == 0 && *((_DWORD *)v11 + 1) != 3 )
          {
            v120 = *(_DWORD *)(v26 + 1192);
            if ( v60 < v119 )
            {
              if ( v120 )
                v119 *= v120;
            }
            else
            {
              v119 = v120 / v60;
            }
            *(_DWORD *)(v26 + 1192) = v119;
            if ( (byte_14008A204 & 0x20) != 0 )
            {
              McTemplateK0qqqq_EtwWriteTransfer(
                v61,
                (unsigned int)&EventVirtualizeFlipSubmissionRate,
                v120,
                v60,
                *((_DWORD *)v11 + 20773),
                v120,
                v119);
              v11 = v148;
            }
          }
        }
        v62 = 0;
        *(_DWORD *)(v26 + 1456) = *((_DWORD *)v11 + 20773);
        if ( (*((_DWORD *)v11 + 20777) & 1) != 0 )
        {
          v118 = *(_QWORD *)(v4 + 48);
          if ( *(_BYTE *)(v118 + 2632) || *(_BYTE *)(*(_QWORD *)(v118 + 16) + 137LL) )
          {
            if ( (*v40 & 0x80u) != 0 || v145 )
              v62 = (**(_DWORD **)(v26 + 1312) & 0x3FF) != 0;
            if ( (*v40 & 0x180) == 0x80 )
              *v40 |= 0x200u;
          }
        }
        v63 = *((_DWORD *)v2 + 106);
        if ( !v63 )
        {
          if ( v62 )
            v63 = -1;
          else
            v63 = *((_DWORD *)v11 + 20774);
        }
        *(_DWORD *)(v26 + 1276) = v63;
        if ( (*((_DWORD *)v2 + 70) & 0x800) != 0 )
          *(_BYTE *)(v26 + 1197) = 1;
        v64 = *(_DWORD **)(v26 + 1312);
        v65 = 0;
        v138 = 0;
        v66 = 0;
        v67 = *v64 & 0x3FF;
        if ( *(_BYTE *)(v6 + 164) )
          v65 = (*v64 >> 10) & 0x3FF;
        v68 = -1;
        v17 = !_BitScanForward((unsigned int *)&v69, v67);
        if ( !v17 )
          v68 = v69;
        v70 = v68;
        v71 = -1;
        v17 = !_BitScanForward((unsigned int *)&v72, v65);
        if ( !v17 )
          v71 = v72;
        v73 = v71;
        v138 = v71;
        while ( v67 || v65 )
        {
          if ( v70 >= v73 )
          {
            v138 = 0;
            v103 = -1;
            v65 &= ~(1 << v73);
            v17 = !_BitScanForward((unsigned int *)&v104, v65);
            if ( !v17 )
              v103 = v104;
            v73 = v103;
            v138 = v103;
          }
          else
          {
            v87 = 0;
            LODWORD(v150) = 1;
            v149 = 0;
            v88 = 0;
            v89 = 1;
            while ( v88 <= v147 )
            {
              if ( (v89 & *(_DWORD *)(v26 + 1200)) != 0 )
              {
                v90 = *(_QWORD *)(v26 + 1312);
                v91 = *(_DWORD *)(v90 + 4);
                v92 = *(_DWORD *)(v90 + 8);
                v93 = (unsigned __int64)(unsigned int)(v66 + v91 * v87) << 6;
                v94 = *(_QWORD *)(v90 + v91 * ((8 * v92 + 231) & 0xFFFFFFF8) + v93 + 56);
                if ( ((*(_DWORD *)(v94 + 32) >> 2) & 0x3F) == v147 )
                {
                  v95 = *(_QWORD *)(v94 + 96);
                  v96 = v90 + (unsigned int)(8 * v91 * (v92 + 28));
                  v97 = *(_QWORD *)(v95 + 32);
                  v98 = v93 + v96;
                  if ( v97 )
                  {
                    *(_QWORD *)(v98 + 72) = ++*(_QWORD *)(v97 + 16);
                    v110 = *(_QWORD *)(*(_QWORD *)(v94 + 96) + 32LL);
                    *(_QWORD *)(v98 + 80) = ++*(_QWORD *)(v110 + 24);
                    v111 = *(_QWORD *)(*(_QWORD *)(v94 + 96) + 32LL);
                    v112 = 2 * (*(unsigned int *)(v111 + 40) + 3LL);
                    *(_OWORD *)(v111 + 8 * v112) = 0LL;
                    *(_DWORD *)(v111 + 40) = ((unsigned __int8)*(_DWORD *)(v111 + 40) + 1) & 7;
                    *(_DWORD *)(v111 + 8 * v112) = 0;
                    *(_QWORD *)(v111 + 8 * v112 + 8) = *(_QWORD *)(v98 + 80);
                  }
                  else
                  {
                    v99 = *(_QWORD *)(v95 + 24);
                    if ( v99 )
                      _InterlockedIncrement((volatile signed __int32 *)(v99 + 8));
                  }
                  break;
                }
                v89 = v150;
                v87 = ++v149;
              }
              ++v88;
              v89 *= 2;
              LODWORD(v150) = v89;
            }
            v73 = v138;
            LODWORD(v150) = 0;
            v100 = -1;
            v67 &= ~(1 << v70);
            v17 = !_BitScanForward((unsigned int *)&v101, v67);
            if ( !v17 )
              v100 = v101;
            v70 = v100;
          }
          ++v66;
        }
        v2 = v158;
        if ( *(_DWORD *)(v26 + 1208) > *(_DWORD *)(v26 + 1212) )
        {
          v105 = v153;
          *(_DWORD *)(v26 + 1172) = 8;
          v106 = *v105;
          v107 = *((unsigned int *)*v105 + 36);
          v108 = *((_QWORD *)*v105 + 17) + 112 * v107;
          *((_DWORD *)*v105 + 36) = (v107 + 1) & (*((_DWORD *)*v105 + 32) - 1);
          v109 = *(void **)(v108 + 72);
          if ( v109 )
            memset(v109, 0, 8LL * *(unsigned int *)(v6 + 160));
          v74 = v152;
          *(_DWORD *)v108 = 0;
          *(_DWORD *)(v108 + 16) = **(_DWORD **)(v26 + 1312) & 0x3FF;
          *(_DWORD *)(v108 + 20) = (**(_DWORD **)(v26 + 1312) >> 10) & 0x3FF;
          *(_BYTE *)(v108 + 24) = *((_BYTE *)v74 + 80);
          *(_DWORD *)(v108 + 28) = v144;
          *(LARGE_INTEGER *)(v108 + 8) = KeQueryPerformanceCounter(0LL);
          *(_BYTE *)(v108 + 36) = (*(_DWORD *)(v26 + 1272) & 0x20) != 0;
          *(_DWORD *)(v108 + 40) = *(_DWORD *)(v26 + 1172);
          *(_DWORD *)(v108 + 32) = *(_DWORD *)(v26 + 1176);
          *(_DWORD *)(v108 + 44) = *(_DWORD *)(v26 + 1276);
          *(_DWORD *)(v108 + 48) = *((_DWORD *)v106 + 798);
          *(_QWORD *)(v108 + 56) = *(_QWORD *)(v26 + 1432);
          *(_QWORD *)(v108 + 64) = *(_QWORD *)(v26 + 1440);
          *(_DWORD *)(v108 + 84) = *((_DWORD *)v106 + 813);
          *(_DWORD *)(v108 + 80) = *((_DWORD *)v106 + 812);
          *(_DWORD *)(v108 + 88) = *((_DWORD *)v74 + 14);
          *(_DWORD *)(v108 + 92) = *((_DWORD *)v74 + 15);
          *(_DWORD *)(v108 + 96) = *((_DWORD *)v74 + 16);
          *(_DWORD *)(v108 + 100) = *((_DWORD *)v74 + 17);
          *(_DWORD *)(v108 + 104) = *((_DWORD *)v74 + 18);
          *(_DWORD *)(v108 + 108) = *((_DWORD *)v74 + 19);
LABEL_90:
          v82 = v161;
        }
        else
        {
          v74 = v152;
          if ( !v146 )
          {
            v9 = v148;
            v1 = v156;
            v8 = v144;
            while ( 1 )
            {
              *((_DWORD *)v74 + 14) = ((_BYTE)v8 + 1) & 0x3F;
              ++*(_QWORD *)v154;
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 872));
              _InterlockedIncrement((volatile signed __int32 *)v9 + 810);
              if ( *((_DWORD *)v1 + 263) == 7 )
                *((_QWORD *)v1 + 133) = ++*((_QWORD *)v74 + 11);
              if ( !(unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip((__int64)v1)
                || !*((_BYTE *)v9 + 78948) )
              {
                v75 = v153;
                *((_DWORD *)v1 + 263) = 1;
                v76 = *v75;
                v77 = *((unsigned int *)*v75 + 36);
                v78 = *((_QWORD *)*v75 + 17) + 112 * v77;
                *((_DWORD *)*v75 + 36) = (v77 + 1) & (*((_DWORD *)*v75 + 32) - 1);
                v79 = *(void **)(v78 + 72);
                if ( v79 )
                  memset(v79, 0, 8LL * *(unsigned int *)(v6 + 160));
                v80 = 1400 * v155;
                *(_DWORD *)v78 = 0;
                v81 = (char *)v74 + v80;
                *(_DWORD *)(v78 + 16) = **((_DWORD **)v81 + 164) & 0x3FF;
                *(_DWORD *)(v78 + 20) = (**((_DWORD **)v81 + 164) >> 10) & 0x3FF;
                *(_BYTE *)(v78 + 24) = *((_BYTE *)v74 + 80);
                *(_DWORD *)(v78 + 28) = v144;
                *(LARGE_INTEGER *)(v78 + 8) = KeQueryPerformanceCounter(0LL);
                *(_BYTE *)(v78 + 36) = (*((_DWORD *)v81 + 318) & 0x20) != 0;
                *(_DWORD *)(v78 + 40) = *((_DWORD *)v81 + 293);
                *(_DWORD *)(v78 + 32) = *((_DWORD *)v81 + 294);
                *(_DWORD *)(v78 + 44) = *((_DWORD *)v81 + 319);
                *(_DWORD *)(v78 + 48) = *((_DWORD *)v76 + 798);
                *(_QWORD *)(v78 + 56) = *((_QWORD *)v81 + 179);
                *(_QWORD *)(v78 + 64) = *((_QWORD *)v81 + 180);
                *(_DWORD *)(v78 + 84) = *((_DWORD *)v76 + 813);
                *(_DWORD *)(v78 + 80) = *((_DWORD *)v76 + 812);
                *(_DWORD *)(v78 + 88) = *((_DWORD *)v74 + 14);
                *(_DWORD *)(v78 + 92) = *((_DWORD *)v74 + 15);
                *(_DWORD *)(v78 + 96) = *((_DWORD *)v74 + 16);
                *(_DWORD *)(v78 + 100) = *((_DWORD *)v74 + 17);
                *(_DWORD *)(v78 + 104) = *((_DWORD *)v74 + 18);
                *(_DWORD *)(v78 + 108) = *((_DWORD *)v74 + 19);
                goto LABEL_89;
              }
              v17 = !v145;
              v115 = 1;
              *((_DWORD *)v1 + 263) = 2;
              v116 = *((_DWORD *)v74 + 16);
              if ( v17 )
              {
                if ( v8 == v116 || *((_BYTE *)v1 + 1076) )
                {
                  if ( !*(_BYTE *)(v6 + 67) )
                    *((_QWORD *)v1 + 138) = MEMORY[0xFFFFF78000000320];
                  if ( !VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)v6, v9, v1, v74) )
                  {
                    if ( *((_BYTE *)v1 + 1076) )
                      VidSchiRestartQueuedFlip(&v139, v151, v161, v74, v8);
                    if ( !*((_DWORD *)v74 + 28) )
                    {
LABEL_144:
                      *((_DWORD *)v1 + 263) = 4;
                      v117 = v161;
                      LOBYTE(v158) = 0;
                      v115 = 0;
                      VidSchiUpdateFlipQueueHistory(0LL, v6, v161, v74, v8);
                      VidSchiExecuteMmIoFlip(&v139, v6, v117, v74, v8, &v159, &v158);
                      if ( (_BYTE)v158 )
                        VidSchiExecuteMmIoFlip(&v139, v6, v117, v74, v8, &v159, &v158);
                      goto LABEL_146;
                    }
                    *((_DWORD *)v1 + 263) = 3;
                  }
                }
                else
                {
                  v125 = ((_BYTE)v8 - 1) & 0x3F;
                  if ( (*((_DWORD *)v74 + 350 * v125 + 318) & 0x20) != 0 )
                  {
                    g_DxgMmsBugcheckExportIndex = 1;
                    WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v125, v74, v6);
                    WdLogGlobalForLineNumber = 916;
                    goto LABEL_193;
                  }
                }
              }
              else if ( v8 == v116 )
              {
                if ( !*(_BYTE *)(v6 + 164)
                  || !VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)v6, v9, v1, v74) )
                {
                  goto LABEL_144;
                }
                if ( !*(_BYTE *)(v6 + 67) )
                  *((_QWORD *)v1 + 138) = MEMORY[0xFFFFF78000000320];
              }
              v117 = v161;
LABEL_146:
              if ( *((_DWORD *)v74 + 350 * *((unsigned int *)v74 + 15) + 293) != 1 )
                *((_DWORD *)v74 + 15) = *((_DWORD *)v74 + 14);
              if ( v115 )
                VidSchiUpdateFlipQueueHistory(0LL, v6, v117, v74, v8);
LABEL_89:
              v144 = *((_DWORD *)v74 + 14);
              v8 = v144;
              v155 = v144;
              v1 = (struct VIDSCH_FLIP_QUEUE *)((char *)v74 + 1400 * v144 + 120);
              if ( *((_DWORD *)v1 + 263) != 7 )
                goto LABEL_90;
            }
          }
          v130 = v144;
          v131 = v152;
          *(_DWORD *)(v26 + 1172) = 7;
          v82 = v161;
          VidSchiUpdateFlipQueueHistory(0LL, v6, v161, v131, v130);
        }
        *((_DWORD *)v2 + 16) |= 2u;
        if ( v159 )
          VidSchiCompletePendingFlipOnPlane((__int64)&v139, v6, v82, (__int64)v74, 9);
        if ( v143 != 1 )
          goto LABEL_100;
        v83 = 0;
        v84 = *(_DWORD *)(v139 + 312);
        if ( v84 == 1 )
        {
          v85 = (__int64 *)v140;
          if ( (__int64 *)v140 == &v140 )
            goto LABEL_101;
          v132 = (_QWORD *)(v139 + 288);
          v133 = *(__int64 **)(v139 + 296);
          if ( *(_QWORD *)(*(_QWORD *)(v139 + 288) + 8LL) != v139 + 288 )
            goto LABEL_180;
          if ( (_QWORD *)*v133 != v132 )
            goto LABEL_180;
          if ( *(__int64 **)(v140 + 8) != &v140 )
            goto LABEL_180;
          if ( (__int64 *)*v141 != &v140 )
            goto LABEL_180;
          *v133 = (__int64)&v140;
          v132[1] = v141;
          *v141 = (__int64)v132;
          v134 = v140;
          v141 = v133;
          if ( *(__int64 **)(v140 + 8) != &v140 || (__int64 *)*v133 != &v140 )
            goto LABEL_180;
          *v133 = v140;
          *(_QWORD *)(v134 + 8) = v133;
          v141 = &v140;
          v140 = (__int64)&v140;
        }
        else
        {
          if ( v84 != 2 )
            goto LABEL_100;
          v85 = (__int64 *)v140;
          if ( (__int64 *)v140 == &v140 )
          {
LABEL_101:
            if ( v85 == &v140 )
            {
LABEL_102:
              v142 = 1;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              do
                v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
              while ( v2 );
              KeLowerIrql(v160);
              HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v139);
              return;
            }
            v121 = v85;
            while ( 1 )
            {
              HwQueueStagingList::ProcessHwQueue(
                (HwQueueStagingList *)&v139,
                (struct VIDSCH_HW_QUEUE *)(v121 - 22),
                0LL);
              v122 = (__int64 *)*v85;
              if ( *(__int64 **)(*v85 + 8) != v85 )
                break;
              v123 = (__int64 **)v85[1];
              if ( *v123 != v85 )
                break;
              *v123 = v122;
              v122[1] = (__int64)v123;
              *v85 = 0LL;
              v85[1] = 0LL;
              v85 = (__int64 *)v140;
              v121 = (__int64 *)v140;
              if ( (__int64 *)v140 == &v140 )
                goto LABEL_102;
            }
LABEL_180:
            __fastfail(3u);
          }
          do
          {
            v86 = (__int64 *)*v85;
            if ( *((_BYTE *)v85 - 29) )
            {
              if ( (__int64 *)v86[1] != v85 )
                goto LABEL_180;
              v135 = (__int64 **)v85[1];
              if ( *v135 != v85 )
                goto LABEL_180;
              *v135 = v86;
              v86[1] = (__int64)v135;
              v136 = v139 + 288;
              v137 = *(__int64 ***)(v139 + 296);
              if ( *v137 != (__int64 *)(v139 + 288) )
                goto LABEL_180;
              v85[1] = (__int64)v137;
              *v85 = v136;
              *v137 = v85;
              v83 = 1;
              *(_QWORD *)(v136 + 8) = v85;
            }
            v85 = v86;
          }
          while ( v86 != &v140 );
          if ( !v83 )
          {
LABEL_100:
            v85 = (__int64 *)v140;
            goto LABEL_101;
          }
        }
        *(_BYTE *)(v139 + 304) = 0;
        *(_QWORD *)(v139 + 1496) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v139 + 1464), 0, 0);
        goto LABEL_100;
      }
LABEL_193:
      VidSchiRewindPacket((__int64)v2, 1, 1, 1u);
      VidSchiUpdateContextStatus(v1, 3LL, 3343LL);
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v139, 0LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeLowerIrql((KIRQL)v9);
      if ( v8 == -1 || (v126 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 3320)) == 0LL )
      {
LABEL_174:
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v139);
        return;
      }
    }
    v126(*(_QWORD *)(v6 + 3368), v8);
    goto LABEL_174;
  }
  do
    v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
  while ( v2 );
}
