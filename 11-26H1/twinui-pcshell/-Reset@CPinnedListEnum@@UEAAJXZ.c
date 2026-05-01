/*
 * XREFs of ?Reset@CPinnedListEnum@@UEAAJXZ @ 0x180696350
 * Callers:
 *     <none>
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall CPinnedListEnum::Reset(CPinnedListEnum *this)
{
  *((_DWORD *)this + 6) = 0;
  SafeRelease<IShellItemArray>((__int64 *)this + 4);
  return 0LL;
}
