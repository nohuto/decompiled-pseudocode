/*
 * XREFs of ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1802879F4
 * Callers:
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800BA8C4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180144D00 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024A340 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x180469EBC (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetInputAppState(__int64 a1)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int v3; // ebx

  v1 = (RTL_SRWLOCK *)(a1 + 576);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 576));
  v3 = *(_DWORD *)(a1 + 564);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
