/*
 * XREFs of ?NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1402152BC
 * Callers:
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140215220 (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(DXGVIRTUALGPUMANAGER *this, struct DXGPROCESS *a2)
{
  char *v2; // rdi
  _QWORD **v4; // rsi
  _QWORD *v5; // rbx
  struct DXGPROCESS **v6; // rcx

  v2 = (char *)this + 40;
  v4 = (_QWORD **)((char *)this + 104);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER *)((char *)this + 40));
  v5 = *v4;
  while ( v5 != v4 )
  {
    v6 = (struct DXGPROCESS **)(v5 - 15);
    v5 = (_QWORD *)*v5;
    if ( v6[11] == a2 )
      (*((void (__fastcall **)(struct DXGPROCESS **))*v6 + 1))(v6);
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
