/*
 * XREFs of PfpFlushEventBuffers @ 0x140A05AD0
 * Callers:
 *     PfpFlushBuffers @ 0x140A05BE0 (PfpFlushBuffers.c)
 * Callees:
 *     PfTFullEventListAdd @ 0x1404AC31C (PfTFullEventListAdd.c)
 *     PfFbBufferListFlushStandby @ 0x1404AC388 (PfFbBufferListFlushStandby.c)
 *     PfFbBufferListInsertInFree @ 0x1404AC4DC (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PfpCopyEvent @ 0x140A06640 (PfpCopyEvent.c)
 */

__int64 __fastcall PfpFlushEventBuffers(union _SLIST_HEADER *a1)
{
  _SLIST_ENTRY *v1; // r13
  struct _SLIST_ENTRY *v3; // rbx
  int v4; // esi
  PSLIST_ENTRY i; // rdx
  struct _SLIST_ENTRY *v6; // rcx
  struct _SLIST_ENTRY *v7; // r15
  struct _SLIST_ENTRY *v8; // rdi
  struct _SLIST_ENTRY *v9; // r14
  int Next; // r8d
  struct _SLIST_ENTRY *v12; // rdx

  v1 = (_SLIST_ENTRY *)&a1[26];
  v3 = 0LL;
  v4 = 0;
  PfFbBufferListFlushStandby((__int64)a1, (__int64)&a1[26]);
  for ( i = RtlpInterlockedFlushSList(a1 + 34); i; v3 = v6 )
  {
    v6 = i;
    i = i->Next;
    v6->Next = v3;
  }
  while ( v3 )
  {
    v7 = v3;
    v8 = v3;
    v3 = v3->Next;
    v9 = v7 + 3;
    if ( *((_DWORD *)&v7[2].Next + 2) )
    {
      do
      {
        v4 = PfpCopyEvent(a1, v9);
        if ( v4 < 0 )
          break;
        v9 += (LODWORD(v9->Next) >> 2) & 0x3FF;
      }
      while ( (*((_DWORD *)&v8[2].Next + 2))-- != 1 );
    }
    Next = (int)v7[2].Next;
    if ( v4 < 0 )
    {
      memmove(&v8[3], v9, (unsigned int)(Next - (_DWORD)v9));
      v12 = v8;
      while ( 1 )
      {
        PfTFullEventListAdd((__int64)a1, v12);
        if ( !v3 )
          break;
        v12 = v3;
        v3 = v3->Next;
      }
      return (unsigned int)v4;
    }
    PfFbBufferListInsertInFree(v1, v8, Next - (_DWORD)v8, *((_DWORD *)&v8[2].Next + 3), 1);
  }
  return (unsigned int)v4;
}
