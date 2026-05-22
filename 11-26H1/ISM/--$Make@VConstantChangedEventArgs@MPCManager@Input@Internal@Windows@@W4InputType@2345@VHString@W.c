/*
 * XREFs of ??$Make@VConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W4InputType@2345@VHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@5@PEAUIPropertyValue@Foundation@5@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@@12@$$QEAW4InputType@MPCManager@Input@Internal@Windows@@$$QEAVHString@Wrappers@12@$$QEAPEAUIPropertyValue@Foundation@8@2@Z @ 0x18016D474
 * Callers:
 *     ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x1801738E4 (-OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@4@2@Z @ 0x18016EE20 (--0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHStri.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801746C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIConstantChangedE.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::ConstantChangedEventArgs,enum Windows::Internal::Input::MPCManager::InputType,Microsoft::WRL::Wrappers::HString,Windows::Foundation::IPropertyValue *,Windows::Foundation::IPropertyValue *>(
        __int64 *a1,
        _DWORD *a2,
        int a3,
        _QWORD *a4,
        __int64 *a5)
{
  void *v9; // rax
  __int64 v10; // rdi
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v9;
  if ( v9 )
  {
    v10 = Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::ConstantChangedEventArgs(
            (_DWORD)v9,
            *a2,
            a3,
            *a4,
            *a5);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::Release();
    *a1 = v10;
    v12 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v12);
  return a1;
}
