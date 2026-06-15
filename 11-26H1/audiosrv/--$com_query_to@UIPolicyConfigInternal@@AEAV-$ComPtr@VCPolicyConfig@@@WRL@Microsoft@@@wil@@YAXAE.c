/*
 * XREFs of ??$com_query_to@UIPolicyConfigInternal@@AEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@PEAPEAUIPolicyConfigInternal@@@Z @ 0x1800D6C88
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DBBD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_query_to<IPolicyConfigInternal,Microsoft::WRL::ComPtr<CPolicyConfig> &>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (**(__int64 (__fastcall ***)(CPolicyConfig *, GUID *, __int64))g_PolicyConfig)(
             g_PolicyConfig,
             &GUID_4a33ea62_d512_48c0_a726_eb2893da4d34,
             a2);
  if ( (int)result < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x552,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)result,
      v3);
  return result;
}
