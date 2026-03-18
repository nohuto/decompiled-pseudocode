/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@IPEAX@Z @ 0x140110710
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x14003683C (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MO.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400369B8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x140104998 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x140110AF8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140110B98 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x140110D54 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ @ 0x140122B74 (-GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        struct VIDMM_PROCESS *a4,
        unsigned int a5,
        __int64 a6)
{
  int v10; // ebx
  void *CurrentPartitionHandle; // rcx
  _QWORD *v12; // rsi
  int v13; // ebx
  PVOID *v14; // r15
  struct _MDL *Mdl; // rax
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  VIDMM_PROCESS *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  struct VIDMM_PROCESS *VmwpProcess; // rbx
  _QWORD *v26; // rax
  char *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v31[32]; // [rsp+60h] [rbp-48h] BYREF

  v30 = 0LL;
  v29 = 4096LL;
  v10 = 0x8000000;
  CurrentPartitionHandle = 0LL;
  a6 = 0LL;
  if ( *((VIDMM_PROCESS_FENCE_STORAGE **)this + 29) != VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
  {
    v10 = 134479872;
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  }
  v12 = (_QWORD *)((char *)this + 112);
  v13 = MmCreateSection((char *)this + 112, 0LL, 0LL, &v29, 4, v10, CurrentPartitionHandle, 0LL);
  if ( v13 < 0 )
  {
    *v12 = 0LL;
    goto LABEL_13;
  }
  a6 = 4096LL;
  v14 = (PVOID *)((char *)this + 120);
  v13 = MmMapViewInSystemSpaceEx(*v12, (char *)this + 120, &a6, &v30, 0LL);
  if ( v13 >= 0 )
  {
    Mdl = VidMmiAllocateMdl(*v14, 0x1000uLL);
    *((_QWORD *)this + 16) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 740;
      DxgkLogInternalTriageEvent(v18, 262145LL);
      v13 = -1073741801;
      goto LABEL_13;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    v16 = *((_QWORD *)this + 29);
    if ( *(_BYTE *)(v16 + 128) )
    {
      if ( !a4 )
      {
        v21 = *(VIDMM_PROCESS **)v16;
LABEL_19:
        *((_QWORD *)this + 5) = v21;
        v13 = VIDMM_PROCESS::MapHostAddressesToGuest(
                v21,
                *((struct _MDL **)this + 16),
                0x1000uLL,
                (void **)this + 27,
                (unsigned __int64 *)this + 26);
        if ( v13 >= 0 )
        {
          v23 = *((_QWORD *)this + 29);
          if ( !*(_BYTE *)(v23 + 128) )
          {
            if ( *(_QWORD *)v23 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 815;
              DxgkLogInternalTriageEvent(v24, 262146LL);
            }
            *(_BYTE *)(*((_QWORD *)this + 29) + 129LL) = 1;
            *((_BYTE *)this + 224) = 1;
            VmwpProcess = VIDMM_PROCESS::GetVmwpProcess(*((VIDMM_PROCESS **)this + 5));
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v31,
              (struct _KTHREAD **)VmwpProcess + 13);
            v26 = (_QWORD *)((char *)this + 24);
            v27 = (char *)VmwpProcess + 88;
            v28 = *(_QWORD *)v27;
            if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 )
              __fastfail(3u);
            *v26 = v28;
            *((_QWORD *)this + 4) = v27;
            *(_QWORD *)(v28 + 8) = v26;
            *(_QWORD *)v27 = v26;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
          }
          goto LABEL_12;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 803;
        DxgkLogInternalTriageEvent(v22, 0x40000LL);
        goto LABEL_13;
      }
    }
    else if ( !a4 )
    {
      if ( *((_QWORD *)this + 27) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 828;
        DxgkLogInternalTriageEvent(v19, 262146LL);
      }
      if ( *((_QWORD *)this + 26) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 829;
        DxgkLogInternalTriageEvent(v20, 262146LL);
      }
LABEL_12:
      *((_QWORD *)this + 24) = *v14;
      *((_QWORD *)this + 18) = a2;
      *((_DWORD *)this + 40) = *((_DWORD *)a3 + 13);
      *((_DWORD *)this + 41) = *((_DWORD *)a3 + 14);
      return 0LL;
    }
    v21 = VIDMM_PROCESS::GetVmwpProcess(a4);
    goto LABEL_19;
  }
LABEL_13:
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v13;
}
