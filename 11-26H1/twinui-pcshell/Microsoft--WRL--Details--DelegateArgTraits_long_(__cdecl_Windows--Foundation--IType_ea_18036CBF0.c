/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ca4d82d8000fbdd2cd63e8e98e84d882___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x18036CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180057ED4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_ca4d82d8000fbdd2cd63e8e98e84d882_::operator() @ 0x18036B624 (_lambda_ca4d82d8000fbdd2cd63e8e98e84d882_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::___Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ca4d82d8000fbdd2cd63e8e98e84d882___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_ca4d82d8000fbdd2cd63e8e98e84d882_::operator()((CControlCenterExperienceManager **)(a1 + 16), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
