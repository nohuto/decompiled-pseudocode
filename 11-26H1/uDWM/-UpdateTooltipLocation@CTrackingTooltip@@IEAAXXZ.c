/*
 * XREFs of ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x1800CDFA4
 * Callers:
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800CDE64 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800CDEE4 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTrackingTooltip::UpdateTooltipLocation(HWND *this)
{
  SendMessageW(
    this[1],
    0x412u,
    0LL,
    (unsigned __int16)(*((_DWORD *)this + 8) - (*((_DWORD *)this + 6) - *((_DWORD *)this + 4)) / 2) | ((unsigned __int16)(*((_DWORD *)this + 9) - (*((_DWORD *)this + 7) - *((_DWORD *)this + 5)) / 2) << 16));
}
