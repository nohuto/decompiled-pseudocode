/*
 * XREFs of ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801F58A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801F58E8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnMessage(
        CToastCenterExperienceManager *this,
        int a2,
        char *a3,
        unsigned __int16 a4)
{
  char *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v5 = (char *)this - 32;
    if ( a3 == v5 )
    {
      v6 = CToastCenterExperienceManager::OnTargetedMessage(v5, a4);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x24B,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
