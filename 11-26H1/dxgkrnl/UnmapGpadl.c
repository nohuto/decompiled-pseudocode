/*
 * XREFs of UnmapGpadl @ 0x1402352A0
 * Callers:
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401F6FD4 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1401F7780 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AD80 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall UnmapGpadl(__int64 a1, unsigned int a2, __int64 a3, struct _MDL *a4)
{
  int v4; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 408);
  if ( (v4 & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
LABEL_3:
    v9 = v8 + 160;
    goto LABEL_7;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 592);
    goto LABEL_3;
  }
  v9 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v11, (struct _KTHREAD **)(v9 + 16));
  if ( *(_BYTE *)(v9 + 68) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))qword_140168648)(*(_QWORD *)v9, a2);
    _InterlockedDecrement(&g_VgpuNumGpadlMappings);
    v10 = -a3;
    _InterlockedAdd64(&g_VgpuSizeGpadlMappings, v10);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 72));
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 80), v10);
  }
  else if ( a4 )
  {
    MmFreePagesFromMdl(a4);
    ExFreePoolWithTag(a4, 0);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
