/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x1801728FC
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x180173240 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundati.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016FBA0 (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180173780 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180176620 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>::Get(
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
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    v6 = Ptr;
  }
  ReleaseSRWLockShared(v4);
  *a2 = 0LL;
  if ( v6 )
  {
    v8 = Microsoft::WRL::AgileRef::InternalResolve(
           (Microsoft::WRL::AgileRef *)&v13,
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
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
              &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
              a2,
              v7);
      v10 = v12;
    }
    else
    {
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v11;
  }
}
