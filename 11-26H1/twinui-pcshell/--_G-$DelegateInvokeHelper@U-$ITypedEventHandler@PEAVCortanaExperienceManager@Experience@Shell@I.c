/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@V_lambda_b14f5cbe16285ca16a01583c79688cb8_@@$0?0PEAUICortanaExperienceManager@Experience@Shell@Internal@3@URect@23@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@2345@@Internal@Foundation@Windows@@URect@34@@Foundation@Windows@@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@3@URect@23@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180231040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaExperienceManager *>,Windows::Foundation::Rect>::*)(Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Foundation::Rect)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,_lambda_b14f5cbe16285ca16a01583c79688cb8_,-1,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Foundation::Rect>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
