/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___::Run @ 0x18034E980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180244B74 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = GamingOverlayExperienceManager::InvokeOverlayDisplayModeEventTask(*(GamingOverlayExperienceManager **)(a1 + 16));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1087,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v1);
}
