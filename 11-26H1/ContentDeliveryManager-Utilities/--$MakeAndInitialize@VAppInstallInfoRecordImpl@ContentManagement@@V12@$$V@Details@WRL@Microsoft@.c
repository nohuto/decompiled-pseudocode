/*
 * XREFs of ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x1800739C0
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180075170 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029964 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003AC48 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x18004262C (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAAXPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x180043530 (-Attach@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAAXPEAVAppInstal.c)
 *     ?InternalRelease@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180044880 (-InternalRelease@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppInstallInfoRecordImpl,ContentManagement::AppInstallInfoRecordImpl,>(
        volatile int **a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  ContentManagement::AppInstallInfoRecordImpl *v4; // rax
  volatile int *v5; // rdx
  volatile int *v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  volatile int *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v3;
  if ( v3 )
  {
    v4 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl((ContentManagement::AppInstallInfoRecordImpl *)v3);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::Attach((__int64 *)&v10, (volatile int *)v4);
    v6 = v10;
    v11 = 0LL;
    if ( v10 )
    {
      v7 = *((_QWORD *)v10 + 8);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 8, v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_10:
    *a1 = v6;
    Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v10);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v11);
  return v1;
}
