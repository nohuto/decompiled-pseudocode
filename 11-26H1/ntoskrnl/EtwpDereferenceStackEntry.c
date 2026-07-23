/*
 * XREFs of EtwpDereferenceStackEntry @ 0x14032ECD0
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     EtwpStackRundown @ 0x14046AEBC (EtwpStackRundown.c)
 *     EtwpGetCrimsonStackKey @ 0x1404FF248 (EtwpGetCrimsonStackKey.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpDereferenceStackEntry(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  PSLIST_ENTRY v3; // rbx
  PSLIST_ENTRY result; // rax
  unsigned __int64 Alignment; // rax
  unsigned __int16 v6; // r11
  PSLIST_ENTRY v7; // r10
  int v8; // r8d
  __int64 v9; // rdx
  int Next; // r9d
  __int64 v11; // rcx
  _SLIST_ENTRY *v12; // rdi
  PSLIST_ENTRY v13; // [rsp+30h] [rbp-B8h] BYREF
  PSLIST_ENTRY *v14; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v15[17]; // [rsp+48h] [rbp-A0h]

  v3 = ListEntry;
  result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchangeAdd(
                                         (volatile signed __int32 *)&ListEntry[1].Next + 2,
                                         0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    Alignment = a2->Alignment;
    v6 = 1;
    v13 = ListEntry;
    v7 = ListEntry;
    v15[0] = 8LL;
    v8 = *(_DWORD *)Alignment;
    v9 = *(_QWORD *)(Alignment + 1360);
    v14 = &v13;
    do
    {
      Next = 32;
      if ( LODWORD(v7[2].Next) < 0x20 )
        Next = (int)v7[2].Next;
      v11 = 2LL * v6++;
      v15[v11 - 1] = (char *)v7 + 40;
      LODWORD(v15[v11]) = 8 * Next;
      HIDWORD(v15[v11]) = 0;
      v7 = v7[1].Next;
    }
    while ( v7 );
    EtwpLogKernelEvent((unsigned int)&v14, v9, v8, v6, 6179, 5244418);
    do
    {
      v12 = v3[1].Next;
      result = RtlpInterlockedPushEntrySList(a2 + 1, v3);
      v3 = v12;
    }
    while ( v12 );
  }
  return result;
}
