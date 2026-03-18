/*
 * XREFs of ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1403B6204
 * Callers:
 *     ?VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402286E0 (-VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1403B6060 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1403B63D4 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1403B6590 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGPROCESS::NotifyProcessThaw(DXGPROCESS *this)
{
  _QWORD **v2; // rsi
  _QWORD *i; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  DXGGLOBAL *Global; // rax
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  char v12; // [rsp+30h] [rbp-28h]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2096);
  *((_BYTE *)this + 572) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  v2 = (_QWORD **)((char *)this + 320);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 40); i != v2 && i && i != (_QWORD *)24; i = (_QWORD *)*i )
    DXGDEVICE::NotifyProcessThaw((DXGDEVICE *)(i - 3));
  v4 = *v2;
  v5 = 0LL;
  while ( v4 != v2 && v4 && v4 != (_QWORD *)24 )
  {
    v7 = *(v4 - 1);
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 != v5 )
    {
      if ( !*(_BYTE *)(v8 + 209) && *(_QWORD *)(v8 + 3168) && *(_QWORD *)(v8 + 3272) )
        DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v7 + 16));
      v5 = v8;
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(
        Global,
        *(_QWORD *)(v8 + 232),
        *((struct _EPROCESS **)this + 7),
        0);
    }
    v4 = (_QWORD *)*v4;
  }
  *((_QWORD *)this + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
  }
}
