/*
 * XREFs of ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180681E1C
 * Callers:
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801E7318 (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18037C5D0 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 *     ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x180387C90 (-BringToForeground@CStartExperienceManager@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18038B1F0 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1803BF230 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSingleViewShellExperience::BringToForeground(CSingleViewShellExperience *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 3) )
    return 0LL;
  if ( *((_DWORD *)this + 10) != 2 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 72LL))(*((_QWORD *)this + 10));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
