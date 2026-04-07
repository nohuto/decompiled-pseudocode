/*
 * XREFs of ?ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ @ 0x1800201B0
 * Callers:
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x180020190 (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18004E904 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlassColorizationParameters::ResetToDefaults(CGlassColorizationParameters *this)
{
  *(_DWORD *)this = -12542210;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 27LL;
  *((_DWORD *)this + 4) = 73;
  *(_QWORD *)((char *)this + 20) = 1LL;
}
