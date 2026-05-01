/*
 * XREFs of ??1CPinnedListEnum@@AEAA@XZ @ 0x18068C240
 * Callers:
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x180695A60 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPinnedListEnum::~CPinnedListEnum(CPinnedListEnum *this)
{
  *(_QWORD *)this = &CPinnedListEnum::`vftable';
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  SafeRelease<IShellItemArray>((__int64 *)this + 4);
}
