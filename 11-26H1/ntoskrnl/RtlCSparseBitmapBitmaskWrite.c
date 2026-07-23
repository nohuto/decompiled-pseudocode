/*
 * XREFs of RtlCSparseBitmapBitmaskWrite @ 0x1403518C8
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x140351E7C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     RtlCSparseBitmapBitsClear @ 0x1403501DC (RtlCSparseBitmapBitsClear.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140353424 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapUnlock @ 0x140353ACC (RtlpCSparseBitmapUnlock.c)
 */

__int64 __fastcall RtlCSparseBitmapBitmaskWrite(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  char v10; // di
  unsigned __int64 v11; // r8
  __int64 v12; // rbp
  signed __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int64 i; // rax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(v18) = 0;
  v17 = 0LL;
  v19 = 0LL;
  if ( a4 )
  {
    v7 = RtlpCSparseBitmapPageCommit(a1, a2 >> 15, &v19, &v17);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = a2;
      v10 = a2 & 0x3F;
      v11 = v9 >> 6;
      v12 = a4 << v10;
      v13 = *(_QWORD *)(v8 + 8 * v11);
      v14 = v13 & ~(3LL << v10);
      for ( i = v13; ; v14 = i & ~(3LL << v10) )
      {
        i = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v11), v12 | v14, i);
        if ( v13 == i )
          break;
        v13 = i;
      }
      v7 = 0;
      RtlpCSparseBitmapUnlock(&v19);
      if ( *(_BYTE *)(v18 + 48) )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
        __writecr8((unsigned __int8)v17);
      }
      else
      {
        KeLeaveGuardedRegion();
      }
    }
    return (unsigned int)v7;
  }
  else
  {
    RtlCSparseBitmapBitsClear(a1, a2, 2LL);
    return 0LL;
  }
}
