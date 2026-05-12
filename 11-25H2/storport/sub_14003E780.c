/*
 * XREFs of sub_14003E780 @ 0x14003E780
 * Callers:
 *     sub_140042038 @ 0x140042038 (sub_140042038.c)
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_140051C30 @ 0x140051C30 (sub_140051C30.c)
 *     sub_140054228 @ 0x140054228 (sub_140054228.c)
 *     sub_1400AE820 @ 0x1400AE820 (sub_1400AE820.c)
 *     sub_1400B86BC @ 0x1400B86BC (sub_1400B86BC.c)
 *     sub_1400B931C @ 0x1400B931C (sub_1400B931C.c)
 *     sub_1400B9F7C @ 0x1400B9F7C (sub_1400B9F7C.c)
 */

void __fastcall sub_14003E780(__int64 a1, __int16 a2)
{
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v5; // rsi
  PIO_WORKITEM v6; // rax
  struct _IO_WORKITEM *v7; // rsi

  if ( (a2 & 4) != 0 )
    sub_140051C30();
  if ( (a2 & 0x10) != 0 )
    sub_1400B931C(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 3368) == 1 )
    sub_1400B9F7C(a1);
  if ( (a2 & 8) != 0 )
    sub_1400B86BC(a1);
  if ( (a2 & 0x80u) != 0 )
  {
    if ( (unsigned __int8)sub_1400AE820(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)sub_1400066C0(a1, (__int64)WorkItem, 0) < 0 )
          IoFreeWorkItem(v5);
        else
          IoQueueWorkItem(v5, (PIO_WORKITEM_ROUTINE)sub_14003B440, NormalWorkQueue, v5);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    sub_140054228(a1);
  if ( (a2 & 0x100) != 0 )
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( *(_DWORD *)(a1 + 56) == 1 && *(_DWORD *)(a1 + 3432) == 17 )
      {
        v6 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        v7 = v6;
        if ( v6 )
        {
          if ( (int)sub_1400066C0(a1, (__int64)v6, 0) < 0 )
            IoFreeWorkItem(v7);
          else
            IoQueueWorkItem(v7, sub_1400AEEE0, NormalWorkQueue, v7);
        }
      }
    }
  }
  if ( (a2 & 0x30) != 0 )
  {
    *(_DWORD *)(a1 + 2264) = 0;
    *(_DWORD *)(a1 + 1400) = 0;
  }
}
