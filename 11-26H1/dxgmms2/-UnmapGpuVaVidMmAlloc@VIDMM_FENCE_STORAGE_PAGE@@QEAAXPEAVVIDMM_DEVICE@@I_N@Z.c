/*
 * XREFs of ?UnmapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@I_N@Z @ 0x1400A6200
 * Callers:
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E1334 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_NI@Z @ 0x1400E11E4 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDR.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVaVidMmAlloc(
        VIDMM_FENCE_STORAGE_PAGE *this,
        VIDMM_GLOBAL **a2,
        unsigned int a3)
{
  VIDMM_GLOBAL *v3; // rsi
  VIDMM_PROCESS *v5; // r14
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _BYTE v12[16]; // [rsp+50h] [rbp-38h] BYREF
  struct _D3DKMT_FREEGPUVIRTUALADDRESS v13; // [rsp+60h] [rbp-28h] BYREF

  v3 = *a2;
  v5 = a2[1];
  if ( (*((_BYTE *)*a2 + 41064) & 0x10) != 0 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12,
      (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 80),
      1);
    v8 = *((_QWORD *)this + 19);
    if ( !v8 || *(VIDMM_GLOBAL ***)(v8 + 16) != a2 )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 2387;
      goto LABEL_11;
    }
    v9 = *(_DWORD *)(v8 + 32);
    if ( !v9 )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 2392;
LABEL_11:
      DxgkLogInternalTriageEvent(v10, 0x40000LL);
      goto LABEL_12;
    }
    v11 = v9 - 1;
    *(_DWORD *)(v8 + 32) = v11;
    if ( !v11 )
    {
      if ( !VIDMM_PROCESS::GetVirtualAddressAllocator(v5, *(_DWORD *)(*((_QWORD *)v3 + 3) + 240LL), a3) )
      {
        WdLogSingleEntry1(1LL, a2);
        WdLogGlobalForLineNumber = 2401;
        goto LABEL_11;
      }
      v13.BaseAddress = *(_QWORD *)(v8 + 40);
      *(_QWORD *)&v13.hAdapter = 0LL;
      v13.Size = 4096LL;
      VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(v3, v5, &v13, 1, a3);
      *(_QWORD *)(v8 + 40) = 0LL;
    }
LABEL_12:
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12);
  }
}
