/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_798ec8630cdce9ee98b03af562801a4a_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@01@$$QEAV_lambda_798ec8630cdce9ee98b03af562801a4a_@@@Z @ 0x18008DC38
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180090858 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029964 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_798ec8630cdce9ee98b03af562801a4a_@@$0?0PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@PEAUIExtendedExecutionRevokedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_798ec8630cdce9ee98b03af562801a4a_@@@Z @ 0x18008E68C (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEv.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,_lambda_798ec8630cdce9ee98b03af562801a4a_>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  if ( v5 )
  {
    v4 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<IInspectable *,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>>::*)(IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,_lambda_798ec8630cdce9ee98b03af562801a4a_,-1,IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,_lambda_798ec8630cdce9ee98b03af562801a4a_,-1,IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>(
           v5,
           a2);
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  result = a1;
  *a1 = v4;
  return result;
}
