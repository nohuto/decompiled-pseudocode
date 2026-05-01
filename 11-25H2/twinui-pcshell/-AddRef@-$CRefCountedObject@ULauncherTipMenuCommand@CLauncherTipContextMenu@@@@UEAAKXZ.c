/*
 * XREFs of ?AddRef@?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@UEAAKXZ @ 0x1802280B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
}
