/*
 * XREFs of ?OnSnapshotStart@CTopLevelWindow@@QEAAXXZ @ 0x18003464C
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003457C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnSnapshotStart(CTopLevelWindow *this)
{
  *((_BYTE *)this + 185) |= 0x40u;
}
