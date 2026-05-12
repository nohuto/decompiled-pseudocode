/*
 * XREFs of sub_1401A7A14 @ 0x1401A7A14
 * Callers:
 *     sub_1401A7724 @ 0x1401A7724 (sub_1401A7724.c)
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 */

__int64 __fastcall sub_1401A7A14(PDEVICE_OBJECT DeviceObject)
{
  unsigned int v1; // ebx
  __int64 *v3; // r14
  int v4; // ecx
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  struct _ERESOURCE *v9; // rcx
  _QWORD *v10; // rax
  PIO_WORKITEM WorkItem; // rax

  v1 = 0;
  v3 = 0LL;
  if ( !DeviceObject )
    return (unsigned int)-1073741811;
  v4 = *(_DWORD *)DeviceObject->DeviceExtension;
  if ( v4 == 1094997074 )
  {
    v5 = sub_14000BCAC((__int64)DeviceObject);
    if ( v5 )
    {
      v3 = (__int64 *)(v5 + 1552);
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( v4 == 1314275652 )
  {
    v6 = sub_14006B3A4((__int64)DeviceObject);
    if ( !v6 )
      return (unsigned int)-1073741811;
    v3 = (__int64 *)(v6 + 354);
  }
LABEL_9:
  if ( !*v3 )
  {
    v7 = sub_1400143E0(64LL, 192LL, 1313169746LL, (__int64)DeviceObject);
    v8 = v7;
    if ( v7 )
    {
      *(_BYTE *)v7 &= ~1u;
      v9 = (struct _ERESOURCE *)(v7 + 24);
      *(_BYTE *)(v7 + 1) = 0;
      *(_DWORD *)(v7 + 152) = 0;
      v10 = (_QWORD *)(v7 + 8);
      v10[1] = v10;
      *v10 = v10;
      ExInitializeResourceLite(v9);
      *(_QWORD *)(v8 + 136) = v8 + 128;
      *(_QWORD *)(v8 + 128) = v8 + 128;
      KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 144));
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *(_QWORD *)(v8 + 160) = WorkItem;
      if ( WorkItem )
      {
        KeInitializeEvent((PRKEVENT)(v8 + 168), NotificationEvent, 1u);
        *v3 = v8;
      }
      else
      {
        v1 = -1073741670;
        ExFreePoolWithTag((PVOID)v8, 0x4E456152u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
