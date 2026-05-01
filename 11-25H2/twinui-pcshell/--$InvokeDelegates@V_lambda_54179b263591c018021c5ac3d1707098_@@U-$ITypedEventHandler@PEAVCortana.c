/*
 * XREFs of ??$InvokeDelegates@V_lambda_54179b263591c018021c5ac3d1707098_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_54179b263591c018021c5ac3d1707098_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1801CA7D8
 * Callers:
 *     ??$DoInvoke@V_lambda_54179b263591c018021c5ac3d1707098_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_54179b263591c018021c5ac3d1707098_@@@Z @ 0x1801CA72C (--$DoInvoke@V_lambda_54179b263591c018021c5ac3d1707098_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801AF374 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience_ea_1801AF374.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_54179b263591c018021c5ac3d1707098_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(
        _QWORD *a1,
        volatile int *a2,
        __int64 a3)
{
  volatile int *v4; // r9
  _QWORD *v5; // r10
  volatile int *v6; // rbx
  struct IUnknown **v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
    v6 = v4;
  }
  v7 = (struct IUnknown **)*((_QWORD *)v6 + 2);
  if ( v7 != *((struct IUnknown ***)v6 + 3) )
  {
    v8 = (_QWORD *)v5[1];
    v9 = (_QWORD *)*v5;
    do
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD, volatile int *))(*v7)->lpVtbl[1].QueryInterface)(
              *v7,
              *v9,
              *v8,
              v4);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v7);
      }
      ++v7;
    }
    while ( v7 != *((struct IUnknown ***)v6 + 3) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return 0LL;
}
