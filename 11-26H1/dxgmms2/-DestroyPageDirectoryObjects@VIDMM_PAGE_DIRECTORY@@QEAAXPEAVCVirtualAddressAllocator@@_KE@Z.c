/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105120
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1401050F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x140037560 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck @ 0x14003E51C (Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1401050F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v5; // rsi
  unsigned __int8 v6; // r9
  VIDMM_GLOBAL *v7; // rdi
  __int64 v8; // r14
  VIDMM_PAGE_DIRECTORY *v9; // r10
  __int64 v10; // rcx
  struct VIDMM_GLOBAL_ALLOC *v11; // r8
  void *v12; // rcx
  VIDMM_PAGE_DIRECTORY *v13; // r10
  unsigned int NumPde; // r15d
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // r12
  __int64 v20; // rsi
  void *v21; // r9
  VIDMM_GLOBAL *v24; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v5 = a2;
  Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck();
  WdLogSingleEntry3(4LL, this, this[4], this[3]);
  WdLogGlobalForLineNumber = 8976;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory((VIDMM_PAGE_DIRECTORY *)this, v5, a3, v6, 1);
  v7 = (VIDMM_GLOBAL *)*((_QWORD *)v5 + 12);
  v8 = 0LL;
  v9 = (VIDMM_PAGE_DIRECTORY *)this;
  v24 = v7;
  if ( this[7] )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v5, (struct VIDMM_PAGE_DIRECTORY *)this);
    v15 = NumPde;
    if ( (*(_DWORD *)v13 & 0x2020) == 0x2020 )
      NumPde *= 2;
    v16 = *((_QWORD *)v7 + 5040);
    v17 = a3;
    v18 = 0;
    v19 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * (((unsigned __int64)*(unsigned int *)v13 >> 8) & 0x1F))
                    + 48LL * (*(_DWORD *)v13 & 7)
                    + 248);
    if ( NumPde )
    {
      v20 = 0LL;
      do
      {
        v21 = *(void **)(v20 + *((_QWORD *)v13 + 7));
        if ( v21 )
        {
          if ( (*(_DWORD *)v13 & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v8 + *((_QWORD *)v13 + 6)) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v24 + 40384), v21);
            else
              VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_GLOBAL_ALLOC **)v21, a2, v17);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v21, a2, v17, (unsigned __int8)v21);
          }
          v13 = (VIDMM_PAGE_DIRECTORY *)this;
          *(_QWORD *)((char *)this[7] + v20) = 0LL;
        }
        v17 += v19;
        if ( v18 == v15 )
          v17 = a3;
        ++v18;
        v8 += 16LL;
        v20 += 8LL;
      }
      while ( v18 < NumPde );
      v5 = a2;
    }
    operator delete(*((void **)v13 + 7));
    v9 = (VIDMM_PAGE_DIRECTORY *)this;
    v7 = v24;
    this[7] = 0LL;
  }
  if ( *((_QWORD *)v9 + 4) )
  {
    v10 = *((_QWORD *)v5 + 13);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v10 + 16), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v7, this[4], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    v9 = (VIDMM_PAGE_DIRECTORY *)this;
    this[4] = 0LL;
  }
  v11 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v9 + 3);
  if ( v11 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v7, 0LL, v11, 0);
    v9 = (VIDMM_PAGE_DIRECTORY *)this;
    this[3] = 0LL;
  }
  v12 = (void *)*((_QWORD *)v9 + 6);
  if ( v12 )
  {
    operator delete(v12);
    this[6] = 0LL;
  }
}
