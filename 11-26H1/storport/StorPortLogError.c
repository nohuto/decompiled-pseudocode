/*
 * XREFs of StorPortLogError @ 0x14007BB80
 * Callers:
 *     StorPortLogErrorVrfy @ 0x1401C2490 (StorPortLogErrorVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     RaidAllocateDeferredItem @ 0x140057E30 (RaidAllocateDeferredItem.c)
 *     RaidAdapterLogIoError @ 0x140062D44 (RaidAdapterLogIoError.c)
 */

void __fastcall StorPortLogError(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5, unsigned int a6, int a7)
{
  union _SLIST_HEADER *v9; // rbx
  PSLIST_ENTRY DeferredItem; // rax
  union _SLIST_HEADER *v11; // [rsp+20h] [rbp-18h] BYREF
  int *v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  RaidpPortGetAdapter(a1, (int **)&v11, &v12);
  v9 = v11;
  if ( v11 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      DeferredItem = RaidAllocateDeferredItem(v9 + 67);
      if ( DeferredItem )
      {
        LODWORD(DeferredItem[2].Next) = 2;
        BYTE4(DeferredItem[2].Next) = a3;
        BYTE5(DeferredItem[2].Next) = a4;
        BYTE6(DeferredItem[2].Next) = a5;
        LODWORD(DeferredItem[3].Next) = a6;
        HIDWORD(DeferredItem[3].Next) = a7;
        RaidQueueDeferredItem((char *)&v9[67], DeferredItem);
      }
      else
      {
        _InterlockedIncrement(&RaidUnloggedErrors);
      }
    }
    else
    {
      LODWORD(v11) = a3;
      BYTE1(v11) = a4;
      RaidAdapterLogIoError((__int64)v9, (int)v11, a6, a7);
    }
  }
}
