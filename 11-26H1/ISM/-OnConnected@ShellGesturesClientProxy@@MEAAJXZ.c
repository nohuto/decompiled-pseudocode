/*
 * XREFs of ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C220
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C260 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004C8B0 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004D528 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ??$emplace_back@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAAAEAPEAVShellGesturesClientProxy@@AEAPEAV2@@Z @ 0x18009974C (--$emplace_back@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy@@V-$alloc.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnConnected(ShellGesturesClientProxy *this)
{
  __int64 v2; // rcx
  ShellGesturesClientProxy *v4; // [rsp+30h] [rbp+8h] BYREF

  ShellGesturesClientProxy::OnInputSinkDataChanged(this);
  v4 = this;
  std::deque<ShellGesturesClientProxy *>::emplace_back<ShellGesturesClientProxy * &>(v2, &v4);
  ShellGesturesClientProxy::GetDesktop(this);
  ShellGesturesClientProxy::CheckCapability(this);
  return 0LL;
}
