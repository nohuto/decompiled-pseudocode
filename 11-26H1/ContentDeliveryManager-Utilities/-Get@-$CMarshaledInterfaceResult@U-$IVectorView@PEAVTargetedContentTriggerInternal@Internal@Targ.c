/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18007D82C
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18007DB70 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180033C58 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007C89C (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800814A0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // r14
  __int64 Ptr; // rbx
  __int64 v6; // rsi
  bool v7; // r9
  unsigned int v8; // ebx
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v4 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=(&v12, &a1[3].Ptr);
  Ptr = (__int64)a1[2].Ptr;
  v6 = 0LL;
  if ( Ptr )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v14 = 0LL;
    v13 = Ptr;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v6 = Ptr;
  }
  ReleaseSRWLockShared(v4);
  *a2 = 0LL;
  if ( v6 )
  {
    v8 = Microsoft::WRL::AgileRef::InternalResolve(
           (Microsoft::WRL::AgileRef *)&v13,
           &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11,
           a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    return v8;
  }
  else
  {
    v10 = v12;
    if ( v12 )
    {
      v11 = CMarshaledInterface::_Unmarshal(
              (CMarshaledInterface *)&v12,
              &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11,
              a2,
              v7);
      v10 = v12;
    }
    else
    {
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v11;
  }
}
