/*
 * XREFs of sub_14006C334 @ 0x14006C334
 * Callers:
 *     sub_140079F70 @ 0x140079F70 (sub_140079F70.c)
 *     sub_14007A040 @ 0x14007A040 (sub_14007A040.c)
 *     sub_14007A950 @ 0x14007A950 (sub_14007A950.c)
 *     sub_14007A988 @ 0x14007A988 (sub_14007A988.c)
 *     sub_140127440 @ 0x140127440 (sub_140127440.c)
 *     sub_140127508 @ 0x140127508 (sub_140127508.c)
 *     sub_14012C550 @ 0x14012C550 (sub_14012C550.c)
 *     sub_14012C594 @ 0x14012C594 (sub_14012C594.c)
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_14006B3C4 @ 0x14006B3C4 (sub_14006B3C4.c)
 */

void __fastcall sub_14006C334(struct _DEVICE_OBJECT *a1)
{
  struct _IO_WORKITEM *WorkItem; // r10
  _DWORD *DeviceExtension; // rax
  int v4; // edx
  _QWORD *v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax

  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    DeviceExtension = a1->DeviceExtension;
    v4 = *DeviceExtension;
    if ( *DeviceExtension == 1094997074 )
    {
      v5 = sub_14000BCAC((__int64)a1) + 1436;
LABEL_6:
      v6 = *v5 == (_QWORD)v5;
      goto LABEL_11;
    }
    switch ( v4 )
    {
      case 1431193940:
        v5 = DeviceExtension + 872;
        goto LABEL_6;
      case 1314275652:
        v7 = *((_QWORD *)sub_14006B3A4((__int64)a1) + 20);
        if ( !v7 )
          return;
        v8 = (_QWORD *)(v7 + 144);
        goto LABEL_10;
      case 1314278989:
        v9 = *((_QWORD *)sub_14006B3C4((__int64)a1) + 16);
        if ( v9 )
        {
          v8 = (_QWORD *)(v9 + 104);
LABEL_10:
          v6 = *v8 == (_QWORD)v8;
LABEL_11:
          if ( !v6 )
            IoQueueWorkItem(WorkItem, sub_14006CBC0, CriticalWorkQueue, WorkItem);
        }
        break;
    }
  }
}
