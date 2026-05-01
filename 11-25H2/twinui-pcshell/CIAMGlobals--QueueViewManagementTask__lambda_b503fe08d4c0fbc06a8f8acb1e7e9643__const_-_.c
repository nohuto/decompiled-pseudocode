/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_b503fe08d4c0fbc06a8f8acb1e7e9643__const_&_ @ 0x1800243F0
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180024644 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_b503fe08d4c0fbc06a8f8acb1e7e9643__const___(
        __int64 a1,
        _QWORD *a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  unsigned int v10; // ebp
  char v12; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h] BYREF

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(CApplicationManagerUtility::g_pIAMGlobals[14].Ptr);
  v5 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*a2);
  v6 = a2[1];
  v7 = (unsigned int)v3[15].Ptr;
  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v8);
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9[2] = 0LL;
    if ( v9 + 2 != (_QWORD *)&v12 )
    {
      v9[2] = Ptr;
      Ptr = 0LL;
    }
    v9[3] = 0LL;
    if ( v9 + 3 != (_QWORD *)&v13 )
    {
      v9[3] = v5;
      v5 = 0LL;
    }
    v9[4] = v6;
    *v9 = &off_1806E2538;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v7);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v10;
}
