/*
 * XREFs of ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D9E38
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140029460 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D9F90 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitGpuVirtualAddresses(VIDMM_GLOBAL *this, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned int v5; // edi
  VIDMM_GLOBAL *v6; // rdx
  CVirtualAddressAllocator ***v7; // r8
  CVirtualAddressAllocator ***v8; // rcx
  CVirtualAddressAllocator *i; // rbx
  int v10; // eax
  __int64 v11; // rcx
  CVirtualAddressAllocator *v13; // [rsp+50h] [rbp-10h] BYREF
  CVirtualAddressAllocator **v14; // [rsp+58h] [rbp-8h]
  struct VIDMM_ALLOC *v15; // [rsp+80h] [rbp+20h] BYREF

  v14 = &v13;
  v3 = (volatile signed __int32 *)((char *)this + 41216);
  v13 = (CVirtualAddressAllocator *)&v13;
  v5 = 0;
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 41216));
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 5158);
  if ( v6 != (VIDMM_GLOBAL *)((char *)this + 41264) )
  {
    v7 = (CVirtualAddressAllocator ***)v14;
    do
    {
      v8 = (CVirtualAddressAllocator ***)*((_QWORD *)v6 - 2);
      if ( v8 && *((_QWORD *)v6 - 3) != *((_QWORD *)this + 5064) )
      {
        if ( *v7 != &v13 )
          __fastfail(3u);
        v8[1] = (CVirtualAddressAllocator **)v7;
        *v8 = &v13;
        *v7 = (CVirtualAddressAllocator **)v8;
        v7 = v8;
        v14 = (CVirtualAddressAllocator **)v8;
      }
      v6 = *(VIDMM_GLOBAL **)v6;
    }
    while ( v6 != (VIDMM_GLOBAL *)((char *)this + 41264) );
  }
  _InterlockedDecrement(v3 + 4);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  for ( i = v13; i != (CVirtualAddressAllocator *)&v13; i = *(CVirtualAddressAllocator **)i )
  {
    v15 = 0LL;
    v10 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(i, a2, &v15);
    v5 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(1LL, a2, v10);
      WdLogGlobalForLineNumber = 9820;
      DxgkLogInternalTriageEvent(v11, 0x40000LL);
      return v5;
    }
  }
  return v5;
}
