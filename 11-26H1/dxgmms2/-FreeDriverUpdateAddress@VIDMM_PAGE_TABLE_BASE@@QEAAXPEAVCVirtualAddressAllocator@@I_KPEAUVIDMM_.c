/*
 * XREFs of ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x140105914
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        __int64 a4,
        struct VIDMM_SYSTEM_ADDRESS_CONTEXT *a5)
{
  __int64 v5; // rdi
  int v7; // edx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  CVirtualAddressAllocator *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v15; // rdx
  struct VIDMM_ALLOC *v16; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((_QWORD *)a2 + 12);
  if ( *(_BYTE *)(v5 + 41068) )
    v7 = 0;
  else
    v7 = (int)(*(_DWORD *)this << 15) >> 29;
  if ( !*(_BYTE *)(v5 + 41069) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 85LL, 2LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x140105A66LL);
  }
  *(_BYTE *)(v5 + 41069) = *((_DWORD *)a5 + 5) != 0;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v10 = *(_DWORD *)this;
      v11 = *(CVirtualAddressAllocator **)(v5 + 8LL * ((v10 >> 8) & 0x1F) + 40544);
      if ( (v10 & 0x100000) == 0 )
      {
        v12 = *((_QWORD *)this + 3);
        v13 = *(_QWORD *)(v5 + 41128);
        v16 = 0LL;
        v14 = *(_QWORD *)(v13 + 112);
        *(_QWORD *)(v13 + 112) = *(_QWORD *)(v13 + 104) + *(unsigned int *)(*(_QWORD *)v12 + 16LL);
        v15 = *(struct VIDMM_MAPPED_VA_RANGE **)(v5 + 41128);
        *((_DWORD *)v15 + 18) = *((_DWORD *)v15 + 18) & 0xFFFFFC0F | (*(_DWORD *)this >> 4) & 0x1F0;
        CVirtualAddressAllocator::UncommitVirtualAddressRange(v11, v15, &v16, 1u, 0);
        *(_QWORD *)(*(_QWORD *)(v5 + 41128) + 112LL) = v14;
      }
    }
  }
  else
  {
    v8 = (_QWORD *)*((_QWORD *)this + 3);
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 40320) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 24LL))(v9, *v8, a4);
  }
}
