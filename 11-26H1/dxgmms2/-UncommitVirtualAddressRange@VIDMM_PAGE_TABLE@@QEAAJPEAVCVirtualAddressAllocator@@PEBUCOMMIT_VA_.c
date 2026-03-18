/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D3F00
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ @ 0x140039020 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAUCOMMIT_VA_STATE@@@Z @ 0x1400D4240 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAUCOMMIT_VA_STATE@@@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEBU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400D5DA0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // esi
  struct VIDMM_GLOBAL *v16; // r10
  char v17; // cl
  const struct _DXGK_PTE *v18; // r12
  int v19; // ebx
  enum _DXGK_PAGETABLEUPDATEMODE v20; // eax
  unsigned __int64 v21; // rbx
  __int64 v22; // rsi
  int v23; // ecx
  __int64 v24; // rcx
  CVirtualAddressAllocator *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v30; // rdx
  struct _DXGK_UPDATEPAGETABLEFLAGS v31; // [rsp+88h] [rbp-11h]
  unsigned __int64 v32; // [rsp+98h] [rbp-1h] BYREF
  VIDMM_GLOBAL *v33; // [rsp+A0h] [rbp+7h]
  __int128 v34; // [rsp+A8h] [rbp+Fh] BYREF
  char v35; // [rsp+B8h] [rbp+1Fh]
  int v36; // [rsp+BCh] [rbp+23h]
  struct VIDMM_ALLOC *v37; // [rsp+110h] [rbp+77h] BYREF

  v5 = a4;
  if ( (a4 & 0xFFF) == 0 )
  {
    v9 = a4 >> 12;
    if ( v9 + a5 > v9 )
    {
      v10 = *((_QWORD *)a2 + 12);
      v11 = *(_DWORD *)this;
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + 40320) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
      v13 = v9 & *(_DWORD *)(v12 + 196);
      v14 = *(_DWORD *)(v12 + 196) & (v9 + a5 - 1);
      if ( (v11 & 0x40) != 0 )
      {
        v13 >>= 4;
        v14 >>= 4;
        v5 &= 0xFFFFFFFFFFFF0000uLL;
      }
      v15 = v14 - v13 + 1;
      if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
        return 0LL;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v16, v13, v15, a3);
      if ( !*((_DWORD *)this + 1) && (*((_DWORD *)a2 + 38) & 4) == 0 )
        return 0LL;
      v17 = *((_BYTE *)a3 + 81);
      LODWORD(v37) = 0;
      v32 = 0LL;
      v35 = 1;
      v18 = (const struct _DXGK_PTE *)((unsigned __int64)a3 & -(__int64)(v17 != 0));
      v19 = (v17 != 0) | (*(_DWORD *)this >> 3) & 8;
      v33 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 12);
      v34 = 0LL;
      VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        this,
        a2,
        (unsigned int *)&v37,
        &v32,
        (struct VIDMM_SYSTEM_ADDRESS_CONTEXT *)&v34);
      if ( *((_BYTE *)v33 + 41068) )
        v20 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v20 = (int)(*(_DWORD *)this << 15) >> 29;
      v31 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v19;
      v21 = v32;
      VIDMM_GLOBAL::UpdatePageTable(
        v33,
        this,
        *((struct VIDMM_PROCESS **)a2 + 13),
        0LL,
        0LL,
        0LL,
        0LL,
        v13,
        v15,
        v18,
        0LL,
        (*(_DWORD *)this >> 8) & 0x1F,
        (unsigned int)v37,
        v32,
        v20,
        v5 >> 12,
        v31,
        0LL);
      v22 = *((_QWORD *)a2 + 12);
      if ( *(_BYTE *)(v22 + 41068) )
        v23 = 0;
      else
        v23 = (int)(*(_DWORD *)this << 15) >> 29;
      if ( *(_BYTE *)(v22 + 41069) )
      {
        *(_BYTE *)(v22 + 41069) = v36 != 0;
        if ( v23 )
        {
          if ( v23 == 1 )
          {
            v26 = *(CVirtualAddressAllocator **)(v22 + 8LL * ((*(_DWORD *)this >> 8) & 0x1F) + 40544);
            if ( (*(_DWORD *)this & 0x100000) == 0 )
            {
              v27 = *(_QWORD *)(v22 + 41128);
              v28 = *((_QWORD *)this + 3);
              v37 = 0LL;
              v29 = *(_QWORD *)(v27 + 112);
              *(_QWORD *)(v27 + 112) = *(_QWORD *)(v27 + 104) + *(unsigned int *)(*(_QWORD *)v28 + 16LL);
              v30 = *(struct VIDMM_MAPPED_VA_RANGE **)(v22 + 41128);
              *((_DWORD *)v30 + 18) = *((_DWORD *)v30 + 18) & 0xFFFFFC0F | (*(_DWORD *)this >> 4) & 0x1F0;
              CVirtualAddressAllocator::UncommitVirtualAddressRange(v26, v30, &v37, 1u, 0);
              *(_QWORD *)(*(_QWORD *)(v22 + 41128) + 112LL) = v29;
            }
          }
        }
        else
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v22 + 40320) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
          (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int128 *))(*(_QWORD *)v24 + 24LL))(
            v24,
            **((_QWORD **)this + 3),
            v21,
            &v34);
        }
        return 0LL;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 85LL, 2LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
  }
  return 3221225485LL;
}
