/*
 * XREFs of ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x140113140
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14003F8FC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400D3C74 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x14011379C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::Convert64K_4K(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4)
{
  _OWORD *v4; // r12
  __int64 v6; // rcx
  __int128 v8; // xmm1
  struct CVirtualAddressAllocator *v9; // r9
  struct _DXGK_UPDATEPAGETABLEFLAGS v10; // ebx
  _QWORD *v11; // rdi
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // r10
  __int128 v16; // xmm1
  int v17; // r14d
  __int64 v18; // r13
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // r10
  __int64 v25; // r11
  unsigned int v26; // edi
  unsigned int v27; // r13d
  unsigned int v28; // r9d
  __int64 v29; // rcx
  unsigned int v30; // r13d
  __int64 v31; // r8
  int *v32; // rax
  unsigned int v33; // edi
  struct VIDMM_GLOBAL_ALLOC ***v34; // rdx
  unsigned int v35; // r9d
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // r10
  struct VIDMM_GLOBAL_ALLOC ***v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  void *v47; // rdi
  int v48; // eax
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  int updated; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct _DXGK_UPDATEPAGETABLEFLAGS v57[2]; // [rsp+28h] [rbp-D8h]
  char *v58; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  struct VIDMM_GLOBAL_ALLOC ***v61; // [rsp+68h] [rbp-98h]
  unsigned __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  unsigned int v64; // [rsp+80h] [rbp-80h]
  struct VIDMM_GLOBAL_ALLOC ***v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int128 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-50h]
  __int128 v69; // [rsp+C0h] [rbp-40h]
  __int128 v70; // [rsp+D0h] [rbp-30h]
  __int128 v71; // [rsp+E0h] [rbp-20h]
  __int128 v72; // [rsp+F0h] [rbp-10h]
  unsigned int v73; // [rsp+150h] [rbp+50h]
  unsigned int v75; // [rsp+160h] [rbp+60h]

  v4 = 0LL;
  v6 = *((_QWORD *)a2 + 12);
  v8 = *((_OWORD *)a3 + 1);
  v9 = a2;
  v63 = v6;
  v67 = *(_OWORD *)a3;
  v10 = 0;
  v11 = (_QWORD *)(v6 + 24);
  v12 = *((_OWORD *)a3 + 2);
  v13 = *(_QWORD *)(v6 + 40320);
  v14 = *(_DWORD *)this & 7;
  v15 = (*(_DWORD *)this >> 8) & 0x1F;
  v68 = v8;
  v16 = *((_OWORD *)a3 + 3);
  v17 = 0;
  v69 = v12;
  v18 = *(_QWORD *)(v13 + 8 * v15);
  v19 = *((_OWORD *)a3 + 4);
  v60 = v18;
  v70 = v16;
  v20 = *((_OWORD *)a3 + 5);
  v21 = *(_QWORD *)(v18 + 48 * v14 + 248);
  *(_BYTE *)(v6 + 41066) |= 4u;
  v66 = v21;
  v71 = v19;
  v72 = v20;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    McTemplateK0ppq_EtwWriteTransfer(v6, &EventPageTableDemotion64, (__int64)a3, *v11, this, 1);
    v9 = a2;
  }
  *((_QWORD *)&v72 + 1) = 0LL;
  *(_QWORD *)&v68 = 0LL;
  if ( !*((_BYTE *)a3 + 83) )
  {
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(*((VIDMM_PROCESS **)v9 + 13), *(_DWORD *)(*v11 + 240LL), 1);
    *((_BYTE *)a3 + 83) = 1;
  }
  v22 = *(unsigned int *)(v18 + 200);
  v75 = *(_DWORD *)(v18 + 204);
  v23 = 16 * v22;
  if ( !is_mul_ok(v22, 0x10uLL) )
    v23 = -1LL;
  v58 = (char *)operator new[](v23, 0x34356956u, 256LL);
  v24 = v58;
  if ( !v58 )
  {
    _InterlockedIncrement(&dword_14008A840);
    WdLogSingleEntry0(6LL);
    v52 = 5952;
LABEL_44:
    v57[1] = 0;
    WdLogGlobalForLineNumber = v52;
    DxgkLogInternalTriageEvent(v51, 262145LL);
    v17 = -1073741801;
    goto LABEL_45;
  }
  if ( (*(_BYTE *)(v63 + 41065) & 0x40) == 0 )
    goto LABEL_9;
  v53 = 16 * v22;
  if ( !is_mul_ok(v22, 0x10uLL) )
    v53 = -1LL;
  v4 = (_OWORD *)operator new[](v53, 0x34356956u, 256LL);
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_14008A844);
    WdLogSingleEntry0(6LL);
    v52 = 5961;
    goto LABEL_44;
  }
  v24 = v58;
LABEL_9:
  v25 = v18;
  v26 = 0;
  *((_DWORD *)this + 1) = 0;
  v27 = 0;
  v28 = *(_DWORD *)(v60 + 204);
  if ( v28 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * v27) & 1) != 0 )
      {
        v43 = 0LL;
        v44 = 16LL;
        do
        {
          v45 = 16LL * v26;
          *(_OWORD *)&v24[v45] = *(_OWORD *)(*((_QWORD *)this + 5) + 16LL * v27);
          *(_QWORD *)&v24[v45 + 8] += v43;
          if ( v4 )
            v4[v26] = *(_OWORD *)(*((_QWORD *)this + 6) + 16LL * v27);
          ++v26;
          ++v43;
          --v44;
        }
        while ( v44 );
        *((_DWORD *)this + 1) += 16;
      }
      else
      {
        memset(&v24[16 * v26], 0, 0x100uLL);
        if ( v4 )
          memset(&v4[v26], 0, 0x100uLL);
        v24 = v58;
        v26 += 16;
        v25 = v60;
      }
      v28 = *(_DWORD *)(v25 + 204);
      ++v27;
    }
    while ( v27 < v28 );
  }
  if ( (**(_DWORD **)(v25 + 560) & 8) != 0 )
  {
    updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                this,
                a2,
                0,
                v28,
                a4,
                (struct _DXGK_UPDATEPAGETABLEFLAGS)8,
                0LL);
    v17 = updated;
    if ( updated >= 0 )
    {
      v10 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
      goto LABEL_16;
    }
    WdLogSingleEntry1(1LL, updated);
    v57[1] = 0;
    WdLogGlobalForLineNumber = 6012;
    DxgkLogInternalTriageEvent(v55, 0x40000LL);
LABEL_45:
    v47 = 0LL;
    goto LABEL_31;
  }
LABEL_16:
  operator delete(*((void **)this + 5));
  v30 = 16;
  *(_DWORD *)this &= ~0x40u;
  v31 = 0LL;
  *((_QWORD *)this + 5) = v58;
  v32 = (int *)*((_QWORD *)this + 6);
  v58 = 0LL;
  v33 = 1;
  v73 = 0;
  v34 = (struct VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)v32 + 1);
  v35 = *v32;
  v36 = a4;
  v62 = a4;
  v37 = a4 + 16;
  v61 = v34;
  while ( 1 )
  {
    v59 = v37;
    v38 = v35;
    if ( v33 >= v75 )
      break;
    v39 = *((_QWORD *)this + 6);
    v29 = 2LL * v33;
    v40 = *(_QWORD *)(v39 + 16LL * v33);
    v41 = *(struct VIDMM_GLOBAL_ALLOC ****)(v39 + 16LL * v33 + 8);
    v65 = v41;
    v64 = v40;
    if ( v35 == v40 && v34 == v41 )
    {
      v42 = v59;
      v30 += 16;
    }
    else
    {
      *(_QWORD *)&v68 = v35;
      v50 = VIDMM_PAGE_TABLE::UpdatePageTable(
              this,
              (VIDMM_GLOBAL **)a2,
              (__int64)&v67,
              v34,
              0LL,
              v34 != 0LL ? 3 : 0,
              v31,
              v30,
              v36,
              v10);
      v17 = v50;
      if ( v50 < 0 )
      {
        WdLogSingleEntry1(1LL, v50);
        WdLogGlobalForLineNumber = 6062;
        v57[1] = 0;
        DxgkLogInternalTriageEvent(v46, 0x40000LL);
        v34 = v61;
        v31 = v73;
        v36 = v62;
        break;
      }
      v42 = v59;
      v31 = v30 + v73;
      v34 = v65;
      v30 = 16;
      v35 = v64;
      v36 = v59;
      v73 = v31;
      v61 = v65;
      v62 = v59;
    }
    v37 = v42 + 16;
    ++v33;
  }
  v47 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v4;
  v4 = 0LL;
  if ( v17 >= 0 )
  {
    *(_QWORD *)&v68 = v38;
    v48 = VIDMM_PAGE_TABLE::UpdatePageTable(
            this,
            (VIDMM_GLOBAL **)a2,
            (__int64)&v67,
            v34,
            0LL,
            v34 != 0LL ? 3 : 0,
            v31,
            v30,
            v36,
            v10);
    v17 = v48;
    if ( v48 < 0 )
    {
      WdLogSingleEntry1(1LL, v48);
      v57[1] = 0;
      WdLogGlobalForLineNumber = 6101;
      DxgkLogInternalTriageEvent(v56, 0x40000LL);
    }
    else
    {
      CVirtualAddressAllocator::FlushGpuVaTlb(
        a2,
        (*(_DWORD *)this >> 8) & 0x1F,
        a4 << 12,
        (a4 + v66 * *(unsigned int *)(v60 + 200)) << 12);
    }
  }
LABEL_31:
  *(_BYTE *)(v63 + 41066) &= ~4u;
  if ( v58 )
    operator delete(v58);
  if ( v4 )
    operator delete(v4);
  if ( v47 )
    operator delete(v47);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v57[0] = 0;
    McTemplateK0ppq_EtwWriteTransfer(v29, &EventPageTableDemotion64, v31, *(_QWORD *)(v63 + 24), this, *(_QWORD *)v57);
  }
  return (unsigned int)v17;
}
