/*
 * XREFs of ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@EE@Z @ 0x1400DDF24
 * Callers:
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DDDD8 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DEBD8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InitializePageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        char a3,
        char a4)
{
  int v4; // r11d
  char v7; // bp
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // edx
  unsigned int v12; // r11d
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r8d
  int VidMmObjects; // eax
  unsigned int v18; // esi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax

  v4 = *(_DWORD *)this;
  v7 = a3;
  v9 = *((_QWORD *)a2 + 16) + 32LL * ((*(_DWORD *)this >> 8) & 0x1F);
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40320LL) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
  v11 = *(_DWORD *)(v10 + 200);
  if ( (*(_BYTE *)(v10 + 558) & 8) != 0 )
  {
    v7 = 0;
    v12 = v4 & 0xFFFFFF3F | 0x80;
    *(_DWORD *)this = v12;
  }
  else
  {
    *(_DWORD *)this = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(a3 << 6)) & 0x40;
    v12 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(a3 << 6)) & 0x40;
    if ( a3 )
      v11 >>= 4;
  }
  v13 = v11;
  *(_DWORD *)this = (*(_DWORD *)(v10 + 544) << 14) ^ (v12 ^ (*(_DWORD *)(v10 + 544) << 14)) & 0xFFFE3FFF;
  v14 = 16LL * v11;
  if ( !is_mul_ok(v11, 0x10uLL) )
    v14 = -1LL;
  v15 = operator new[](v14, 0x34356956u, 256LL);
  *((_QWORD *)this + 5) = v15;
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_14008A840);
    WdLogSingleEntry0(6LL);
    v21 = 5568;
    goto LABEL_12;
  }
  if ( v7 )
  {
    v23 = 16 * v13;
    if ( !is_mul_ok(v13, 0x10uLL) )
      v23 = -1LL;
    v24 = operator new[](v23, 0x34356956u, 256LL);
    *((_QWORD *)this + 6) = v24;
    if ( v24 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(v10 + 560) + 12LL);
      if ( a4 && v16 < *(_DWORD *)(v10 + 148) )
        v16 = *(_DWORD *)(v10 + 148);
      goto LABEL_9;
    }
    _InterlockedIncrement(&dword_14008A844);
    WdLogSingleEntry0(6LL);
    v21 = 5576;
LABEL_12:
    WdLogGlobalForLineNumber = v21;
    DxgkLogInternalTriageEvent(v20, 262145LL);
    return 3221225495LL;
  }
  v16 = *(_DWORD *)(v10 + 148);
LABEL_9:
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(this, a2, v16, *(_DWORD *)(v9 + 28));
  v18 = VidMmObjects;
  if ( VidMmObjects >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, VidMmObjects);
  WdLogGlobalForLineNumber = 5612;
  DxgkLogInternalTriageEvent(v22, 0x40000LL);
  return v18;
}
