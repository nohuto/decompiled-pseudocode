/*
 * XREFs of ?Release@?$CTSmartObj@PEAUHMENU__@@V?$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ @ 0x1804D3810
 * Callers:
 *     ??1?$CAutoHandle@PEAUHMENU__@@@@QEAA@XZ @ 0x1804D30B8 (--1-$CAutoHandle@PEAUHMENU__@@@@QEAA@XZ.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804D3B34 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ @ 0x180602B90 (-OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release(HMENU *a1)
{
  HMENU v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DestroyMenu(v1);
  return (int)v1;
}
