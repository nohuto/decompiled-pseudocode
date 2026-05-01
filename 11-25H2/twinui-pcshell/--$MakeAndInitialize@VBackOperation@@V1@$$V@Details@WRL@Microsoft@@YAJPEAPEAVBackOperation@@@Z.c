/*
 * XREFs of ??$MakeAndInitialize@VBackOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBackOperation@@@Z @ 0x180503564
 * Callers:
 *     ?BackOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805036FC (-BackOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180027CC0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BackOperation@@QEAA@XZ @ 0x18050361C (--0BackOperation@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BackOperation,BackOperation,>(BackOperation **a1)
{
  void *v2; // rax
  int inited; // edi
  BackOperation *v4; // rbx
  BackOperation *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v6 = (BackOperation *)v2;
  if ( v2 )
  {
    v4 = BackOperation::BackOperation((BackOperation *)v2);
    v6 = v4;
    v7 = 0LL;
    inited = CObjectWithThreadUseDetection::InitApartmentId((BackOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(BackOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
      inited = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    }
  }
  else
  {
    inited = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return (unsigned int)inited;
}
