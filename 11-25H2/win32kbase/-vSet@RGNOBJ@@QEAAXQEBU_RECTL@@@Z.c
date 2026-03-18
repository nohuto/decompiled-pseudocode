/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreValidateVisrgn @ 0x1400473D4 (GreValidateVisrgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140097160 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140098C8C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     GreCreateRectRgn @ 0x1400EF790 (GreCreateRectRgn.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140129710 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1401298C0 (EngCreateClip.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1400123FC (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, struct _RECTL *a2)
{
  struct REGION_CORE *v2; // r14
  __int64 v3; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  struct SCAN *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  struct SCAN *pScan_mut; // rax
  _DWORD *v16; // rdx

  v2 = qword_1402A10B0;
  v3 = *(_QWORD *)this;
  if ( qword_1402A10B0 )
  {
    v5 = v3 + 24;
    if ( !v3 )
      v5 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    v6 = *(_QWORD *)v2;
    (*(void (__fastcall **)(__int64, struct _RECTL *))(*(_QWORD *)v2 + 176LL))(v5, a2);
    if ( (*(unsigned int (__fastcall **)(__int64))(v6 + 216))(v5) )
      goto LABEL_5;
    v10 = v5;
    goto LABEL_30;
  }
  v7 = v3 + 24;
  if ( !v3 )
    v7 = 0LL;
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(8LL, 2LL);
    v9 = MEMORY[0];
    (*(void (__fastcall **)(__int64, struct _RECTL *))(MEMORY[0] + 176LL))(v7, a2);
    if ( (*(unsigned int (__fastcall **)(__int64))(v9 + 216))(v7) )
    {
LABEL_5:
      ExReleasePushLockSharedEx((char *)v2 + 8, 2LL);
      KeLeaveCriticalRegion();
      return;
    }
    v10 = v7;
LABEL_30:
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v10, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_5;
  }
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    if ( qword_1402A10B0 )
    {
      Win32kRS::RegionCore_set_to_null_scan((Win32kRS *)v7, (struct REGION_CORE *)a2);
    }
    else
    {
      v14 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)(v7 + 16) = 16LL;
      if ( v14 < 0x10 )
      {
        *(_QWORD *)(v7 + 16) = v14;
        RustOnZeroSizedScanCallback();
        v2 = qword_1402A10B0;
      }
      *(_DWORD *)(v7 + 24) = 1;
      *(_OWORD *)(v7 + 28) = 0LL;
      if ( v2 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v7, (struct REGION_CORE *)a2);
      else
        pScan_mut = *(struct SCAN **)v7;
      *(_DWORD *)pScan_mut = 0;
      *((_DWORD *)pScan_mut + 1) = 0x80000000;
      *((_QWORD *)pScan_mut + 1) = 0x7FFFFFFFLL;
    }
  }
  else
  {
    *(struct _RECTL *)(v7 + 28) = *a2;
    if ( *(_DWORD *)(v7 + 16) == 56 )
    {
      v8 = *(_DWORD **)v7;
      v8[2] = a2->top;
      v16 = (_DWORD *)((char *)v8 + (unsigned int)(4 * *v8 + 16));
      v16[1] = a2->top;
      v16[2] = a2->bottom;
      v16[3] = a2->left;
      v16[4] = a2->right;
      *(_DWORD *)((char *)v16 + (unsigned int)(4 * *v16 + 16) + 4) = a2->bottom;
    }
    else
    {
      v11 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)(v7 + 16) = 56LL;
      if ( v11 < 0x38 )
      {
        *(_QWORD *)(v7 + 16) = v11;
        RustOnZeroSizedScanCallback();
        v2 = qword_1402A10B0;
      }
      *(_DWORD *)(v7 + 24) = 3;
      if ( v2 )
        v12 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v7, (struct REGION_CORE *)a2);
      else
        v12 = *(struct SCAN **)v7;
      *(_DWORD *)v12 = 0;
      *((_DWORD *)v12 + 1) = 0x80000000;
      *((_DWORD *)v12 + 2) = a2->top;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 4) = 2;
      *((_DWORD *)v12 + 5) = a2->top;
      *((_DWORD *)v12 + 6) = a2->bottom;
      *((_DWORD *)v12 + 7) = a2->left;
      *((_DWORD *)v12 + 8) = a2->right;
      *((_DWORD *)v12 + 9) = 2;
      v13 = (unsigned int)(4 * *((_DWORD *)v12 + 4) + 16);
      *(_DWORD *)((char *)v12 + v13 + 16) = 0;
      *(_DWORD *)((char *)v12 + v13 + 20) = a2->bottom;
      *(_QWORD *)((char *)v12 + v13 + 24) = 0x7FFFFFFFLL;
    }
  }
}
