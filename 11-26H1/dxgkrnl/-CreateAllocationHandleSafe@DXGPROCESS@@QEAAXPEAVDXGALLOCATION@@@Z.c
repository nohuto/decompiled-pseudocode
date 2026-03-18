/*
 * XREFs of ?CreateAllocationHandleSafe@DXGPROCESS@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140066330
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x14036DFF0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGPROCESS::CreateAllocationHandleSafe(DXGPROCESS *this, struct DXGALLOCATION *a2)
{
  char *v2; // rsi

  v2 = (char *)this + 248;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 248));
  *((_DWORD *)a2 + 4) = HMGRTABLE::AllocHandle((char *)this + 280, a2, 5LL);
  DxgkReferenceDxgAllocation(a2);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
