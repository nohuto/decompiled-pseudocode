/*
 * XREFs of StorPortPause @ 0x14007BE90
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x14007A75C (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1401C2770 (StorPortPauseVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // r8
  int *v5; // rdi
  int *v6; // rsi
  int *v7; // r9
  int *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int *v15; // [rsp+70h] [rbp+18h] BYREF
  int *v16; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v15 = 0LL;
  v16 = 0LL;
  RaidpPortGetAdapter(a1, &v15, &v16);
  v5 = v15;
  v6 = v16;
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v7 = v16;
    v8 = v16;
    if ( v15 )
    {
      v7 = v15;
      v8 = v15;
    }
    DbgLogRequest((__int64)v8, 14, retaddr, (__int64)v7, v2, 0LL, 0LL);
  }
  if ( v5 )
  {
    v9 = (unsigned int)v5[14];
  }
  else if ( v6 )
  {
    v9 = (unsigned int)v6[14];
  }
  else
  {
    v9 = 255LL;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v13) = v2;
    LODWORD(v12) = v9;
    McTemplateK0pqq_EtwWriteTransfer(v9, &EventPortPause, v4, a1, v12, v13);
  }
  if ( !v5 )
    return 0;
  ++v5[1354];
  v5[360] = v2;
  _InterlockedExchange(v5 + 361, 1);
  RaidPauseAdapterQueue((__int64)v5);
  if ( _InterlockedCompareExchange(v5 + 324, 134684676, 134684677) != 134684677 || v5 == (int *)-1280LL )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140172448 & 0x800) != 0 )
      DbgLogRequest((__int64)v5, 22, retaddr, 344LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)RaidResumeAdapterQueue((__int64)v5, 0LL, 0LL, v11) )
      KeInsertQueueDpc((PRKDPC)(v5 + 444), 0LL, 0LL);
  }
  else
  {
    v5[328] = 3;
    RaidQueueDeferredItem((char *)v5 + 1072, (struct _SLIST_ENTRY *)v5 + 80);
  }
  return 1;
}
