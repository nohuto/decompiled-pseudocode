/*
 * XREFs of ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140020078
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001EBC0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140020650 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     CddEngCreateRectRgn @ 0x140134F80 (CddEngCreateRectRgn.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x14002011C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 */

RGNCOREMEMOBJ *__fastcall RGNCOREMEMOBJ::RGNCOREMEMOBJ(RGNCOREMEMOBJ *this)
{
  struct REGION_CORE *RegionCore; // rax
  struct REGION_CORE *v3; // rdx
  struct REGION_CORE *v4; // rbx
  struct REGION_CORE *v5; // rax
  unsigned __int64 v6; // rcx
  struct SCAN *pScan_mut; // rax

  RegionCore = RGNCOREMEMOBJ::AllocateRegionCore((unsigned int)this);
  *(_QWORD *)this = RegionCore;
  v4 = RegionCore;
  if ( RegionCore )
  {
    v5 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      Win32kRS::RegionCore_set_to_null_scan(v4, v3);
    }
    else
    {
      v6 = *((_QWORD *)v4 + 1);
      *((_QWORD *)v4 + 2) = 16LL;
      if ( v6 < 0x10 )
      {
        *((_QWORD *)v4 + 2) = v6;
        RustOnZeroSizedScanCallback();
        v5 = qword_1402A10B0;
      }
      *((_DWORD *)v4 + 6) = 1;
      *(_OWORD *)((char *)v4 + 28) = 0LL;
      if ( v5 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v4, v3);
      else
        pScan_mut = *(struct SCAN **)v4;
      *(_DWORD *)pScan_mut = 0;
      *((_DWORD *)pScan_mut + 3) = 0;
      *((_DWORD *)pScan_mut + 1) = 0x80000000;
      *((_DWORD *)pScan_mut + 2) = 0x7FFFFFFF;
    }
  }
  return this;
}
