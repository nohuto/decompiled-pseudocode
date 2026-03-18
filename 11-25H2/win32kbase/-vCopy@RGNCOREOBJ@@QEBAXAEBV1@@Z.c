/*
 * XREFs of ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1400131B0
 * Callers:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x14000DDA0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017D7A8 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C4560 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 * Callees:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall RGNCOREOBJ::vCopy(Win32kRS **this, REGION_CORE **a2)
{
  struct REGION_CORE *v2; // r15
  REGION_CORE *v5; // rsi
  Win32kRS *v6; // rbp
  __int64 v7; // rdi
  Win32kRS *v8; // rbx
  unsigned int sizeScan; // eax
  struct REGION_CORE *v10; // rdx
  unsigned __int64 v11; // rcx
  bool v12; // zf
  struct SCAN *pScan_mut; // rsi
  struct SCAN *v14; // rbx
  unsigned int v15; // eax

  v2 = qword_1402A10B0;
  if ( qword_1402A10B0 )
  {
    v5 = *a2;
    v6 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    v7 = *(_QWORD *)v2;
    (*(void (__fastcall **)(Win32kRS *, REGION_CORE *))(*(_QWORD *)v2 + 88LL))(v6, v5);
    if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v7 + 216))(v6) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v6, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx((char *)v2 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v8 = *this;
    if ( *this != *a2 )
    {
      sizeScan = REGION_CORE::get_sizeScan(*a2);
      if ( qword_1402A10B0 )
      {
        Win32kRS::RegionCore_set_sizeScan(v8, (struct REGION_CORE *)sizeScan);
      }
      else
      {
        v11 = *((_QWORD *)v8 + 1);
        *((_QWORD *)v8 + 2) = sizeScan;
        if ( v11 < sizeScan )
        {
          *((_QWORD *)v8 + 2) = v11;
          RustOnZeroSizedScanCallback();
        }
      }
      v12 = qword_1402A10B0 == 0LL;
      *((_DWORD *)*this + 6) = *((_DWORD *)*a2 + 6);
      *(_OWORD *)((char *)*this + 28) = *(_OWORD *)((char *)*a2 + 28);
      if ( v12 )
        pScan_mut = *(struct SCAN **)*a2;
      else
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*a2, v10);
      if ( qword_1402A10B0 )
        v14 = Win32kRS::RegionCore_get_pScan_mut(*this, v10);
      else
        v14 = *(struct SCAN **)*this;
      v15 = REGION_CORE::get_sizeScan(*a2);
      memmove(v14, pScan_mut, v15);
    }
  }
}
