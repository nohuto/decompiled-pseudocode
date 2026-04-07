/*
 * XREFs of ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180085050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180022AEC (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180028B10 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z @ 0x180085110 (--$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLoginTransition::OnAnimationComplete(CLoginTransition *this, int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  CDesktopManager *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 == *((_DWORD *)this + 16) )
  {
    v4 = CLoginTransition::StopAnimation(this);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xD3u, 0LL);
    }
    else
    {
      v5 = CDesktopManager::s_pDesktopManagerInstance;
      *((_DWORD *)this + 16) = -1;
      v6 = CWindowList::DesktopSwitchImmediately(*((CLoginTransition ***)v5 + 53), *((_QWORD *)this + 10));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xD6u, 0LL);
      }
      else
      {
        *((_QWORD *)this + 10) = 0LL;
        *((_DWORD *)this + 18) = -1;
        v12 = 0;
        v8 = wil::wnf_publish_nothrow<unsigned long>(v7, &v12);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDA,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\logintransition.cpp",
            (const char *)(unsigned int)v8,
            v10);
      }
    }
  }
  return v2;
}
