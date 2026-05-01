/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F0E88
 * Callers:
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800EF554 (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18041C2D0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_379fb6251cfae0942258739af0295e77___ @ 0x1800F0F68 (Windows--Internal--ComTaskPool--QueueTask__lambda_379fb6251cfae0942258739af0295e77___.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800F0FF8 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x18028E620 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 *     _lambda_379fb6251cfae0942258739af0295e77_::_lambda_379fb6251cfae0942258739af0295e77_ @ 0x1804251C8 (_lambda_379fb6251cfae0942258739af0295e77_--_lambda_379fb6251cfae0942258739af0295e77_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-30h]
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0LL;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v4 || !std::_Ref_count_base::_Incref_nz(v4) )
    std::_Throw_bad_weak_ptr();
  v9 = *(_QWORD *)this;
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  v10 = v5;
  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = ((__int64 (__fastcall *)(_BYTE *, ConnectedStandbyHelper *, __int64 *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))lambda_379fb6251cfae0942258739af0295e77_::_lambda_379fb6251cfae0942258739af0295e77_)(
         v11,
         this,
         &v9,
         &v14);
  Windows::Internal::ComTaskPool::QueueTask__lambda_379fb6251cfae0942258739af0295e77___(
    v8,
    v7,
    *((unsigned int *)this + 4),
    v6,
    v9,
    v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
