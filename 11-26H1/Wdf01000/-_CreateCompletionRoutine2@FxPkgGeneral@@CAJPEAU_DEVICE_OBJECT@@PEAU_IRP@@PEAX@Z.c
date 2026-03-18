/*
 * XREFs of ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400AB920
 * Callers:
 *     <none>
 * Callees:
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x140035E50 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?PropagatePendingReturned@FxIrp@@QEAAXXZ @ 0x14005FB14 (-PropagatePendingReturned@FxIrp@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine2(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        void *Context)
{
  __int64 v3; // r9
  FxRequest *v4; // r8
  FxIrp irp; // [rsp+38h] [rbp+10h] BYREF

  irp.m_Irp = OriginalIrp;
  FxIrp::PropagatePendingReturned(&irp);
  FxRequest::Complete(v4, *(_DWORD *)(v3 + 48));
  return 3221225494LL;
}
