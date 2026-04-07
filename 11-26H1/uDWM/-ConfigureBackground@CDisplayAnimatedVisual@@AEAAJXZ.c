/*
 * XREFs of ?ConfigureBackground@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18004B0EC
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18008CC00 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::ConfigureBackground(CDisplayAnimatedVisual *this)
{
  char v2; // al
  int updated; // eax
  unsigned int v4; // edi
  struct _D3DCOLORVALUE v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CDesktopManager::CheckAnyPreference(0x80u);
  v6.a = 1.0;
  v6.r = (float)(v2 != 0 ? 0xDE : 0) / 255.0;
  v6.b = v6.r;
  v6.g = (float)(v2 != 0 ? 0x90 : 0) / 255.0;
  updated = CSolidRectangleVisual::UpdateColor(this, &v6);
  v4 = updated;
  if ( updated >= 0 )
  {
    CRectangleVisual::SetRect(this, (const struct tagRECT *)((char *)this + 216));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)updated,
      SLODWORD(v6.r));
    return v4;
  }
}
