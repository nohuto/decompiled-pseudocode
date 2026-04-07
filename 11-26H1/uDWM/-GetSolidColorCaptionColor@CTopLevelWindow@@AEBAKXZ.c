/*
 * XREFs of ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB94
 * Callers:
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB14 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x1800201E0 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180020300 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18004BC24 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 */

__int64 __fastcall CTopLevelWindow::GetSolidColorCaptionColor(CTopLevelWindow *this)
{
  unsigned int v1; // r10d
  unsigned int *v2; // rcx
  unsigned int v3; // ebx
  int v4; // r10d
  CDesktopManager *v5; // rdi
  __int64 v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(*((_QWORD *)this + 87) + 192LL);
  if ( v1 > 1 )
    return v1;
  CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, (int *)&v8);
  v3 = v8 | 8;
  if ( v4 == 1 )
    v3 = v8 | 0x108;
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  CTopLevelWindow::ChooseWindowFrame((CTopLevelWindow *)v2, v2[142], 1);
  v8 = 0;
  CDesktopManager::GetEffectiveWindowColorizationColor(v5, v6, v3, &v8);
  return v8;
}
