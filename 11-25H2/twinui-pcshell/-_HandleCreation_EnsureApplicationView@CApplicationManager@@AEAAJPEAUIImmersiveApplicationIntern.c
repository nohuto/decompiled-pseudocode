/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180084870
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180086190 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802E9770 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180084AB8 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180084ADC (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x1801B9630 (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1802C8538 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x1802CEDD0 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  void (__fastcall *v13)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID v14; // rdi
  __int64 (__fastcall *v15)(PVOID, __int64, struct IApplicationView **); // rbx
  __int64 v16; // rcx
  COperationWaiter *v17; // rcx
  struct IApplicationView *v18; // rcx
  void (__fastcall *v20)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v22)(PVOID, __int64, struct IApplicationView **); // rbx
  __int64 v23; // rcx
  PVOID v24; // rdi
  __int64 (__fastcall *v25)(PVOID, HWND, struct IApplicationView **); // rbx
  _QWORD v26[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationView *v27; // [rsp+60h] [rbp+30h] BYREF
  __int64 v28; // [rsp+68h] [rbp+38h] BYREF
  COperationWaiter *v29; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v27 = 0LL;
  if ( a2 )
  {
    v28 = 0LL;
    v20 = **a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    v20((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v28);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v22 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    v9 = v22(Ptr, v28, &v27);
    v23 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  else
  {
    v7 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v8 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v7 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    v9 = v8(v7, a3, &v27);
  }
  if ( v9 >= 0 )
    goto LABEL_14;
  v29 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v29);
  if ( v9 >= 0 )
  {
    v26[0] = v29;
    winrt::com_ptr<CMultitaskingViewManager>::add_ref(v26, v10, v11);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(v12, v26) >= 0 )
      COperationWaiter::Wait(v29);
    if ( a2 )
    {
      v28 = 0LL;
      v13 = **a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      v13((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v28);
      v14 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v15 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v14 + 56LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      v9 = v15(v14, v28, &v27);
      v16 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    else
    {
      v24 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v25 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v24 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      v9 = v25(v24, a3, &v27);
    }
    Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(v26);
  }
  v17 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v17);
  }
  if ( v9 < 0 )
  {
    v18 = v27;
  }
  else
  {
LABEL_14:
    v18 = 0LL;
    *a4 = v27;
  }
  if ( v18 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v9;
}
