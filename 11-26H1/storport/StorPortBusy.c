/*
 * XREFs of StorPortBusy @ 0x140050770
 * Callers:
 *     StorPortBusyVrfy @ 0x1401C2160 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaidAllocateDeferredItem @ 0x140057E30 (RaidAllocateDeferredItem.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 */

char __fastcall StorPortBusy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 DeferredItem; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(__int64 **)(a1 - 16);
  v5 = 0LL;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  if ( v4 && *v4 )
  {
    a2 = *(unsigned int *)*v4;
    if ( (v4[31] & 1) != 0 )
    {
      if ( (_DWORD)a2 == 1314275652 )
        v6 = *v4;
    }
    else if ( (_DWORD)a2 == 1094997074 )
    {
      v5 = *v4;
    }
  }
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v8 = v5;
    v9 = v5;
    if ( !v5 )
    {
      v8 = v6;
      v9 = v6;
    }
    DbgLogRequest(v9, 18, retaddr, v8, v7, 0LL, 0LL);
  }
  if ( !v5 )
    return 0;
  ++*(_DWORD *)(v5 + 5420);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qD(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, v5, v7);
  }
  DeferredItem = RaidAllocateDeferredItem(v5 + 1072, a2, a3, a4);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140172448 & 0x800) != 0 )
      DbgLogRequest(v5, 22, retaddr, 1085LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(DeferredItem + 32) = 7;
  *(_DWORD *)(DeferredItem + 40) = v7;
  RaidQueueDeferredItem((char *)(v5 + 1072), (struct _SLIST_ENTRY *)DeferredItem);
  return 1;
}
