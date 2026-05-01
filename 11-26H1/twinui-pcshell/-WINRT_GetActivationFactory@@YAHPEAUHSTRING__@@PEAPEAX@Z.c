/*
 * XREFs of ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1801693FC
 * Callers:
 *     DllGetActivationFactory @ 0x1801693F0 (DllGetActivationFactory.c)
 * Callees:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016947C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180169540 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1801698B4 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 */

__int64 __fastcall WINRT_GetActivationFactory(_QWORD *a1, void **a2)
{
  void *activation_factory; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  Microsoft::WRL::Details *v7; // rax
  const WCHAR *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    if ( a1 )
    {
      v8 = (const WCHAR *)a1[2];
      v9 = *((unsigned int *)a1 + 1);
    }
    else
    {
      v8 = &pvData;
      v9 = 0LL;
    }
    activation_factory = (void *)winrt_get_activation_factory(&v8);
    *a2 = activation_factory;
    if ( activation_factory )
    {
      result = 0LL;
    }
    else
    {
      v7 = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create(
                                        v5,
                                        v4);
      result = Microsoft::WRL::Details::GetActivationFactory<1>(v7);
    }
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v10);
  }
  return result;
}
