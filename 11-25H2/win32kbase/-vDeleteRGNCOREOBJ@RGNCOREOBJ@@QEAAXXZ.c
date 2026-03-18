/*
 * XREFs of ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001E180
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001EBC0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x14002011C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140020650 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x140110CE0 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     CddEngDeleteRgn @ 0x14014C530 (CddEngDeleteRgn.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x14001E7F0 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNCOREOBJ::vDeleteRGNCOREOBJ(Win32kRS **this, struct REGION_CORE *a2)
{
  Win32kRS *v2; // r14
  struct REGION_CORE *v4; // rdi
  struct SCAN *pScan_mut; // rax

  v2 = *this;
  if ( *this )
  {
    v4 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v4 + 8, 2LL);
      (*(void (__fastcall **)(Win32kRS *))(*(_QWORD *)v4 + 152LL))(v2);
      ExReleasePushLockSharedEx((char *)v4 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *(_QWORD *)v2 )
    {
      if ( qword_1402A10B0 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*this, a2);
      else
        pScan_mut = *(struct SCAN **)*this;
      GreDeleteFastMutex(pScan_mut);
    }
    if ( *this )
      Win32FreePoolImpl(*this);
    *this = 0LL;
  }
}
