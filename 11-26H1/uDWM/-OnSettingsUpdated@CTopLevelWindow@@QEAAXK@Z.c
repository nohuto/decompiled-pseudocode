/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800183A8
 * Callers:
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010CF0 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180018EE4 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x1800853A8 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BF@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DEC (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BF@$00@@YA-AVDirtyFlags.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BC@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E14 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BC@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18004E8DC (-OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006F294 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     IsOpenThemeDataPresent @ 0x18008F41C (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  int v3; // edi
  bool v5; // r14
  int v6; // r15d
  int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2 & 9;
  v5 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v6 = a2 & 0x40;
  if ( (unsigned __int8)IsOpenThemeDataPresent() )
    v7 = *(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v10);
  else
    v7 = 0;
  if ( v5 )
  {
    v8 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BC__00__YA_AVDirtyFlags__XZ(&v10);
    CVisual::SetDirtyFlags(this, *v8 | v7);
  }
  if ( v3 )
    CTopLevelWindow::OnWindowScaleUpdated(this);
  if ( v6 )
  {
    v9 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BF__00__YA_AVDirtyFlags__XZ(&v10);
    CVisual::SetDirtyFlags(this, *v9 | v7);
  }
  if ( (a2 & 0x10) != 0 )
    CTopLevelWindow::OnColorizationUpdated(this);
}
