/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18010D834
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180060540 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802E3570 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x18010DA98 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x18010DABC (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x18010DB80 (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1802BFC48 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x1802C6290 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::_HandleCreation_EnsureApplicationView(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        HWND a3,
        struct IApplicationView **a4)
{
  PVOID v7; // rdi
  __int64 (__fastcall *v8)(PVOID, HWND, struct IApplicationView **); // rbx
  int v9; // ebx
  __int64 v10; // rcx
  void (__fastcall *v11)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID v12; // rdi
  __int64 (__fastcall *v13)(PVOID, __int64, struct IApplicationView **); // rbx
  __int64 v14; // rcx
  COperationWaiter *v15; // rcx
  struct IApplicationView *v16; // rcx
  void (__fastcall *v18)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v20)(PVOID, __int64, struct IApplicationView **); // rbx
  __int64 v21; // rcx
  PVOID v22; // rdi
  __int64 (__fastcall *v23)(PVOID, HWND, struct IApplicationView **); // rbx
  _QWORD v24[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationView *v25; // [rsp+60h] [rbp+30h] BYREF
  __int64 v26; // [rsp+68h] [rbp+38h] BYREF
  COperationWaiter *v27; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    v26 = 0LL;
    v18 = **a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    v18((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v26);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v20 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    v9 = v20(Ptr, v26, &v25);
    v21 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    v7 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v8 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v7 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    v9 = v8(v7, a3, &v25);
  }
  if ( v9 >= 0 )
    goto LABEL_14;
  v27 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v27);
  if ( v9 >= 0 )
  {
    v24[0] = v27;
    winrt::com_ptr<CMultitaskingViewManager>::add_ref(v24);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(v10, v24) >= 0 )
      COperationWaiter::Wait(v27);
    if ( a2 )
    {
      v26 = 0LL;
      v11 = **a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      v11((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v26);
      v12 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v13 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v12 + 56LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
      v9 = v13(v12, v26, &v25);
      v14 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    else
    {
      v22 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v23 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v22 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
      v9 = v23(v22, a3, &v25);
    }
    Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(v24);
  }
  v15 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v15);
  }
  if ( v9 < 0 )
  {
    v16 = v25;
  }
  else
  {
LABEL_14:
    v16 = 0LL;
    *a4 = v25;
  }
  if ( v16 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v9;
}
