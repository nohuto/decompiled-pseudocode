/*
 * XREFs of ?DisplaySettingsChange@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802EFD70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowManager::DisplaySettingsChange(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rax
  RTL_SRWLOCK *v6; // rcx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x20) != 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = *a2;
    v8 = 0;
    (*(void (__fastcall **)(__int64 *, int *))(v5 + 48))(a2, &v8);
    v6 = CApplicationManagerUtility::g_pIAMGlobals;
    *(_BYTE *)(a1 + 97) = v8 != 0;
    ReleaseSRWLockExclusive(v6);
  }
  return 0LL;
}
