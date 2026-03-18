/*
 * XREFs of ?SetEmpty@CRegion@@UEAAXXZ @ 0x14001D260
 * Callers:
 *     ?Release@CRegion@@UEBAJXZ @ 0x1400E4B90 (-Release@CRegion@@UEBAJXZ.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CRegion::SetEmpty(CRegion *this, struct REGION_CORE *a2)
{
  struct SCAN **v2; // rdi
  struct REGION_CORE *v4; // rsi
  struct SCAN *pScan_mut; // rax

  v2 = (struct SCAN **)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v4 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v4 + 8, 2LL);
      (*(void (__fastcall **)(struct SCAN **))(*(_QWORD *)v4 + 152LL))(v2);
      ExReleasePushLockSharedEx((char *)v4 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *v2 )
    {
      if ( qword_1402A10B0 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*((Win32kRS **)this + 2), a2);
      else
        pScan_mut = *v2;
      GreDeleteFastMutex(pScan_mut);
    }
    GreDeleteFastMutex(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
}
