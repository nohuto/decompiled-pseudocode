/*
 * XREFs of ??$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_721e5e573830a3eafdff38e0e874721f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180368F10
 * Callers:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@Z @ 0x180368C1C (--$InvokeAll@PEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@-$EventSource@U-$ITy.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180050814 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience_ea_180050814.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18005205C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_721e5e573830a3eafdff38e0e874721f_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>(
        _QWORD *a1,
        __int64 a2,
        RTL_SRWLOCK *a3,
        __int64 a4)
{
  __int64 v6; // rbx
  struct IUnknown **v7; // rdi
  _QWORD *v8; // r14
  __int128 *v9; // r15
  struct IUnknown *v10; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v12; // eax
  int v13; // esi
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a2, (__int64)a3, a4);
  v6 = v16;
  v7 = *(struct IUnknown ***)(v16 + 16);
  if ( v7 != *(struct IUnknown ***)(v16 + 24) )
  {
    v8 = (_QWORD *)*a1;
    v9 = (__int128 *)a1[1];
    do
    {
      v10 = *v7;
      lpVtbl = (*v7)->lpVtbl;
      v15 = *v9;
      v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int128 *))lpVtbl[1].QueryInterface)(v10, *v8, &v15);
      v13 = v12;
      if ( v12 < 0 )
      {
        RoTransformError((unsigned int)v12, 0LL, 0LL);
        if ( v13 == -2147417848 || v13 == -2147023174 || v13 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v7);
      }
      ++v7;
    }
    while ( v7 != *(struct IUnknown ***)(v6 + 24) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  return 0LL;
}
