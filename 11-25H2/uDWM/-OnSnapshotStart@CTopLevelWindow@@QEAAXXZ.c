/*
 * XREFs of ?OnSnapshotStart@CTopLevelWindow@@QEAAXXZ @ 0x1800552E8
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18005519C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnSnapshotStart(CTopLevelWindow *this)
{
  *((_BYTE *)this + 201) |= 0x80u;
}
