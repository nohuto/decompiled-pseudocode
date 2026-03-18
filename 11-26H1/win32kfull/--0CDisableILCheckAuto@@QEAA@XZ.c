/*
 * XREFs of ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1401BEF8C
 * Callers:
 *     ValidateHwndIAM @ 0x1401A2C8C (ValidateHwndIAM.c)
 *     UserRecreateRedirectionBitmap @ 0x1402A4470 (UserRecreateRedirectionBitmap.c)
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 *     NtUserSetInteractiveControlFocus @ 0x1402BCDD0 (NtUserSetInteractiveControlFocus.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     <none>
 */

CDisableILCheckAuto *__fastcall CDisableILCheckAuto::CDisableILCheckAuto(CDisableILCheckAuto *this)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdx
  bool v4; // al

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  *(_QWORD *)this = v3;
  v4 = *(_BYTE *)(v3 + 1708) == 1;
  *((_BYTE *)this + 8) = v4;
  if ( v4 )
    *(_BYTE *)(v3 + 1708) = 0;
  return this;
}
