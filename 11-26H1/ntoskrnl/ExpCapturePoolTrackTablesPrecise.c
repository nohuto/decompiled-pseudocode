/*
 * XREFs of ExpCapturePoolTrackTablesPrecise @ 0x140777D38
 * Callers:
 *     ExGetPoolTagInfo @ 0x140B5A170 (ExGetPoolTagInfo.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     ExpAllocatePoolTrackTableSnapshot @ 0x140530FF8 (ExpAllocatePoolTrackTableSnapshot.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall ExpCapturePoolTrackTablesPrecise(_QWORD *a1)
{
  __int64 v1; // rsi
  void *volatile StackLimit; // rdi
  int PoolTrackTableSnapshot; // ebx
  PVOID v5; // rbx
  PVOID v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  v1 = PoolTrackTableExpansionSize;
  StackLimit = stru_140EFF2C0.StackLimit;
  P = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  PoolTrackTableSnapshot = ExpAllocatePoolTrackTableSnapshot(
                             64LL,
                             (unsigned __int64)stru_140EFF2C0.StackLimit + PoolTrackTableExpansionSize,
                             (unsigned __int64 **)&P);
  if ( PoolTrackTableSnapshot < 0 )
  {
    v6 = P;
  }
  else
  {
    v5 = P;
    *((_QWORD *)&v8 + 1) = StackLimit;
    *((_QWORD *)&v9 + 1) = v1;
    *(_QWORD *)&v8 = (char *)P + 8;
    *(_QWORD *)&v9 = (char *)P + 80 * (_QWORD)StackLimit + 8;
    KeGenericCallDpcEx((__int64)ExpGetPoolTagInfoTarget, (__int64)&v8);
    v6 = 0LL;
    *a1 = v5;
    PoolTrackTableSnapshot = 0;
  }
  if ( v6 )
    ExFreePool(v6);
  return (unsigned int)PoolTrackTableSnapshot;
}
