/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1401677B4 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, const struct tagRECT *a2)
{
  unsigned int v4; // esi
  struct REGION_CORE *RegionCore; // rax
  __int64 *DeferredContext; // rdi
  struct REGION_CORE *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  LONG left; // edx
  LONG top; // eax
  LONG right; // r8d
  LONG bottom; // ecx
  __int64 v14; // rdi
  unsigned int (__fastcall **v16)(const struct REGION_CORE *); // rdi
  struct SCAN *pScan; // rax
  _DWORD *v18; // r8
  struct SCAN *v19; // rdx
  __int64 v20; // rax
  struct REGION_CORE *v21; // [rsp+20h] [rbp-20h] BYREF
  __int128 v22; // [rsp+28h] [rbp-18h] BYREF

  v4 = -1073741801;
  RegionCore = RGNCOREMEMOBJ::AllocateRegionCore((unsigned int)this);
  DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
  v7 = RegionCore;
  v21 = RegionCore;
  if ( RegionCore )
  {
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v16 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      (*(void (__fastcall **)(struct REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 120LL))(RegionCore);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v16, v7);
      DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      *((_QWORD *)RegionCore + 2) = 16LL;
      v8 = *((_QWORD *)RegionCore + 1);
      if ( v8 < 0x10 )
      {
        *((_QWORD *)v7 + 2) = v8;
        RustOnZeroSizedScanCallback();
        DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
      }
      *((_DWORD *)v7 + 6) = 1;
      *(_OWORD *)((char *)v7 + 28) = 0LL;
      if ( DeferredContext )
      {
        v9 = (*(__int64 (__fastcall **)(struct REGION_CORE *))(*DeferredContext + 208))(v7);
        DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
      }
      else
      {
        v9 = *(_QWORD *)v7;
      }
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(v9 + 4) = 0x80000000;
      *(_QWORD *)(v9 + 8) = 0x7FFFFFFFLL;
    }
  }
  if ( v7 )
  {
    left = a2->left;
    top = a2->top;
    right = a2->right;
    bottom = a2->bottom;
    LODWORD(v22) = a2->left;
    *(_QWORD *)((char *)&v22 + 4) = __PAIR64__(right, top);
    HIDWORD(v22) = bottom;
    if ( DeferredContext )
    {
      v14 = *DeferredContext;
      (*(void (__fastcall **)(struct REGION_CORE *, __int128 *))(v14 + 136))(v7, &v22);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))v14, v7);
    }
    else if ( left == right || top == bottom )
    {
      RGNCOREOBJ::vSet((RGNCOREOBJ *)&v21);
    }
    else
    {
      *(_OWORD *)((char *)v7 + 28) = v22;
      if ( (unsigned int)REGION_CORE::get_sizeScan(v7) == 56 )
      {
        pScan = REGION_CORE::get_pScan(v7);
        *((_DWORD *)pScan + 2) = DWORD1(v22);
        v18 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
        v18[1] = DWORD1(v22);
        v18[2] = HIDWORD(v22);
        v18[3] = v22;
        v18[4] = DWORD2(v22);
        *(_DWORD *)((char *)v18 + (unsigned int)(4 * *v18 + 16) + 4) = HIDWORD(v22);
      }
      else
      {
        REGION_CORE::set_sizeScan(v7, 0x38u);
        *((_DWORD *)v7 + 6) = 3;
        v19 = REGION_CORE::get_pScan(v7);
        *(_DWORD *)v19 = 0;
        *((_DWORD *)v19 + 1) = 0x80000000;
        *((_DWORD *)v19 + 2) = DWORD1(v22);
        *((_DWORD *)v19 + 3) = 0;
        *((_DWORD *)v19 + 4) = 2;
        *((_DWORD *)v19 + 5) = DWORD1(v22);
        *((_DWORD *)v19 + 6) = HIDWORD(v22);
        *((_DWORD *)v19 + 7) = v22;
        *((_DWORD *)v19 + 8) = DWORD2(v22);
        *((_DWORD *)v19 + 9) = 2;
        v20 = (unsigned int)(4 * *((_DWORD *)v19 + 4) + 16);
        *(_DWORD *)((char *)v19 + v20 + 16) = 0;
        *(_DWORD *)((char *)v19 + (unsigned int)v20 + 20) = HIDWORD(v22);
        *(_QWORD *)((char *)v19 + (unsigned int)v20 + 24) = 0x7FFFFFFFLL;
      }
    }
    *((_DWORD *)this + 3) = 2;
    v4 = 0;
    *((_QWORD *)this + 2) = v7;
  }
  return v4;
}
