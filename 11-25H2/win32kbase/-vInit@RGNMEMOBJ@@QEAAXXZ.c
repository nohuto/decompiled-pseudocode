/*
 * XREFs of ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x1400117B0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4A80 (-vInitialize@RGNMEMOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@K@Z.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNMEMOBJ::vInit(RGNMEMOBJ *this)
{
  struct REGION_CORE *v1; // rdi
  unsigned __int64 v3; // rcx
  struct REGION_CORE *v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  struct SCAN *pScan_mut; // rax
  char *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax

  v1 = qword_1402A10B0;
  v3 = *(_QWORD *)this;
  v4 = (struct REGION_CORE *)(v3 + 24);
  if ( qword_1402A10B0 )
  {
    v8 = (char *)qword_1402A10B0 + 8;
    v9 = (unsigned __int64)v4 & -(__int64)(v3 != 0);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v1 + 8, 2LL);
    v10 = *(_QWORD *)v1;
    (*(void (__fastcall **)(__int64))(v10 + 160))(v9);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v10 + 216))(v9) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v9, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v5 = (unsigned __int64)v4 & ((unsigned __int128)-(__int128)v3 >> 64);
    v6 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v5 + 0x10) = 16LL;
    if ( v6 < 0x10 )
    {
      *(_QWORD *)(((unsigned __int64)v4 & ((unsigned __int128)-(__int128)v3 >> 64)) + 0x10) = v6;
      RustOnZeroSizedScanCallback();
      v1 = qword_1402A10B0;
    }
    *(_DWORD *)(v5 + 24) = 1;
    *(_OWORD *)(v5 + 28) = 0LL;
    if ( v1 )
      pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v5, v4);
    else
      pScan_mut = *(struct SCAN **)v5;
    *(_DWORD *)pScan_mut = 0;
    *((_DWORD *)pScan_mut + 3) = 0;
    *((_DWORD *)pScan_mut + 1) = 0x80000000;
    *((_DWORD *)pScan_mut + 2) = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
  v11 = (_QWORD *)(*(_QWORD *)this + 80LL);
  v11[1] = v11;
  *v11 = v11;
}
