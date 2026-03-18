/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N0@Z @ 0x14004502C
 * Callers:
 *     VidSchSyncPriorityDevice @ 0x1401195B0 (VidSchSyncPriorityDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  ((void (__fastcall *)(DXGDEVICE *, __int64, __int64))DxgCoreInterface[9])(this, a2, a3);
}
