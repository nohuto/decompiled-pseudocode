/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKW4_DXGK_PAGESIZE@@5KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DD45C
 * Callers:
 *     VidMmCreateContextAllocation @ 0x14003FBB0 (VidMmCreateContextAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     VidSchInsertContextAllocation @ 0x1400DD314 (VidSchInsertContextAllocation.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     VidSchRemoveContextAllocation @ 0x1401166D8 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        void **a17)
{
  __int64 v17; // r13
  unsigned int v18; // r10d
  void *v21; // r14
  struct VIDMM_DEVICE *v22; // r15
  __int64 v23; // r14
  char v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  int inserted; // esi
  char v28; // dl
  bool v29; // zf
  int v30; // ecx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct VIDMM_ALLOC *v36; // [rsp+D0h] [rbp-80h] BYREF
  struct VIDMM_GLOBAL_ALLOC *v37; // [rsp+D8h] [rbp-78h] BYREF
  _QWORD v38[18]; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v39; // [rsp+190h] [rbp+40h]
  void *v40; // [rsp+198h] [rbp+48h] BYREF

  v39 = a3;
  v17 = a4;
  v37 = 0LL;
  v18 = a3;
  v36 = 0LL;
  v40 = 0LL;
  v21 = 0LL;
  if ( !a4 )
  {
    v22 = 0LL;
    goto LABEL_21;
  }
  v22 = *(struct VIDMM_DEVICE **)(a4 + 792);
  if ( (*(_DWORD *)(*(_QWORD *)(a4 + 40) + 408LL) & 2) != 0 )
  {
LABEL_21:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2132;
    DxgkLogInternalTriageEvent(v34, 0x40000LL);
    inserted = -1073741811;
    goto LABEL_22;
  }
  v23 = a5;
  v24 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( !a5 )
    {
      WdLogSingleEntry0(1LL);
      v26 = 2139;
      goto LABEL_6;
    }
    v28 = -1;
    v29 = !_BitScanForward((unsigned int *)&v30, *(_DWORD *)(a5 + 384));
    a4 = a5;
    a15 = 0;
    if ( !v29 )
      v28 = v30;
    v18 = v28;
    v39 = v28;
LABEL_12:
    LOBYTE(a15) = 0;
    inserted = VIDMM_GLOBAL::CreateOneAllocation(
                 a1,
                 v22,
                 v18,
                 a7,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a16,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 a6,
                 -1610612736,
                 v24,
                 a4,
                 0LL,
                 0LL,
                 0LL,
                 &v37,
                 &a15);
    if ( inserted < 0 )
      goto LABEL_24;
    inserted = VIDMM_GLOBAL::OpenOneAllocation(a1, v22, v37, 0LL, 0, 0LL, &v36);
    if ( inserted < 0 )
      goto LABEL_24;
    inserted = VidSchInsertContextAllocation(*(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL), v17, v23, (__int64 *)v36, &v40);
    if ( inserted < 0 )
    {
      v21 = v40;
      WdLogSingleEntry1(1LL, v40);
      WdLogGlobalForLineNumber = 2224;
    }
    else
    {
      if ( (a2 & 2) != 0 )
      {
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                    *(VIDMM_PROCESS **)(*(_QWORD *)v36 + 8LL),
                                    *(_DWORD *)(*((_QWORD *)a1 + 3) + 240LL),
                                    v39);
        if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
                VirtualAddressAllocator,
                v36,
                0LL,
                1u,
                *(_QWORD *)(*(_QWORD *)v37 + 16LL),
                0LL,
                0LL,
                0LL,
                *(_DWORD *)(*(_QWORD *)v37 + 32LL),
                (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                0LL,
                v39,
                0LL,
                0,
                0) )
        {
          v21 = v40;
          WdLogSingleEntry1(1LL, v40);
          WdLogGlobalForLineNumber = 2250;
          DxgkLogInternalTriageEvent(v33, 0x40000LL);
          inserted = -1073741801;
          goto LABEL_22;
        }
      }
      memset(v38, 0, 0x58uLL);
      v38[2] = v36;
      LODWORD(v38[0]) = 209;
      LODWORD(v38[4]) = a2;
      inserted = VIDMM_GLOBAL::QueueDeferredCommand(
                   a1,
                   *(struct VIDMM_PAGING_QUEUE **)(32LL * ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v37 + 52LL) >> 2)
                                                 + *(_QWORD *)(*((_QWORD *)v36 + 1) + 72LL)),
                   (struct _VIDMM_DEFERRED_COMMAND *)v38,
                   1,
                   0LL);
      if ( inserted >= 0 )
      {
        *a17 = v40;
        return (unsigned int)inserted;
      }
      if ( inserted == -1071775232 )
      {
        v21 = v40;
        WdLogSingleEntry1(3LL, v40);
        WdLogGlobalForLineNumber = 2266;
LABEL_22:
        if ( v21 )
          VidSchRemoveContextAllocation(v21);
        goto LABEL_24;
      }
      v21 = v40;
      WdLogSingleEntry1(1LL, v40);
      WdLogGlobalForLineNumber = 2270;
    }
    DxgkLogInternalTriageEvent(v35, 0x40000LL);
    goto LABEL_22;
  }
  if ( !a5 )
    goto LABEL_12;
  WdLogSingleEntry0(1LL);
  v26 = 2146;
LABEL_6:
  WdLogGlobalForLineNumber = v26;
  DxgkLogInternalTriageEvent(v25, 0x40000LL);
  inserted = -1073741811;
LABEL_24:
  if ( v36 )
    VIDMM_GLOBAL::CloseOneAllocation(a1, v36, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
  if ( v37 )
    VIDMM_GLOBAL::DestroyOneAllocation(a1, v22, v37, 1);
  *a17 = 0LL;
  return (unsigned int)inserted;
}
