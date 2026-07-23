/*
 * XREFs of PnpReplacePartitionUnit @ 0x1407B0E20
 * Callers:
 *     IoReplacePartitionUnit @ 0x1407A2D50 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140421C30 (KeFindFirstSetLeftAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PnprQueryReplaceFeatures @ 0x1405DE598 (PnprQueryReplaceFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnprAllocateMappingReserves @ 0x1407B1C64 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1407B1DF0 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x1407B2144 (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x1407B23BC (PnprIdentifyUnits.c)
 *     PnprLoadPluginDriver @ 0x1407B2878 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x1407B29F8 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x1407B2A28 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x1407B2B54 (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x1407B2C28 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x1407B3018 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x1407B311C (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x1407B32FC (PnprUnlockPagesForReplace.c)
 *     IoGetLegacyVetoList @ 0x1409C05B0 (IoGetLegacyVetoList.c)
 *     MmUnloadSystemImage @ 0x140AC9260 (MmUnloadSystemImage.c)
 *     PnprGetMillisecondCounter @ 0x140BF76E4 (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140BF8D2C (PnprWakeDevices.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG __fastcall PnpReplacePartitionUnit(ULONG_PTR *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  ULONG_PTR *v4; // rdi
  ULONG_PTR v5; // r8
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  __int64 v8; // rax
  __int64 Pool2; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int PluginDriver; // edi
  __int64 v14; // rcx
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  ULONG_PTR v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  _WORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  ULONG_PTR v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  bool v48; // di
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  char v54; // r15
  int ReplaceFeatures; // eax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // edx
  int v59; // eax
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rdx
  $B38C3B1372D6E954799962D5DD404846 *v63; // rcx
  __int64 v64; // r8
  unsigned __int16 i; // cx
  unsigned int FirstSetLeftAffinity; // eax
  unsigned int v67; // ecx
  ULONG_PTR v68; // rsi
  __int64 v69; // rsi
  void *v70; // rcx
  void *v71; // rcx
  void *v72; // rcx
  void *v73; // rcx
  ULONG v75; // [rsp+38h] [rbp-D0h]
  int v76; // [rsp+3Ch] [rbp-CCh] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  _GROUP_AFFINITY P_8; // [rsp+48h] [rbp-C0h] BYREF
  _GROUP_AFFINITY PreviousAffinity_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v80; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v81[80]; // [rsp+178h] [rbp+70h] BYREF

  P_8 = 0LL;
  memset_0(&v80.8, 0, sizeof(v80.8));
  PreviousAffinity_8 = 0LL;
  memset_0(v81, 0, sizeof(v81));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v75 = ActiveProcessorCount;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  v4 = a1 + 1;
  if ( *((int *)a1 + 4) >= 0 )
  {
    v5 = *v4;
    if ( *v4 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      if ( v6 && !_bittest((const signed __int32 *)(v6 + 396), 0x11u) )
      {
        v7 = *a1;
        if ( *a1 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
          if ( v8 && !_bittest((const signed __int32 *)(v8 + 396), 0x11u) )
          {
            PnprLogStartEvent(v7, *v4);
            goto LABEL_9;
          }
          IoAddTriageDumpDataBlock(v7, (PVOID)*(unsigned __int16 *)(v7 + 2));
          v14 = *(_QWORD *)(*a1 + 8);
          if ( v14 )
          {
            IoAddTriageDumpDataBlock(v14, (PVOID)(unsigned int)*(__int16 *)(v14 + 2));
            v15 = (_WORD *)(*(_QWORD *)(*a1 + 8) + 56LL);
            if ( *v15 )
            {
              IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8) + 56LL));
            }
          }
          if ( *a1 )
          {
            v16 = *(_QWORD *)(*a1 + 312);
            if ( *(_QWORD *)(v16 + 40) )
            {
              v17 = *(_QWORD *)(v16 + 40);
              IoAddTriageDumpDataBlock(v17, (PVOID)0x388);
              if ( *(_WORD *)(v17 + 40) )
              {
                IoAddTriageDumpDataBlock(v17 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 48), (PVOID)*(unsigned __int16 *)(v17 + 40));
              }
              v18 = *a1 + 312;
              if ( *a1 )
                v19 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
              else
                v19 = 0LL;
              if ( *(_WORD *)(v19 + 56) )
              {
                if ( *a1 )
                  v20 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
                else
                  LODWORD(v20) = 0;
                IoAddTriageDumpDataBlock(v20 + 56, (PVOID)2);
                if ( *a1 )
                {
                  v21 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                  v22 = v21;
                }
                else
                {
                  v21 = 0LL;
                  v22 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v21 + 64), (PVOID)*(unsigned __int16 *)(v22 + 56));
              }
              v23 = *a1;
              v24 = *a1 + 312;
              if ( *a1 )
                v25 = *(_QWORD *)(*(_QWORD *)v24 + 40LL);
              else
                v25 = 0LL;
              if ( *(_QWORD *)(v25 + 16) )
              {
                v26 = v23 ? *(_QWORD *)(*(_QWORD *)v24 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v26 + 16) + 56LL) )
                {
                  if ( v23 )
                    v27 = *(_QWORD *)(*(_QWORD *)v24 + 40LL);
                  else
                    v27 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v27 + 16) + 56, (PVOID)2);
                  if ( *a1 )
                  {
                    v28 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                    v29 = v28;
                  }
                  else
                  {
                    v28 = 0LL;
                    v29 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v28 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v29 + 16) + 56LL));
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, *a1, 0LL, 0LL);
      }
      IoAddTriageDumpDataBlock(*v4, (PVOID)*(unsigned __int16 *)(v5 + 2));
      v30 = *(_QWORD *)(*v4 + 8);
      if ( v30 )
      {
        IoAddTriageDumpDataBlock(v30, (PVOID)(unsigned int)*(__int16 *)(v30 + 2));
        v31 = (_WORD *)(*(_QWORD *)(*v4 + 8) + 56LL);
        if ( *v31 )
        {
          IoAddTriageDumpDataBlock((ULONG)v31, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*v4 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*v4 + 8) + 56LL));
        }
      }
      if ( *v4 )
      {
        v32 = *(_QWORD *)(*v4 + 312);
        if ( *(_QWORD *)(v32 + 40) )
        {
          v33 = *(_QWORD *)(v32 + 40);
          IoAddTriageDumpDataBlock(v33, (PVOID)0x388);
          if ( *(_WORD *)(v33 + 40) )
          {
            IoAddTriageDumpDataBlock(v33 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v33 + 48), (PVOID)*(unsigned __int16 *)(v33 + 40));
          }
          v34 = *v4 + 312;
          if ( *v4 )
            v35 = *(_QWORD *)(*(_QWORD *)v34 + 40LL);
          else
            v35 = 0LL;
          if ( *(_WORD *)(v35 + 56) )
          {
            if ( *v4 )
              v36 = *(_QWORD *)(*(_QWORD *)v34 + 40LL);
            else
              LODWORD(v36) = 0;
            IoAddTriageDumpDataBlock(v36 + 56, (PVOID)2);
            if ( *v4 )
            {
              v37 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
              v38 = v37;
            }
            else
            {
              v37 = 0LL;
              v38 = 0LL;
            }
            IoAddTriageDumpDataBlock(*(_QWORD *)(v37 + 64), (PVOID)*(unsigned __int16 *)(v38 + 56));
          }
          v39 = *v4;
          v40 = *v4 + 312;
          if ( *v4 )
            v41 = *(_QWORD *)(*(_QWORD *)v40 + 40LL);
          else
            v41 = 0LL;
          if ( *(_QWORD *)(v41 + 16) )
          {
            v42 = v39 ? *(_QWORD *)(*(_QWORD *)v40 + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v42 + 16) + 56LL) )
            {
              if ( v39 )
                v43 = *(_QWORD *)(*(_QWORD *)v40 + 40LL);
              else
                v43 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v43 + 16) + 56, (PVOID)2);
              if ( *v4 )
              {
                v44 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
                v45 = v44;
              }
              else
              {
                v44 = 0LL;
                v45 = 0LL;
              }
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v44 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v45 + 16) + 56LL));
            }
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, *v4, 0LL, 0LL);
  }
LABEL_9:
  Pool2 = ExAllocatePool2(0x40uLL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    PluginDriver = -1073741670;
    goto LABEL_162;
  }
  *(_QWORD *)Pool2 = *a1;
  *(_QWORD *)(Pool2 + 32) = *v4;
  *(_DWORD *)(Pool2 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(Pool2 + 160) = Pool2 + 152;
  *(_QWORD *)(Pool2 + 152) = Pool2 + 152;
  PnprContext = Pool2;
  if ( !KeDynamicPartitioningSupported && *((int *)a1 + 4) >= 0 )
  {
    v46 = *(_DWORD *)(Pool2 + 33288);
    v11 = 164LL;
    PluginDriver = -1073741637;
    if ( !v46 )
      v46 = 164;
    *(_DWORD *)(v12 + 33288) = v46;
    v47 = *(_DWORD *)(v12 + 33292);
    if ( !v47 )
      v47 = 2;
    *(_DWORD *)(v12 + 33292) = v47;
    goto LABEL_162;
  }
  v76 = 0;
  P = 0LL;
  v48 = 0;
  if ( (int)IoGetLegacyVetoList(&P, &v76) >= 0 )
    v48 = v76 != 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v48 )
  {
    v11 = PnprContext;
    v49 = *(_DWORD *)(PnprContext + 33288);
    if ( !v49 )
      v49 = 176;
    v10 = 7LL;
LABEL_158:
    PluginDriver = -1073741621;
LABEL_159:
    *(_DWORD *)(v11 + 33288) = v49;
    v53 = *(_DWORD *)(v11 + 33292);
    if ( !v53 )
      v53 = v10;
LABEL_161:
    *(_DWORD *)(v11 + 33292) = v53;
    goto LABEL_162;
  }
  PnprGetMillisecondCounter(1LL);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v81);
    PnprWakeDevices(v81);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_162;
  }
  PluginDriver = PnprIdentifyUnits(*(PVOID *)v12, *(PVOID *)(v12 + 32));
  if ( PluginDriver >= 0 )
  {
    PluginDriver = PnprCollectResources(v12, v12 + 32);
    if ( PluginDriver < 0 )
    {
      v11 = PnprContext;
      v10 = 226LL;
      v52 = *(_DWORD *)(PnprContext + 33288);
      if ( !v52 )
        v52 = 226;
      *(_DWORD *)(PnprContext + 33288) = v52;
      v53 = *(_DWORD *)(v11 + 33292);
      if ( !v53 )
        v53 = 1;
      goto LABEL_161;
    }
    v54 = 0;
    PluginDriver = PnprLoadPluginDriver(v12 + 33168, v12 + 33192);
    if ( PluginDriver < 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v12 + 24) + 4LL) )
      {
        v10 = 252LL;
LABEL_122:
        v11 = PnprContext;
        v3 = v75;
        v59 = *(_DWORD *)(PnprContext + 33288);
        if ( !v59 )
          v59 = v10;
        *(_DWORD *)(PnprContext + 33288) = v59;
        v53 = *(_DWORD *)(v11 + 33292);
        if ( !v53 )
          v53 = 1;
        goto LABEL_161;
      }
    }
    else
    {
      ReplaceFeatures = PnprQueryReplaceFeatures(v12 + 33192, (PVOID *)(v12 + 32));
      *(_DWORD *)(v12 + 64) |= ReplaceFeatures;
      v54 = ReplaceFeatures;
    }
    v56 = *(_QWORD *)(v12 + 24);
    if ( *(_DWORD *)(v56 + 4) )
    {
      v57 = *(_DWORD *)(v12 + 33200);
      if ( (v57 & 1) == 0 || !*(_QWORD *)(v12 + 33232) )
      {
        v58 = 267;
        goto LABEL_116;
      }
      if ( (v57 & 2) != 0 && !*(_QWORD *)(v12 + 33240) )
      {
        v58 = 275;
LABEL_116:
        v3 = v75;
        goto LABEL_117;
      }
      PluginDriver = PnprMmConstruct(v56, v12 + 152);
      if ( PluginDriver < 0 )
      {
        v10 = 287LL;
        goto LABEL_122;
      }
      if ( (v54 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v12 + 33272) || (*(_DWORD *)(v12 + 64) & 0x20) != 0 )
      {
        v58 = 311;
        goto LABEL_116;
      }
      v3 = v75;
      PluginDriver = PnprAllocateMappingReserves(v12 + 136, v12 + 144, v75);
      if ( PluginDriver < 0 )
      {
        v11 = PnprContext;
        v49 = *(_DWORD *)(PnprContext + 33288);
        if ( !v49 )
          v49 = 326;
        v10 = 10LL;
        goto LABEL_159;
      }
      *(_QWORD *)(v12 + 168) = 0LL;
    }
    else
    {
      v3 = v75;
    }
    if ( (*(_DWORD *)(v12 + 64) & 0x20) == 0 || *(_QWORD *)(v12 + 33280) )
    {
      *(_DWORD *)(v12 + 176) = v3;
      *(_QWORD *)&v80.Count = 2097153LL;
      memset_0(&v80.8, 0, sizeof(v80.8));
      RtlpCopyAffinityEx(&v80, v80.Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
      v60 = *(_QWORD *)(v12 + 16);
      v61 = *(_DWORD *)(v60 + 8);
      if ( v61 )
      {
        v62 = *(_QWORD *)v60 - (_QWORD)&v80.8;
        v63 = &v80.8;
        v64 = v61;
        do
        {
          v63->Bitmap[0] &= ~*(unsigned __int64 *)((char *)v63->Bitmap + v62);
          v63 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v63 + 8);
          --v64;
        }
        while ( v64 );
      }
      for ( i = 0; i < v80.Count; ++i )
      {
        if ( v80.Bitmap[i] )
        {
          if ( (unsigned int)KeCheckProcessorAffinityEx(&v80.Count, 0) )
            FirstSetLeftAffinity = 0;
          else
            FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)&v80);
          *(_DWORD *)(v12 + 180) = FirstSetLeftAffinity;
          v67 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + FirstSetLeftAffinity);
          *(_QWORD *)&P_8.Group = (unsigned __int16)(v67 >> 6);
          P_8.Mask = 1LL << v67;
          KeSetSystemGroupAffinityThread(&P_8, &PreviousAffinity_8);
          PluginDriver = PnprInitiateReplaceOperation();
          KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
          goto LABEL_162;
        }
      }
      v11 = PnprContext;
      v49 = *(_DWORD *)(PnprContext + 33288);
      if ( !v49 )
        v49 = 373;
      v10 = 6LL;
      goto LABEL_158;
    }
    v58 = 346;
LABEL_117:
    v11 = PnprContext;
    PluginDriver = -1073741637;
    v49 = *(_DWORD *)(PnprContext + 33288);
    if ( !v49 )
      v49 = v58;
    v10 = 9LL;
    goto LABEL_159;
  }
  v10 = PnprContext;
  v50 = *(_DWORD *)(PnprContext + 33288);
  if ( !v50 )
    v50 = 213;
  v51 = *(_DWORD *)(PnprContext + 33292);
  *(_DWORD *)(PnprContext + 33288) = v50;
  v11 = 3LL;
  if ( !v51 )
    v51 = 3;
  *(_DWORD *)(v10 + 33292) = v51;
LABEL_162:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v12 + 33344) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v12 )
  {
    v68 = *(_QWORD *)(v12 + 33168);
    if ( v68 )
    {
      if ( *(_QWORD *)(v12 + 33208) )
        guard_dispatch_icall_no_overrides(v11, v10);
      MmUnloadSystemImage(v68);
    }
    if ( *(_QWORD *)(v12 + 136) && *(_QWORD *)(v12 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v69 = 0LL;
        do
        {
          PnprFreeMappingReserve(v69 + *(_QWORD *)(v12 + 136));
          PnprFreeMappingReserve(v69 + *(_QWORD *)(v12 + 144));
          v69 += 24LL;
          --v3;
        }
        while ( v3 );
      }
      ExFreePoolWithTag(*(PVOID *)(v12 + 136), 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v12 + 144), 0x51706E50u);
    }
    PnprMmFree(v12 + 152);
    v70 = *(void **)(v12 + 16);
    if ( v70 )
    {
      ExFreePoolWithTag(v70, 0x51706E50u);
      *(_QWORD *)(v12 + 16) = 0LL;
    }
    v71 = *(void **)(v12 + 24);
    if ( v71 )
    {
      ExFreePoolWithTag(v71, 0x51706E50u);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    v72 = *(void **)(v12 + 48);
    if ( v72 )
    {
      ExFreePoolWithTag(v72, 0x51706E50u);
      *(_QWORD *)(v12 + 48) = 0LL;
    }
    v73 = *(void **)(v12 + 56);
    if ( v73 )
    {
      ExFreePoolWithTag(v73, 0x51706E50u);
      *(_QWORD *)(v12 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v12, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
