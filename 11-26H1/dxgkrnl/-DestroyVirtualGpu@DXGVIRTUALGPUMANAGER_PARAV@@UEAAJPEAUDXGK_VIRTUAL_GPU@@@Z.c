/*
 * XREFs of ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x14021C400
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1403B17AC (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::DestroyVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct DXGK_VIRTUAL_GPU *a2)
{
  struct _KTHREAD *v2; // r8
  __int64 v5; // rbp
  struct DXGK_VIRTUAL_GPU **v6; // rcx
  struct DXGK_VIRTUAL_GPU **v7; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v2 = (struct _KTHREAD *)*((_QWORD *)this + 6);
  v10 = (char *)this + 40;
  v11 = 0;
  if ( v2 != KeGetCurrentThread() )
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v9);
  v5 = *((unsigned int *)a2 + 6);
  --*((_DWORD *)this + 4);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_PARAV *)((char *)this + 72));
  v6 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 15);
  if ( v6[1] != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 120)
    || (v7 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 16), *v7 != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 120)) )
  {
    __fastfail(3u);
  }
  *v7 = (struct DXGK_VIRTUAL_GPU *)v6;
  v6[1] = (struct DXGK_VIRTUAL_GPU *)v7;
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 8LL))(a2);
  DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(a2);
  *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v5) = 0LL;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  return 0LL;
}
