/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1802417C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x18018F9FC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@wil@@QEAA_NXZ @ 0x1803F462C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@.c)
 */

signed int __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  wil::details *v8; // rcx
  wil::details *v10; // rcx
  signed int LastErrorFailHr; // ebx
  RTL_SRWLOCK *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SetWindowBandViaBroker>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SetWindowBandViaBroker>::GetImpl'::`2'::impl) )
  {
    if ( (unsigned int)SetWindowBand(a2, a3, a4) )
      return 0;
    else
      return wil::details::GetLastErrorFailHr(v8);
  }
  else
  {
    IamAccess::TakeIamAccess(*((_QWORD *)this + 6), v12);
    if ( (unsigned int)SetWindowBand(a2, a3, a4) )
      LastErrorFailHr = 0;
    else
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
    IamAccess::SyncIamAccess::~SyncIamAccess(v12);
    return LastErrorFailHr;
  }
}
