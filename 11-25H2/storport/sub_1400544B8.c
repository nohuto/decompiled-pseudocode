/*
 * XREFs of sub_1400544B8 @ 0x1400544B8
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_1400544B8(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v6; // r10
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // ecx
  volatile signed __int32 *v11; // rax
  int *v12; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  int *v14; // [rsp+40h] [rbp+8h] BYREF
  int *v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 || !a2 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_1400680F0(off_140168120->AttachedDevice, 78LL, &unk_140149070, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 79LL, &unk_140149070);
    }
    return 3238002696LL;
  }
  sub_1400273F0(a1, &v14, &v15);
  if ( !v14 && !v15 )
  {
    v7 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 1) == 0
      || BYTE1(off_140168120->Timer) < v6 )
    {
      return 3238002694LL;
    }
    v8 = 80LL;
    v9 = a1;
LABEL_35:
    sub_140055C18(v7->AttachedDevice, v8, &unk_140149070, v9);
    return 3238002694LL;
  }
  if ( !*(_QWORD *)a2 || (v10 = **(_DWORD **)a2, v10 != 1094997074) && v10 != 1314275652 )
  {
    v7 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 1) == 0
      || BYTE1(off_140168120->Timer) < v6 )
    {
      return 3238002694LL;
    }
    v8 = 81LL;
    v9 = a2;
    goto LABEL_35;
  }
  _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
  if ( KeCancelTimer((PKTIMER)(a2 + 8)) )
  {
LABEL_21:
    ExFreePoolWithTag((PVOID)a2, 0x54416152u);
    if ( v14 )
      v11 = v14 + 1032;
    else
      v11 = v15 + 271;
    _InterlockedDecrement(v11);
    return 0LL;
  }
  KeRemoveQueueDpc((PRKDPC)(a2 + 72));
  if ( !KeGetCurrentIrql() )
  {
    KeFlushQueuedDpcs();
    goto LABEL_21;
  }
  v12 = v14;
  if ( !v14 )
    v12 = v15;
  WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v12 + 1));
  *(_QWORD *)(a2 + 152) = WorkItem;
  if ( WorkItem )
    IoQueueWorkItem(WorkItem, sub_140075410, DelayedWorkQueue, (PVOID)a2);
  else
    return (unsigned int)-1056964605;
  return v2;
}
