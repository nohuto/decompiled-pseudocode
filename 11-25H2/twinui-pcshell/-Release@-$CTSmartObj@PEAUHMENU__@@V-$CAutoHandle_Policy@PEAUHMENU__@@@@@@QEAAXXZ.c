/*
 * XREFs of ?Release@?$CTSmartObj@PEAUHMENU__@@V?$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ @ 0x1804C1860
 * Callers:
 *     ??1?$CAutoHandle@PEAUHMENU__@@@@QEAA@XZ @ 0x1804C1128 (--1-$CAutoHandle@PEAUHMENU__@@@@QEAA@XZ.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804C1B74 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ @ 0x1805DE0B0 (-OnSettingChange@CLauncherTipContextMenu@@UEAAJXZ.c)
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
