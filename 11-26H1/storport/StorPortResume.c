/*
 * XREFs of StorPortResume @ 0x14007C4D0
 * Callers:
 *     RaidpLinkUp @ 0x14007A7D8 (RaidpLinkUp.c)
 *     StorPortResumeVrfy @ 0x1401C27D0 (StorPortResumeVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140078BD8 (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall StorPortResume(__int64 a1)
{
  __int64 v2; // r8
  int *v3; // rdi
  int *v4; // rsi
  int *v5; // r9
  int *v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  int *v11; // [rsp+58h] [rbp+10h] BYREF
  int *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  RaidpPortGetAdapter(a1, &v11, &v12);
  v3 = v11;
  v4 = v12;
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v5 = v12;
    v6 = v12;
    if ( v11 )
    {
      v5 = v11;
      v6 = v11;
    }
    DbgLogRequest((__int64)v6, 15, retaddr, (__int64)v5, 0LL, 0LL, 0LL);
  }
  if ( v3 )
  {
    v7 = (unsigned int)v3[14];
  }
  else if ( v4 )
  {
    v7 = (unsigned int)v4[14];
  }
  else
  {
    v7 = 255LL;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v9) = v7;
    McTemplateK0pq_EtwWriteTransfer(v7, &EventPortResume, v2, a1, v9);
  }
  if ( !v3 )
    return 0;
  _InterlockedExchange(v3 + 361, 0);
  if ( _InterlockedCompareExchange(v3 + 344, 134684676, 134684677) != 134684677 || v3 == (int *)-1360LL )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140172448 & 0x800) != 0 )
      DbgLogRequest((__int64)v3, 22, retaddr, 469LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v3[348] = 4;
    RaidQueueDeferredItem((char *)v3 + 1072, (struct _SLIST_ENTRY *)v3 + 85);
  }
  return 1;
}
