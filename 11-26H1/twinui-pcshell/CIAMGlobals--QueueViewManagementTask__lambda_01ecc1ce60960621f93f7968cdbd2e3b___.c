/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___ @ 0x18004B3A8
 * Callers:
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18004B1B4 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rbp
  PVOID Ptr; // rdi
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // ebp
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  unsigned int v11; // ebp
  char v13; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-30h] BYREF

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(CApplicationManagerUtility::g_pIAMGlobals[14].Ptr);
  v5 = 0LL;
  v6 = 0LL;
  if ( v14 != (_BYTE *)a2 )
  {
    v5 = *a2;
    *a2 = 0LL;
    v6 = v5;
  }
  v7 = *((_DWORD *)a2 + 2);
  v8 = (unsigned int)v3[15].Ptr;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v9);
    v10[2] = 0LL;
    if ( v10 + 2 != (_QWORD *)&v13 )
    {
      v10[2] = Ptr;
      Ptr = 0LL;
    }
    v10[3] = 0LL;
    if ( v10 + 3 != (_QWORD *)v14 )
    {
      v10[3] = v6;
      v5 = 0LL;
    }
    *((_DWORD *)v10 + 8) = v7;
    *v10 = &off_18070CDD8;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, v8);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v11;
}
