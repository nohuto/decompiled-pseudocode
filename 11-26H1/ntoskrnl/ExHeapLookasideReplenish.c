/*
 * XREFs of ExHeapLookasideReplenish @ 0x140461000
 * Callers:
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpVsContextMultiAlloc @ 0x1404610A8 (RtlpHpVsContextMultiAlloc.c)
 *     InterlockedPushListSList @ 0x140735910 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY *__fastcall ExHeapLookasideReplenish(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  PSLIST_ENTRY *v4; // rdi
  _SLIST_HEADER *v6; // rbx
  unsigned int v7; // r8d
  unsigned int Alignment_low; // edx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  int v12; // eax
  PSLIST_ENTRY ListEnd[3]; // [rsp+30h] [rbp-18h] BYREF
  PSLIST_ENTRY *v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  v6 = (_SLIST_HEADER *)(a1 + ((a2 + 1LL) << 6));
  ListEnd[0] = 0LL;
  v7 = 0;
  Alignment_low = LOWORD(v6->Alignment);
  v9 = LOWORD(v6[1].Alignment);
  if ( Alignment_low < v9 )
    v7 = v9 - Alignment_low;
  v10 = v7 >> 1;
  if ( v10 )
  {
    if ( a4 <= 0x20000 )
    {
      v12 = RtlpHpVsContextMultiAlloc(a3 + 704, a4, v10 + 1, a4, (__int64)&v14, (__int64)ListEnd);
      if ( v12 )
      {
        v4 = v14;
        if ( v12 != 1 )
          InterlockedPushListSList(v6, *v14, ListEnd[0], v12 - 1);
      }
    }
  }
  return v4;
}
