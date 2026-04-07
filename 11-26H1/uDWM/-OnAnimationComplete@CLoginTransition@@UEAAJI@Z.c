/*
 * XREFs of ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180074060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180037ECC (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180074130 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z @ 0x1800742B8 (--$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLoginTransition::OnAnimationComplete(CLoginTransition *this, int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  CDesktopManager *v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+48h] [rbp+10h] BYREF

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
      v6 = *((_QWORD *)this + 10);
      *((_DWORD *)this + 16) = -1;
      v7 = CWindowList::DesktopSwitchImmediately(*((CWindowList **)v5 + 53), v6);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xD6u, 0LL);
      }
      else
      {
        *((_QWORD *)this + 10) = 0LL;
        *((_DWORD *)this + 18) = -1;
        v13 = 0;
        v9 = wil::wnf_publish_nothrow<unsigned long>(v8, &v13);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDA,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\logintransition.cpp",
            (const char *)(unsigned int)v9,
            v11);
      }
    }
  }
  return v2;
}
