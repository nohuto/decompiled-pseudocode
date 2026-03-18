/*
 * XREFs of ?MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400A5570
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400CB248 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_NI@Z @ 0x1400E11E4 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400E4860 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVaVidMmAlloc(
        VIDMM_FENCE_STORAGE_PAGE *this,
        VIDMM_GLOBAL **a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned __int64 *a4,
        unsigned int a5,
        bool a6)
{
  VIDMM_GLOBAL *v8; // r13
  VIDMM_PROCESS *v9; // rax
  unsigned int v11; // ecx
  char v12; // dl
  unsigned int v13; // edi
  int v15; // eax
  int v16; // r12d
  char *v17; // r15
  __int64 v18; // rbx
  __int64 *v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  CVirtualAddressAllocator *v22; // r10
  unsigned __int64 v23; // r9
  int v24; // eax
  unsigned __int64 v25; // r8
  int v26; // r13d
  int v27; // eax
  VIDMM_GLOBAL *v28; // rdi
  unsigned int v29; // r13d
  unsigned int i; // edx
  __int64 v31; // rcx
  __int64 v32; // rdx
  struct VIDMM_PAGING_QUEUE *v33; // r12
  VIDMM_MAPPED_VA_RANGE *v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // [rsp+60h] [rbp-81h]
  int v40; // [rsp+70h] [rbp-71h]
  int v41; // [rsp+78h] [rbp-69h]
  unsigned __int64 v42; // [rsp+88h] [rbp-59h]
  unsigned int v43; // [rsp+88h] [rbp-59h]
  unsigned __int64 v44; // [rsp+90h] [rbp-51h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp-49h] BYREF
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+A0h] [rbp-41h]
  VIDMM_GLOBAL *v47; // [rsp+A8h] [rbp-39h]
  unsigned __int64 v48; // [rsp+B0h] [rbp-31h] BYREF
  VIDMM_PROCESS *v49; // [rsp+B8h] [rbp-29h]
  struct _VIDSCH_SYNC_OBJECT *v50; // [rsp+C0h] [rbp-21h] BYREF
  VIDMM_MAPPED_VA_RANGE *v51; // [rsp+C8h] [rbp-19h]
  _D3DKMT_FREEGPUVIRTUALADDRESS v52; // [rsp+D0h] [rbp-11h] BYREF
  unsigned int v54; // [rsp+140h] [rbp+5Fh]

  *a4 = 0LL;
  v8 = *a2;
  v9 = a2[1];
  v47 = v8;
  v49 = v9;
  if ( (*((_BYTE *)v8 + 41064) & 0x10) == 0 )
    return 0LL;
  v11 = *((_DWORD *)v8 + 1738);
  v12 = -1;
  if ( v11 <= 1 )
  {
    v13 = 1;
  }
  else
  {
    v13 = a5;
    if ( a5 )
    {
      if ( ((-1 << v11) & a5) != 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1609;
        return 3221225485LL;
      }
    }
    else
    {
      v13 = (1 << v11) - 1;
    }
  }
  v54 = 0;
  v48 = 0LL;
  if ( a6 )
  {
    if ( _BitScanForward((unsigned int *)&v15, v13) )
      v12 = v15;
    v54 = v12;
  }
  v16 = 0;
  v17 = (char *)this + 80;
  v18 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 80, 0LL);
  *((_QWORD *)this + 11) = KeGetCurrentThread();
  v19 = (__int64 *)*((_QWORD *)this + 19);
  v20 = *((_QWORD *)v8 + 3);
  v44 = v20;
  v45 = 0LL;
  v42 = 0LL;
  if ( !v19 || (VIDMM_GLOBAL **)v19[2] != a2 )
  {
    WdLogSingleEntry1(1LL, a2);
    WdLogGlobalForLineNumber = 1652;
    goto LABEL_47;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v49, *(_DWORD *)(v20 + 240), v54);
  v22 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || *(_BYTE *)(*((_QWORD *)v8 + 3) + 3082LL) )
  {
    WdLogSingleEntry1(1LL, a2);
    WdLogGlobalForLineNumber = 1661;
LABEL_47:
    DxgkLogInternalTriageEvent(v38, 0x40000LL);
    *((_QWORD *)v17 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( v19[5] )
  {
    v25 = v45;
LABEL_27:
    v26 = *((_DWORD *)v19 + 15);
    ++*((_DWORD *)v19 + 8);
    v27 = v13 | v26;
    v28 = v47;
    v29 = v27 & ~v26;
    *((_DWORD *)v19 + 15) = v27;
    for ( i = 0; ; ++i )
    {
      v43 = i;
      if ( !v29 )
        break;
      if ( (v29 & 1) != 0 )
      {
        LOBYTE(v41) = 0;
        LOBYTE(v40) = 1;
        v39 = i;
        v31 = i;
        v32 = *v19;
        v33 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2[9] + 4 * v31);
        v44 = (unsigned __int64)v33;
        v34 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                         v22,
                                         v32,
                                         0LL,
                                         1LL,
                                         4096LL,
                                         v25,
                                         0LL,
                                         0LL,
                                         4096,
                                         v18,
                                         0LL,
                                         v39,
                                         0LL,
                                         v40,
                                         v41);
        v51 = v34;
        if ( !v34 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1751;
          v16 = -1073741823;
          goto LABEL_40;
        }
        v35 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                v28,
                VirtualAddressAllocator,
                v33,
                v34,
                KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v28 + 8LL),
                (const struct _DXGK_ADL *)&xmmword_140060B68,
                &v48,
                0LL);
        v16 = v35;
        if ( v35 == 259 )
        {
          if ( (*(_DWORD *)(*v19 + 28) & 0x20) != 0 )
          {
            v36 = v44;
            *(_QWORD *)(*v19 + 784) = v44;
            v37 = *v19;
            v44 = v48;
            *(_QWORD *)(v37 + 808) = v48;
            v50 = *(struct _VIDSCH_SYNC_OBJECT **)(v36 + 88);
            VIDMM_GLOBAL::WaitForFences(v28, &v50, &v44, 1u, 0LL, 0LL);
          }
        }
        else if ( v35 < 0 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1772;
          goto LABEL_40;
        }
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v51, VirtualAddressAllocator);
        i = v43;
      }
      v25 = v45;
      v22 = VirtualAddressAllocator;
      v29 >>= 1;
    }
    *a4 = v19[5] + *((unsigned int *)a3 + 4);
LABEL_40:
    v8 = v28;
    goto LABEL_41;
  }
  if ( a6 )
  {
    *((_BYTE *)v19 + 57) = 1;
    v23 = *((_QWORD *)v8 + 5140);
  }
  else
  {
    v23 = *(_QWORD *)(v44 + 2992);
    v42 = *(_QWORD *)(v44 + 3000);
  }
  if ( (*((_BYTE *)this + 160) & 0x20) == 0 )
    v18 = 1LL;
  v18 |= 0x10uLL;
  v24 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(v22, 0x1000uLL, v21, v23, v42, 0x1000u, &v45);
  v16 = v24;
  if ( v24 >= 0 )
  {
    v25 = v45;
    v22 = VirtualAddressAllocator;
    v19[5] = v45;
    *((_BYTE *)v19 + 56) = 1;
    goto LABEL_27;
  }
  WdLogSingleEntry1(3LL, v24);
  WdLogGlobalForLineNumber = 1701;
LABEL_41:
  *((_QWORD *)v17 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( v16 < 0 )
  {
    if ( v19[5] )
    {
      v52.BaseAddress = v19[5];
      *(_QWORD *)&v52.hAdapter = 0LL;
      v52.Size = 4096LL;
      VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(v8, v49, &v52, 1, v54);
    }
  }
  return (unsigned int)v16;
}
