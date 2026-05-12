/*
 * XREFs of sub_1400F98F8 @ 0x1400F98F8
 * Callers:
 *     sub_140101170 @ 0x140101170 (sub_140101170.c)
 *     sub_140107670 @ 0x140107670 (sub_140107670.c)
 *     sub_140107CC0 @ 0x140107CC0 (sub_140107CC0.c)
 * Callees:
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

void __fastcall sub_1400F98F8(__int64 a1)
{
  struct _IO_WORKITEM *v2; // rcx
  __int64 v3; // rdx

  v2 = *(struct _IO_WORKITEM **)(a1 + 632);
  if ( v2 )
  {
    IoFreeWorkItem(v2);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 616);
  if ( v3 )
  {
    sub_140122C20(*(_QWORD *)(a1 + 16), v3);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_DWORD *)(a1 + 644) = 0;
  *(_BYTE *)(a1 + 642) = 0;
}
