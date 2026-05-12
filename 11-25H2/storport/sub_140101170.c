/*
 * XREFs of sub_140101170 @ 0x140101170
 * Callers:
 *     sub_140107670 @ 0x140107670 (sub_140107670.c)
 * Callees:
 *     sub_1400F98F8 @ 0x1400F98F8 (sub_1400F98F8.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 */

__int64 __fastcall sub_140101170(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  PIO_WORKITEM WorkItem; // rax

  v4 = 0;
  v5 = sub_1401225EC(*(_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 616) = v5;
  if ( v5 && (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8)), (*(_QWORD *)(a1 + 632) = WorkItem) != 0LL) )
  {
    *(_WORD *)(a1 + 640) = 0;
    *(_QWORD *)(a1 + 624) = a2;
    *(_BYTE *)(a1 + 642) = 0;
  }
  else
  {
    v4 = -1073741670;
    sub_1400F98F8(a1);
  }
  return v4;
}
