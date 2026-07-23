/*
 * XREFs of WmipUnregisterEtwProvider @ 0x140A09BDC
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x140A0B824 (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 Pool2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  struct _WORK_QUEUE_ITEM *v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(v1 + 152))-- == 1 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = 1;
      WmipReferenceEntry(v1);
      v5 = *(_QWORD *)(v1 + 128);
      if ( v5 )
      {
        v9 = *(_QWORD **)(v5 + 32);
        v10 = v5 + 24;
        if ( *v9 == v10 )
        {
          *v4 = v10;
          v4[1] = v9;
          *v9 = v4;
          *(_QWORD *)(v10 + 8) = v4;
          return;
        }
      }
      else
      {
        v6 = *(_QWORD **)(v1 + 144);
        if ( *v6 == v1 + 136 )
        {
          *v4 = v1 + 136;
          v4[1] = v6;
          *v6 = v4;
          *(_QWORD *)(v1 + 144) = v4;
          v7 = *(_DWORD *)(v1 + 16);
          if ( (v7 & 0x10) == 0 )
          {
            v8 = (struct _WORK_QUEUE_ITEM *)(*(_QWORD *)(v1 + 96) + 24LL);
            *(_DWORD *)(v1 + 16) = v7 | 0x10;
            ExQueueWorkItem(v8, DelayedWorkQueue);
          }
          return;
        }
      }
      __fastfail(3u);
    }
  }
}
