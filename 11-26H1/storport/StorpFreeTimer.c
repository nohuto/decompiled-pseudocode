/*
 * XREFs of StorpFreeTimer @ 0x140059470
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v6; // r10
  int *v7; // rsi
  int *v8; // r14
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ecx
  volatile signed __int32 *v13; // rax
  struct _DEVICE_OBJECT *v14; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  int *v16; // [rsp+50h] [rbp+8h] BYREF
  int *v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v17 = 0LL;
  v16 = 0LL;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 78LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return 3238002696LL;
  }
  RaidpPortGetAdapter(a1, &v17, &v16);
  v7 = v17;
  v8 = v16;
  if ( !v17 && !v16 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < v6 )
    {
      return 3238002694LL;
    }
    v10 = (unsigned int)((_DWORD)v17 + 80);
    v11 = a1;
LABEL_35:
    WPP_SF_q(v9->AttachedDevice, v10, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, v11);
    return 3238002694LL;
  }
  if ( !*(_QWORD *)a2 || (v12 = **(_DWORD **)a2, v12 != 1094997074) && v12 != 1314275652 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < v6 )
    {
      return 3238002694LL;
    }
    v10 = 81LL;
    v11 = a2;
    goto LABEL_35;
  }
  _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
  if ( !KeCancelTimer((PKTIMER)(a2 + 8)) )
  {
    KeRemoveQueueDpc((PRKDPC)(a2 + 72));
    if ( KeGetCurrentIrql() )
    {
      if ( v7 )
        v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)v7 + 1);
      else
        v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)v8 + 1);
      WorkItem = IoAllocateWorkItem(v14);
      *(_QWORD *)(a2 + 152) = WorkItem;
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, StorpFreeTimerWorkItem, DelayedWorkQueue, (PVOID)a2);
      else
        return (unsigned int)-1056964605;
      return v2;
    }
    KeFlushQueuedDpcs();
  }
  ExFreePoolWithTag((PVOID)a2, 0x54416152u);
  v13 = v7 + 1048;
  if ( !v7 )
    v13 = v8 + 275;
  _InterlockedDecrement(v13);
  return 0LL;
}
