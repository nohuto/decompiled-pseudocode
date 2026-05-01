/*
 * XREFs of ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x18017A15C
 * Callers:
 *     DllGetActivationFactory @ 0x18022B990 (DllGetActivationFactory.c)
 * Callees:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18017A1D4 (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x18017A298 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18017A600 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 */

__int64 __fastcall WINRT_GetActivationFactory(_QWORD *a1, void **a2)
{
  const WCHAR *v3; // rax
  void *activation_factory; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  Microsoft::WRL::Details *v8; // rax
  const WCHAR *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    if ( a1 )
    {
      v3 = (const WCHAR *)a1[2];
      v10 = *((unsigned int *)a1 + 1);
    }
    else
    {
      v3 = &LocaleName;
      v10 = 0LL;
    }
    v9 = v3;
    activation_factory = (void *)winrt_get_activation_factory(&v9);
    *a2 = activation_factory;
    if ( activation_factory )
    {
      result = 0LL;
    }
    else
    {
      v8 = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create(
                                        v6,
                                        v5);
      result = Microsoft::WRL::Details::GetActivationFactory<1>(v8);
    }
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v11);
  }
  return result;
}
