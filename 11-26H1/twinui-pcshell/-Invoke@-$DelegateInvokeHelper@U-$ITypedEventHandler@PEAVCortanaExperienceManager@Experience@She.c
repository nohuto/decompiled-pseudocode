/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@V_lambda_b14f5cbe16285ca16a01583c79688cb8_@@$0?0PEAUICortanaExperienceManager@Experience@Shell@Internal@3@URect@23@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@2345@@Internal@Foundation@Windows@@URect@34@@Foundation@Windows@@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@3@URect@23@@Z@Details@WRL@Microsoft@@UEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@Windows@@@Z @ 0x180461900
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180057ED4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaExperienceManager *>,Windows::Foundation::Rect>::*)(Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Foundation::Rect)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,_lambda_b14f5cbe16285ca16a01583c79688cb8_,-1,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Foundation::Rect>::Invoke(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a3;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(a1 + 24))(
         *(_QWORD *)(a1 + 16) + *(int *)(a1 + 32),
         a2,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
