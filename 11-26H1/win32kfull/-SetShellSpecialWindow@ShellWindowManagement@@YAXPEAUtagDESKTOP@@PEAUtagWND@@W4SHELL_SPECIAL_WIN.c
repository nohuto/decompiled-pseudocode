/*
 * XREFs of ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x140296D60
 * Callers:
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1401C0B30 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserSetShellSpecialWindow @ 0x1402BDD00 (NtUserSetShellSpecialWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall ShellWindowManagement::SetShellSpecialWindow(__int64 a1, const struct tagWND *a2, int a3)
{
  tagUNIQUE_WINDOW_HANDLE *v3; // rcx
  __int64 v4; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v3 = (tagUNIQUE_WINDOW_HANDLE *)(a1 + 344);
      if ( a2 )
        tagUNIQUE_WINDOW_HANDLE::Set(v3, a2);
      else
        tagUNIQUE_WINDOW_HANDLE::Clear(v3);
    }
  }
  else
  {
    v4 = a1 + 296;
    if ( a2 )
    {
      v5[0] = v4;
      v5[1] = a2;
      HMAssignmentLock(v5, 0LL);
    }
    else
    {
      HMAssignmentUnlock(v4);
    }
  }
}
