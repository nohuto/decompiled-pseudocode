/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXXZ @ 0x14000EB90
 * Callers:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140098C8C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this)
{
  struct REGION_CORE *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct REGION_CORE *v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  struct SCAN *pScan_mut; // rax
  char *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi

  v1 = qword_1402A10B0;
  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)this + 24LL;
  if ( qword_1402A10B0 )
  {
    v8 = (char *)qword_1402A10B0 + 8;
    v9 = v3 & -(__int64)(v2 != 0);
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
    v4 = (struct REGION_CORE *)-v2;
    v5 = v3 & -(__int64)(v4 != 0LL);
    v6 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v5 + 0x10) = 16LL;
    if ( v6 < 0x10 )
    {
      *(_QWORD *)((v3 & -(__int64)(v4 != 0LL)) + 0x10) = v6;
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
}
