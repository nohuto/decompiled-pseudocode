/*
 * XREFs of ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18014D7E4
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18012AA60 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CChannelContext::IncreasePendingEffectCompilations(CChannelContext *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CComposition::IsCompositionThread(this) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1DA,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v2);
  if ( (*((_DWORD *)this + 34))++ == -1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1DD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v2);
}
