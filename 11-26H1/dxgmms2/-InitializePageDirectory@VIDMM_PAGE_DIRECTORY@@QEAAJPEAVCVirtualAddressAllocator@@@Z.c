/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400DDB50
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400DD97C (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DEBD8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::InitializePageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r10
  unsigned int *v8; // rdx
  __int64 v9; // r9
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v15; // edx
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int VidMmObjects; // eax
  unsigned int v22; // edi
  __int64 v24; // rcx
  __int64 v25; // rcx

  v3 = *((_QWORD *)a2 + 12);
  v5 = *((_QWORD *)a2 + 16);
  v6 = (*(_DWORD *)this >> 8) & 0x1F;
  v7 = 32LL * (unsigned int)v6;
  v8 = (unsigned int *)(v7 + v5 + 16);
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 40320) + 8 * v6);
  if ( (*(_DWORD *)this & 0x10) != 0 && !*v8 )
    return 0LL;
  v10 = *(_DWORD *)this ^ ((unsigned __int16)*(_DWORD *)this ^ (unsigned __int16)((unsigned __int16)**(_DWORD **)(v9 + 560) << 6)) & 0x2000;
  *(_DWORD *)this = v10;
  v11 = (*(_DWORD *)(v9 + 544) << 14) ^ ((*(_DWORD *)(v9 + 544) << 14) ^ v10) & 0xFFFE3FFF;
  *(_DWORD *)this = v11;
  v12 = v11;
  if ( (v11 & 0x10) != 0 )
  {
    v14 = *(_DWORD *)(v7 + v5 + 20);
  }
  else
  {
    v13 = 48LL * (v11 & 7);
    v8 = (unsigned int *)(v13 + v9 + 208);
    v14 = *(_DWORD *)(v13 + v9 + 216);
  }
  v15 = *v8;
  v16 = 2 * v15;
  *(_DWORD *)this = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(v12 >> 7)) & 0x40;
  if ( (v12 & 0x2020) != 0x2020 )
    v16 = v15;
  v17 = 16 * v16;
  if ( !is_mul_ok(v16, 0x10uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, 0x37356956u, 256LL);
  *((_QWORD *)this + 6) = v18;
  if ( !v18 )
  {
    _InterlockedIncrement(&dword_14008A840);
    WdLogSingleEntry1(6LL, this);
    WdLogGlobalForLineNumber = 5726;
LABEL_15:
    DxgkLogInternalTriageEvent(v24, 262145LL);
    return 3221225495LL;
  }
  v19 = 8 * v16;
  if ( !is_mul_ok(v16, 8uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, 0x33356956u, 256LL);
  *((_QWORD *)this + 7) = v20;
  if ( !v20 )
  {
    _InterlockedIncrement(&dword_14008A838);
    WdLogSingleEntry1(6LL, this);
    WdLogGlobalForLineNumber = 5733;
    goto LABEL_15;
  }
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   this,
                   a2,
                   v14,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 8) & 0x1F) + *((_QWORD *)a2 + 16) + 24));
  v22 = VidMmObjects;
  if ( VidMmObjects >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, VidMmObjects);
  WdLogGlobalForLineNumber = 5740;
  DxgkLogInternalTriageEvent(v25, 0x40000LL);
  return v22;
}
