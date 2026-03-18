/*
 * XREFs of ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x140211EDC
 * Callers:
 *     NtSetCursorInputSpace @ 0x1401E1A70 (NtSetCursorInputSpace.c)
 * Callees:
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14008EF74 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 */

__int64 __fastcall CInputConfig::BindMouse(struct _LUID *this, struct _LUID a2, int a3)
{
  struct _LUID v3; // rbx
  __int64 UserSessionState; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax

  v3 = a2;
  UserSessionState = W32GetUserSessionState((_DWORD)this, a2.LowPart, a3);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18688));
  this[2] = v3;
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig::CMouseConfig *)&this[2], v6, v7);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  v3.LowPart = BYTE1(this[188].LowPart) != 0;
  v11 = W32GetUserSessionState(v9, v8, v10);
  CCursorClip::OnDisplayStateChange(*(_QWORD *)(v11 + 36272), v3.LowPart);
  return 0LL;
}
