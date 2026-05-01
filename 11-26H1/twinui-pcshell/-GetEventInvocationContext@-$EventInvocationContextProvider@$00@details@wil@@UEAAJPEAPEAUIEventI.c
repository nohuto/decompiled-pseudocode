/*
 * XREFs of ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x180403690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18018F20C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??$AsWeak@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@YAJPEAVICortanaWNFNotification@Cortana@TwinUI@@PEAVWeakRef@01@@Z @ 0x1803D7C14 (--$AsWeak@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@YAJPEAVICortanaWNFNotificatio.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@@012@@Z @ 0x180400560 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationCo_ea_180400560.c)
 */

__int64 __fastcall wil::details::EventInvocationContextProvider<1>::GetEventInvocationContext(
        RTL_SRWLOCK *a1,
        struct IInspectable **a2)
{
  Microsoft::WRL::WeakRef *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IInspectable *v7; // rax
  __int64 *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IInspectable *v11; // [rsp+40h] [rbp+20h] BYREF
  Microsoft::WRL::WeakRef *v12; // [rsp+48h] [rbp+28h] BYREF
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v3 = (Microsoft::WRL::WeakRef *)&a1[9];
  wil::AcquireSRWLockExclusive(&v13, a1 + 8);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  v4 = Microsoft::WRL::WeakRef::InternalResolve(v3, &GUID_da6f771e_d39d_405e_aa6c_1a3cccb72a39, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v11;
    if ( !v11 )
    {
      v4 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>((__int64 *)&v11);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 517LL;
        goto LABEL_6;
      }
      v12 = v3;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v12);
      v4 = Microsoft::WRL::AsWeak<TwinUI::Cortana::ICortanaWNFNotification>(v11, v8);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 518LL;
        goto LABEL_6;
      }
      v7 = v11;
    }
    v11 = 0LL;
    v5 = 0;
    *a2 = v7;
    goto LABEL_11;
  }
  v6 = 514LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
    (const char *)(unsigned int)v4);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  return v5;
}
