/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180044C18
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180076C08 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x1800E1458 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180045EA8 (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  char v1; // bl
  __int64 v2; // rdi
  _BYTE *v4; // rsi
  STRSAFE_PCNZWCH *v5; // r14
  __int64 v6; // rbp

  v1 = 0;
  v2 = a1;
  if ( !byte_180115898 )
  {
    v4 = byte_180118BF8;
    v5 = (STRSAFE_PCNZWCH *)off_1800EC990;
    v6 = 3LL;
    do
    {
      *v4++ = SLGetHelper(*v5++);
      --v6;
    }
    while ( v6 );
    byte_180115898 = 1;
  }
  if ( (unsigned int)v2 < 3 )
    return byte_180118BF8[v2];
  if ( (int)v2 >= 0 )
    return SLGetHelper(off_1800EC990[v2]);
  return v1;
}
