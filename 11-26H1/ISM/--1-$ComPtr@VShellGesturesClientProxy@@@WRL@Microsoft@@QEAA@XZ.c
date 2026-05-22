/*
 * XREFs of ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800982E8
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$2 @ 0x1801D72EC (_DeviceInputHost--DeviceInputHost_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$2 @ 0x1801DBB60 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$3 @ 0x1801DBB80 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$3.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x1801DCDB3 (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$2 @ 0x1801DCDF1 (_Edges--AddOrUpdate_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::~ComPtr<ShellGesturesClientProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(a1);
}
