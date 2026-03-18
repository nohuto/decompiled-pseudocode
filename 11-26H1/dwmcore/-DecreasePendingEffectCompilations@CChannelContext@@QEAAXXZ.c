/*
 * XREFs of ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18010B84C
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18010B8AC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18012AA60 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CChannelContext::DecreasePendingEffectCompilations(CChannelContext *this)
{
  const char *v2; // r9
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CComposition::IsCompositionThread(this) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E3,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v2);
  v3 = *((_DWORD *)this + 34);
  if ( !v3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v2);
  *((_DWORD *)this + 34) = v3 - 1;
}
