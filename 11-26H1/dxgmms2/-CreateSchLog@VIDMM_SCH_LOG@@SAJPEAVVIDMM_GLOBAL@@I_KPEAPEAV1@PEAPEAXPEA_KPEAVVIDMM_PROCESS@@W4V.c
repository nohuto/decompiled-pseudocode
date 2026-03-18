/*
 * XREFs of ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988
 * Callers:
 *     VidSchiCreateNativeFenceLog @ 0x1400476F8 (VidSchiCreateNativeFenceLog.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x140057C78 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x14003B30C (-GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003B35C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x14004B33C (-RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004BE08 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?IsVidMmWorkerThread@VIDMM_GLOBAL@@QEBA_NXZ @ 0x14010EC28 (-IsVidMmWorkerThread@VIDMM_GLOBAL@@QEBA_NXZ.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x140110AF8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_SCH_LOG::CreateSchLog(
        VIDMM_GLOBAL *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        VIDMM_PROCESS *a7,
        int a8)
{
  __int64 *v8; // r12
  SIZE_T v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned int v14; // edx
  int v15; // r14d
  __int64 v16; // rax
  VIDMM_PROCESS *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct _MDL *Mdl; // rax
  __int64 v21; // rcx
  int LogicalMemory; // eax
  unsigned __int64 v23; // r8
  CVirtualAddressAllocator *VaAllocator; // r12
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // r14d
  __int64 v30; // rax
  unsigned __int64 LogicalAddress; // rax
  VIDMM_GLOBAL *v32; // rcx
  int v33; // eax
  struct VIDMM_ALLOC *v35; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+88h] [rbp-C0h] BYREF
  char v37; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v38; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v40[19]; // [rsp+B0h] [rbp-98h] BYREF
  SIZE_T v41; // [rsp+150h] [rbp+8h] BYREF
  int v42; // [rsp+158h] [rbp+10h]
  SIZE_T v43; // [rsp+160h] [rbp+18h] BYREF
  __int64 *v44; // [rsp+168h] [rbp+20h]

  v44 = a4;
  v42 = a2;
  v8 = a4;
  v11 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v39 = 0LL;
  v41 = 0LL;
  memset(v40, 0, 0x58uLL);
  v38 = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  v36 = *(_QWORD *)a1 + 136LL;
  v13 = v36;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v36, 0LL);
  *(_QWORD *)(v36 + 8) = KeGetCurrentThread();
  v37 = 1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 212LL) == 1 )
  {
    v16 = operator new(104LL, 0x65356956u, 256LL);
    v12 = v16;
    if ( v16 )
    {
      *(_QWORD *)v16 = 0LL;
      *(_OWORD *)(v16 + 8) = 0LL;
      *(_DWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 32) = 0LL;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_QWORD *)(v16 + 48) = 0LL;
      *(_QWORD *)(v16 + 56) = 0LL;
      *(_QWORD *)(v16 + 64) = 0LL;
      *(_QWORD *)(v16 + 72) = 0LL;
      *(_QWORD *)(v16 + 80) = 0LL;
      *(_BYTE *)(v16 + 88) = 0;
      *(_DWORD *)(v16 + 92) = 0;
      *(_QWORD *)(v16 + 96) = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v35 = (struct VIDMM_ALLOC *)v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = a1;
      *(_DWORD *)(v12 + 24) = a2;
      *(_QWORD *)(v12 + 32) = v11;
      *(_DWORD *)(v12 + 92) = a8;
      v17 = a7;
      if ( !a7 )
        v17 = g_pVidMmSystemProcess;
      *(_QWORD *)(v12 + 96) = v17;
      v41 = v11;
      v18 = MmCreateSection(v12 + 40, 0LL, 0LL, &v41, 4, 0x8000000, 0LL, 0LL);
      v15 = v18;
      if ( v18 >= 0 )
      {
        v43 = v11;
        v15 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v12 + 40), v12 + 48, &v43, &v39, 0LL);
        if ( v15 >= 0 )
        {
          Mdl = VidMmiAllocateMdl(*(PVOID *)(v12 + 48), v11);
          *(_QWORD *)(v12 + 72) = Mdl;
          if ( Mdl )
          {
            MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
            LogicalMemory = SysMmAllocateLogicalMemory(
                              *(struct SYSMM_ADAPTER **)(*((_QWORD *)a1 + 3) + 224LL),
                              *(_QWORD *)(v12 + 32),
                              (const void *)v12,
                              (void **)(v12 + 80));
            v15 = LogicalMemory;
            if ( LogicalMemory >= 0 )
            {
              VaAllocator = VIDMM_SCH_LOG::GetVaAllocator((VIDMM_GLOBAL **)v12);
              if ( VaAllocator )
              {
                if ( a8 )
                {
                  v27 = *((_QWORD *)a1 + 3);
                  v25 = *(_QWORD *)(v27 + 2992);
                  v26 = *(_QWORD *)(v27 + 3000);
                }
                else
                {
                  v25 = *((_QWORD *)a1 + 5140);
                  v26 = 0LL;
                }
                v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                        VaAllocator,
                        v11,
                        v23,
                        v25,
                        v26,
                        0x1000u,
                        &v38);
                if ( v15 < 0 )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 206;
                  goto LABEL_12;
                }
                v28 = v38;
                *(_QWORD *)(v12 + 56) = v38;
                v29 = v42;
                v30 = CVirtualAddressAllocator::MapVirtualAddressRange(
                        VaAllocator,
                        v12,
                        0LL,
                        7LL,
                        v11,
                        v28,
                        0LL,
                        0LL,
                        4096,
                        17LL,
                        0LL,
                        v42,
                        0LL,
                        0,
                        0);
                if ( !v30 )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 227;
                  v15 = -1073741823;
                  goto LABEL_12;
                }
                *(_QWORD *)(v12 + 64) = v30;
                LODWORD(v40[0]) = 113;
                v40[6] = v30;
                v40[5] = VaAllocator;
                HIDWORD(v40[0]) = v29;
                LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v12 + 80));
                VidMmiInitializeAdlForPfnArray(
                  (struct _DXGK_ADL *)&v40[7],
                  (const unsigned __int64 *)(*(_QWORD *)(v12 + 72) + 48LL),
                  *(_DWORD *)(*(_QWORD *)(v12 + 72) + 40LL) >> 12,
                  LogicalAddress);
                if ( VIDMM_GLOBAL::IsVidMmWorkerThread(a1) )
                {
                  v35 = 0LL;
                  v33 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                          v32,
                          (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)&v40[5],
                          &v35);
                }
                else
                {
                  v33 = VIDMM_GLOBAL::QueueSystemCommandAndWait(v32, (struct _VIDMM_SYSTEM_COMMAND *)v40, 1);
                }
                v15 = v33;
                if ( v33 < 0 )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 254;
                  goto LABEL_12;
                }
              }
              else
              {
                WdLogSingleEntry0(4LL);
                WdLogGlobalForLineNumber = 178;
              }
              DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v36);
              v15 = VIDMM_GLOBAL::RegisterSchLog(a1, (struct VIDMM_SCH_LOG *)v12);
              if ( v15 >= 0 )
              {
                VIDMM_PROCESS::OpenAdapter(*(VIDMM_PROCESS **)(v12 + 96), a1);
                *(_BYTE *)(v12 + 88) = 1;
                *v44 = v12;
                *a5 = *(_QWORD *)(v12 + 48);
                *a6 = *(_QWORD *)(v12 + 56);
                DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v36);
                return (unsigned int)v15;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 266;
              v13 = v36;
              goto LABEL_12;
            }
            WdLogSingleEntry1(3LL, LogicalMemory);
            WdLogGlobalForLineNumber = 171;
          }
          else
          {
            _InterlockedIncrement(&dword_14008A880);
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 148;
            DxgkLogInternalTriageEvent(v21, 262145LL);
            v15 = -1073741801;
          }
LABEL_12:
          v8 = v44;
          goto LABEL_36;
        }
        _InterlockedIncrement(&dword_14008A80C);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 139;
      }
      else
      {
        _InterlockedIncrement(&dword_14008A87C);
        WdLogSingleEntry1(6LL, v18);
        WdLogGlobalForLineNumber = 124;
      }
      DxgkLogInternalTriageEvent(v19, 262145LL);
      goto LABEL_12;
    }
  }
  v15 = -1073741801;
LABEL_36:
  if ( v12 )
    VIDMM_SCH_LOG::`scalar deleting destructor'((VIDMM_SCH_LOG *)v12, v14);
  *v8 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  if ( v37 )
  {
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v15;
}
