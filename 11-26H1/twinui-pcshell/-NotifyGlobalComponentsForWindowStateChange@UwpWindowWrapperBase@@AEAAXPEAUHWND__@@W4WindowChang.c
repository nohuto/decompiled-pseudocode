/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004BC50
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18004BB0C (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_ @ 0x180438970 (_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_--_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  char v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( (*(_BYTE *)(a1 + 356) & 1) == 0 )
  {
    v12 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_(
           (unsigned int)&v10,
           a1,
           (unsigned int)&v12,
           (unsigned int)&v13,
           (__int64)&v14);
    v6 = *(_DWORD *)(a1 + 544);
    v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v7);
      v8[2] = *(_QWORD *)v5;
      v9 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      v8[3] = v9;
      v8[4] = *(_QWORD *)(v5 + 16);
      *((_DWORD *)v8 + 10) = *(_DWORD *)(v5 + 24);
      *v8 = &off_18070CF08;
    }
    else
    {
      v8 = 0LL;
    }
    SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}
