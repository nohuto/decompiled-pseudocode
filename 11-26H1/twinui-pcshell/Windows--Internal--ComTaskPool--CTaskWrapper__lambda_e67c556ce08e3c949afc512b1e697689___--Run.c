/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e67c556ce08e3c949afc512b1e697689___::Run @ 0x1803A2230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800FAD4C (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e67c556ce08e3c949afc512b1e697689___::Run(
        CortanaAvailability *a1,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1, a2, a3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
