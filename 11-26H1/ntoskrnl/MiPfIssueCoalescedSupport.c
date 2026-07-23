/*
 * XREFs of MiPfIssueCoalescedSupport @ 0x1404C5220
 * Callers:
 *     MiPfIssueCoalesceCandidates @ 0x1403A1CC0 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiInitializeInPageSupport @ 0x140398FF0 (MiInitializeInPageSupport.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

struct _LIST_ENTRY *__fastcall MiPfIssueCoalescedSupport(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rbx
  struct _LIST_ENTRY *v6; // rbp
  struct _LIST_ENTRY *v7; // r13
  int v8; // eax
  int v9; // r12d
  struct _FILE_OBJECT *v10; // r15
  _QWORD *v11; // rsi
  __int64 v12; // rax
  struct _LIST_ENTRY *Blink; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // r8
  size_t v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  result = (struct _LIST_ENTRY *)ExAllocatePoolMm(
                                   64LL,
                                   8 * (a2 >> 12) + 320,
                                   1933797709,
                                   KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v5 = 0LL;
  v6 = result;
  if ( result )
  {
    MiInitializeInPageSupport(result, 0, 0LL);
    v7 = v6 + 20;
    v8 = HIDWORD(v6[11].Blink) | 0x1000000;
    v19 = 0LL;
    HIDWORD(v6[11].Blink) = v8;
    v9 = 0;
    v6[17].Flink = 0LL;
    WORD1(v6[17].Blink) = 0;
    LOWORD(v6[17].Blink) = 8 * (((unsigned __int64)(v2 + 4095) >> 12) + 6);
    v6[19].Flink = 0LL;
    HIDWORD(v6[19].Blink) = 0;
    LODWORD(v6[19].Blink) = v2;
    WORD1(v6[17].Blink) |= 0x4042u;
    v10 = (struct _FILE_OBJECT *)MmBadPointer;
    while ( 1 )
    {
      v11 = (_QWORD *)*a1;
      if ( (_QWORD *)*a1 == a1 )
        break;
      v12 = *v11;
      if ( (_QWORD *)v11[1] != a1
        || *(_QWORD **)(v12 + 8) != v11
        || (*a1 = v12, *(_QWORD *)(v12 + 8) = a1, Blink = v6[1].Blink, Blink->Flink != &v6[1]) )
      {
        __fastfail(3u);
      }
      *v11 = v6 + 1;
      v11[1] = Blink;
      Blink->Flink = (struct _LIST_ENTRY *)v11;
      v6[1].Blink = (struct _LIST_ENTRY *)v11;
      if ( !_bittest16((const signed __int16 *)v11 + 141, 0xEu) )
        WORD1(v6[17].Blink) &= ~0x4000u;
      if ( v9 )
      {
        if ( v5 != v11[12] )
        {
          WORD1(v6[17].Blink) &= ~0x4000u;
          v15 = (unsigned int)(*((_DWORD *)v11 + 24) - v5);
          v5 += v15;
          v9 += v15;
          memset64(v7, qword_140E36178, (unsigned __int64)(8 * ((unsigned int)v15 >> 12)) >> 3);
          v7 = (struct _LIST_ENTRY *)((char *)v7 + 8 * ((unsigned __int64)(8 * ((unsigned int)v15 >> 12)) >> 3));
        }
      }
      else
      {
        v5 = v11[12];
        v18 = *((_DWORD *)v11 + 47);
        v19 = v5;
        if ( (v18 & 0x400000) != 0 )
          v10 = *(struct _FILE_OBJECT **)(v11[24] + 24LL);
        else
          v10 = (struct _FILE_OBJECT *)v11[25];
      }
      v16 = (unsigned int)(8 * (*((_DWORD *)v11 + 46) >> 12));
      memmove(v7, v11 + 40, v16);
      v17 = *((unsigned int *)v11 + 46);
      v5 += v17;
      v9 += v17;
      v7 = (struct _LIST_ENTRY *)((char *)v7 + 8 * (v16 >> 3));
    }
    v14 = IoPageReadEx(v10, (__int64)&v6[17], &v19, (__int64)&v6[2], (__int64)&v6[5], 6, 0LL);
    if ( v14 < 0 )
    {
      LODWORD(v6[5].Flink) = v14;
      v6[5].Blink = 0LL;
      KeSetEvent((PRKEVENT)&v6[2], 0, 0);
    }
    return v6;
  }
  return result;
}
