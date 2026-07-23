/*
 * XREFs of WmipLegacyEtwCallback @ 0x140B22440
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall WmipLegacyEtwCallback(__int64 a1, unsigned __int8 a2, _QWORD *a3, ULONG_PTR a4)
{
  int v7; // ebx
  __int64 v8; // rax
  __int64 *v9; // r15
  __int64 *v10; // rax
  int v11; // ecx
  __int64 Pool2; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r12
  __int64 *i; // r14
  __int64 v16; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  ULONG_PTR v19; // rbx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  struct _WORK_QUEUE_ITEM *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rax

  if ( a2 <= 1u )
  {
    v7 = 0;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *(_QWORD *)(a4 + 112) )
    {
      v8 = a2 ? *a3 : 0LL;
      v9 = (__int64 *)(a4 + 56);
      *(_QWORD *)(a4 + 120) = v8;
      v10 = *(__int64 **)(a4 + 56);
      if ( v10 != (__int64 *)(a4 + 56) )
      {
        do
        {
          v11 = *((_DWORD *)v10 + 4);
          if ( (v11 & 0x100000) != 0 && (a2 || (v11 & 0x200000) != 0) )
            ++v7;
          v10 = (__int64 *)*v10;
        }
        while ( v10 != v9 );
        if ( v7 )
        {
          Pool2 = ExAllocatePool2(0x100uLL);
          v13 = (_QWORD *)Pool2;
          if ( Pool2 )
          {
            *(_DWORD *)(Pool2 + 16) = 2;
            v14 = 0LL;
            *(_QWORD *)(Pool2 + 24) = *a3;
            *(_BYTE *)(Pool2 + 36) = a2;
            *(_DWORD *)(Pool2 + 32) = v7;
            for ( i = (__int64 *)*v9; i != v9; i = (__int64 *)*i )
            {
              v18 = *((_DWORD *)i + 4);
              if ( (v18 & 0x100000) != 0 && (a2 || (v18 & 0x200000) != 0) )
              {
                v19 = i[8];
                WmipReferenceEntry(v19);
                v13[v14 + 5] = v19;
                v14 = (unsigned int)(v14 + 1);
                v20 = *((_DWORD *)i + 4);
                if ( a2 )
                  v21 = v20 | 0x200000;
                else
                  v21 = v20 & 0xFFDFFFFF;
                *((_DWORD *)i + 4) = v21;
              }
            }
            WmipReferenceEntry(a4);
            v16 = *(_QWORD *)(a4 + 128);
            if ( v16 )
            {
              v24 = *(_QWORD **)(v16 + 32);
              v25 = v16 + 24;
              if ( *v24 != v25 )
LABEL_19:
                __fastfail(3u);
              *v13 = v25;
              v13[1] = v24;
              *v24 = v13;
              *(_QWORD *)(v25 + 8) = v13;
            }
            else
            {
              v17 = *(_QWORD **)(a4 + 144);
              if ( *v17 != a4 + 136 )
                goto LABEL_19;
              *v13 = a4 + 136;
              v13[1] = v17;
              *v17 = v13;
              *(_QWORD *)(a4 + 144) = v13;
              v22 = *(_DWORD *)(a4 + 16);
              if ( (v22 & 0x10) == 0 )
              {
                v23 = (struct _WORK_QUEUE_ITEM *)(*(_QWORD *)(a4 + 96) + 24LL);
                *(_DWORD *)(a4 + 16) = v22 | 0x10;
                ExQueueWorkItem(v23, DelayedWorkQueue);
              }
            }
          }
        }
      }
    }
    KeReleaseMutex(&WmipSMMutex, 0);
  }
}
