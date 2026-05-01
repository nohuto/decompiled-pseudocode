/*
 * XREFs of ?OnApplicationViewChanged@BroadcastDVRComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18004B510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18004B878 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BroadcastDVRComponent::OnApplicationViewChanged(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  char v6; // si
  int v7; // eax
  __int64 v8; // rbx
  int (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // r15
  __int64 v10; // r14
  unsigned int v11; // r13d
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  int v14; // r12d
  HWND ForegroundWindow; // r14
  __int64 v17; // rcx
  int (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-28h] BYREF
  char v21; // [rsp+48h] [rbp-18h] BYREF
  char v22; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v24; // [rsp+90h] [rbp+30h] BYREF

  v6 = 0;
  if ( !*(_BYTE *)(a1 + 304) )
    return 0LL;
  if ( a3 )
    goto LABEL_51;
  v20[0] = 0LL;
  v24 = 0;
  v20[1] = a2;
  if ( a2 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
  v19 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*a2)[27])(a2, &v24);
  if ( v24 )
  {
    if ( IsWindowVisible(ForegroundWindow) )
    {
      v18 = **a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      if ( v18(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v19) >= 0
        && (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 24LL))(v19, v20) >= 0
        && ForegroundWindow == (HWND)v20[0] )
      {
        v6 = 1;
      }
    }
  }
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[2])(a2);
  if ( !v6 )
  {
LABEL_51:
    if ( a3 > 9 )
      return 0LL;
    v7 = 644;
    if ( !_bittest(&v7, a3) )
      return 0LL;
  }
  v8 = a1 - 128;
  if ( a1 != 128 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1 - 128);
  if ( a2 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
  v9 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
  if ( a2 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
  v10 = a1 - 128;
  if ( a1 != 128 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1 - 128);
  v11 = *(_DWORD *)(a1 + 112);
  v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>(v12);
    *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v13[2] = 0LL;
    if ( v13 + 2 != (_QWORD *)&v21 )
    {
      v13[2] = a2;
      v9 = 0LL;
    }
    *((_DWORD *)v13 + 6) = a3;
    v13[4] = 0LL;
    if ( v13 + 4 != (_QWORD *)&v22 )
    {
      v13[4] = v8;
      v10 = 0LL;
    }
    *v13 = &off_18070CD60;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = SHTaskPoolQueueTask(3LL, 2LL, v11);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5E,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v14);
  if ( a2 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[2])(a2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v14;
}
