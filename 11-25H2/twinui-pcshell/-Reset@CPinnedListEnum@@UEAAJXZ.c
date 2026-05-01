/*
 * XREFs of ?Reset@CPinnedListEnum@@UEAAJXZ @ 0x18066F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall CPinnedListEnum::Reset(CPinnedListEnum *this)
{
  *((_DWORD *)this + 6) = 0;
  SafeRelease<IShellItemArray>((__int64 *)this + 4);
  return 0LL;
}
