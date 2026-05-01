/*
 * XREFs of ?ExecuteTag@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJXZ @ 0x1804D28B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z @ 0x1804D264C (-AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::ExecuteTag(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( *((_DWORD *)this + 10) != 4095 )
  {
    AdjustSourceRectForNonClientArea(*((HWND *)this + 7), a2, (struct tagRECT *)((char *)this + 72));
    return (unsigned int)DwmpTransitionWindowWithRects(
                           *((_QWORD *)this + 7),
                           *((_DWORD *)this + 10) ^ (*((_DWORD *)this + 11) ^ *((_DWORD *)this + 10)) & 0xFFFFF000,
                           (char *)this + 72,
                           (char *)this + 88,
                           0LL,
                           0LL,
                           0LL);
  }
  return v2;
}
