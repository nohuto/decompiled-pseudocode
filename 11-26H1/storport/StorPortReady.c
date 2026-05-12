/*
 * XREFs of StorPortReady @ 0x14005CDB0
 * Callers:
 *     StorPortReadyVrfy @ 0x1401C2790 (StorPortReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaidAllocateDeferredItem @ 0x140057E30 (RaidAllocateDeferredItem.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  union _SLIST_HEADER **v1; // rax
  union _SLIST_HEADER *v2; // rdi
  union _SLIST_HEADER *v3; // r10
  int Alignment; // edx
  __int64 v5; // r9
  __int64 v6; // rcx
  PSLIST_ENTRY DeferredItem; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = *(union _SLIST_HEADER ***)(a1 - 16);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 && *v1 )
  {
    Alignment = (*v1)->Alignment;
    if ( ((_DWORD)v1[31] & 1) != 0 )
    {
      if ( Alignment == 1314275652 )
        v3 = *v1;
    }
    else if ( Alignment == 1094997074 )
    {
      v2 = *v1;
    }
  }
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v5 = (__int64)v2;
    v6 = (__int64)v2;
    if ( !v2 )
    {
      v5 = (__int64)v3;
      v6 = (__int64)v3;
    }
    DbgLogRequest(v6, 19, retaddr, v5, 0LL, 0LL, 0LL);
  }
  if ( !v2 )
    return 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x16u,
      (__int64)&WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids,
      v2);
  }
  DeferredItem = RaidAllocateDeferredItem(v2 + 67);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140172448 & 0x800) != 0 )
      DbgLogRequest((__int64)v2, 22, retaddr, 1154LL, 0LL, 0LL, 0LL);
    return 0;
  }
  LODWORD(DeferredItem[2].Next) = 8;
  RaidQueueDeferredItem((char *)&v2[67], DeferredItem);
  return 1;
}
