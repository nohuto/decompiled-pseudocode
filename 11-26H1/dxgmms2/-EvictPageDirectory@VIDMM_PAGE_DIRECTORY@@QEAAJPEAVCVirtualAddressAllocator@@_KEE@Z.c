/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x140041F78 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105120 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ @ 0x140039020 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEBU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400D5DA0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105818 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x140105914 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        char a4,
        char a5)
{
  unsigned __int64 v5; // rdi
  struct CVirtualAddressAllocator *v6; // r12
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rdi
  unsigned int v19; // ebp
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  void *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r8
  VIDMM_PAGE_DIRECTORY *v27; // rcx
  __int64 v28; // r12
  VIDMM_PAGE_TABLE *v29; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v30; // eax
  unsigned __int64 v31; // rdi
  unsigned int v32; // r8d
  unsigned __int64 v33; // [rsp+78h] [rbp-80h]
  unsigned __int64 v34; // [rsp+90h] [rbp-68h] BYREF
  __int64 v35; // [rsp+98h] [rbp-60h]
  __int128 v36; // [rsp+A0h] [rbp-58h] BYREF
  char v37; // [rsp+B0h] [rbp-48h]
  unsigned int v40; // [rsp+118h] [rbp+20h] BYREF

  LOBYTE(v40) = a4;
  v5 = a3;
  v6 = a2;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v9 = *(_DWORD *)this;
    v10 = *(_QWORD *)(v8 + 96);
    v11 = *(_DWORD *)this & 7;
    v12 = (*(_DWORD *)this >> 8) & 0x1F;
    v13 = *(_QWORD *)(v10 + 40320);
    v34 = v10;
    v14 = *(_QWORD *)(v13 + 8 * v12);
    v35 = v14;
    if ( (v9 & 0x10) != 0 )
      v15 = *(unsigned int *)(32 * v12 + *((_QWORD *)v6 + 16) + 16);
    else
      v15 = *(unsigned int *)(v14 + 48 * v11 + 208);
    v40 = v15;
    v16 = v5;
    v17 = *(_QWORD *)(v14 + 48 * v11 + 248);
    if ( (_DWORD)v15 )
    {
      v18 = 0LL;
      v19 = v15;
      v20 = 0LL;
      do
      {
        v21 = *((_QWORD *)this + 7);
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          v22 = *((_QWORD *)this + 6);
          v23 = *(void **)(v20 + v21);
          if ( (*(_DWORD *)(v22 + v18) & 0x400LL) != 0 )
          {
            if ( v23 )
            {
              ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v34 + 40384), v23);
              *(_QWORD *)(v20 + *((_QWORD *)this + 7)) = 0LL;
              v22 = *((_QWORD *)this + 6);
            }
          }
          else if ( v23 )
          {
            VIDMM_PAGE_TABLE::EvictPageTable((VIDMM_PAGE_TABLE *)v23, v6, v16, a5);
            v22 = *((_QWORD *)this + 6);
          }
          if ( (*(_DWORD *)this & 0x2000) != 0 )
          {
            v28 = 8LL * v19;
            v29 = *(VIDMM_PAGE_TABLE **)(v28 + *((_QWORD *)this + 7));
            if ( (*(_DWORD *)(v22 + 16LL * v19) & 0x400LL) != 0 )
            {
              if ( v29 )
              {
                ExFreeToPagedLookasideList(
                  (PPAGED_LOOKASIDE_LIST)(v34 + 40384),
                  *(PVOID *)(v28 + *((_QWORD *)this + 7)));
                *(_QWORD *)(v28 + *((_QWORD *)this + 7)) = 0LL;
              }
              v6 = a2;
            }
            else
            {
              v6 = a2;
              if ( v29 )
                VIDMM_PAGE_TABLE::EvictPageTable(v29, a2, v16, a5);
            }
          }
        }
        else
        {
          v27 = *(VIDMM_PAGE_DIRECTORY **)(v20 + v21);
          if ( v27 )
            VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v27, v6, v16, 1u, a5);
        }
        *(_QWORD *)(v18 + *((_QWORD *)this + 6)) = 0LL;
        if ( (*(_DWORD *)this & 0x2020) == 0x2020 )
          *(_QWORD *)(*((_QWORD *)this + 6) + 16LL * v19) = 0LL;
        v16 += v17;
        ++v19;
        v20 += 8LL;
        v18 += 16LL;
        --v15;
      }
      while ( v15 );
      v10 = v34;
      v14 = v35;
      LODWORD(v15) = v40;
      v5 = a3;
    }
    if ( (**(_DWORD **)(v14 + 560) & 8) != 0 && a5 )
    {
      v40 = 0;
      v34 = 0LL;
      v37 = 1;
      v36 = 0LL;
      VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, v6, &v40, &v34, (struct VIDMM_SYSTEM_ADDRESS_CONTEXT *)&v36);
      if ( *(_BYTE *)(v10 + 41068) )
        v30 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v30 = (int)(*(_DWORD *)this << 15) >> 29;
      v33 = v5;
      v31 = v34;
      VIDMM_GLOBAL::UpdatePageTable(
        (VIDMM_GLOBAL *)v10,
        this,
        *((struct VIDMM_PROCESS **)v6 + 13),
        0LL,
        0LL,
        0LL,
        0LL,
        0,
        v15,
        0LL,
        0LL,
        (*(_DWORD *)this >> 8) & 0x1F,
        v40,
        v34,
        v30,
        v33,
        4,
        0LL);
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, v6, v32, v31, (struct VIDMM_SYSTEM_ADDRESS_CONTEXT *)&v36);
    }
    *(_DWORD *)(*((_QWORD *)this + 3) + 24LL) |= 0x10000u;
    *(_BYTE *)(*((_QWORD *)this + 3) + 42LL) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v10, *((__int64 ****)this + 4), 0LL);
    *(_DWORD *)(*((_QWORD *)this + 3) + 24LL) &= ~0x10000u;
    if ( byte_14008A204 < 0 )
      McTemplateK0x_EtwWriteTransfer(v24, &EventEvictPageTable, v25, *((_QWORD *)this + 4));
  }
  return 0LL;
}
