/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180003988
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18000438C (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800873B0 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x1800E560C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005A268 (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  char v1; // bl
  __int64 v2; // rdi
  _BYTE *v4; // rsi
  const unsigned __int16 **v5; // r14
  __int64 v6; // rbp

  v1 = 0;
  v2 = a1;
  if ( !byte_180119810 )
  {
    v4 = byte_18011CC70;
    v5 = (const unsigned __int16 **)off_1800EF0E0;
    v6 = 3LL;
    do
    {
      *v4++ = SLGetHelper(*v5++);
      --v6;
    }
    while ( v6 );
    byte_180119810 = 1;
  }
  if ( (unsigned int)v2 < 3 )
    return byte_18011CC70[v2];
  if ( (int)v2 >= 0 )
    return SLGetHelper(off_1800EF0E0[v2]);
  return v1;
}
