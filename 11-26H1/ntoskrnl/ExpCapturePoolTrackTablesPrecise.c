/*
 * XREFs of ExpCapturePoolTrackTablesPrecise @ 0x140774D38
 * Callers:
 *     ExGetPoolTagInfo @ 0x140B5721C (ExGetPoolTagInfo.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x1403C2284 (KeGenericCallDpcEx.c)
 *     ExpAllocatePoolTrackTableSnapshot @ 0x14052EAD8 (ExpAllocatePoolTrackTableSnapshot.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall ExpCapturePoolTrackTablesPrecise(_QWORD *a1)
{
  void *InitialStack; // rsi
  __int64 v2; // rdi
  int PoolTrackTableSnapshot; // ebx
  PVOID v5; // rbx
  PVOID v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  InitialStack = stru_140EFEF90.InitialStack;
  v2 = PoolTrackTableSize;
  P = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  PoolTrackTableSnapshot = ExpAllocatePoolTrackTableSnapshot(
                             64LL,
                             (unsigned __int64)stru_140EFEF90.InitialStack + PoolTrackTableSize,
                             (unsigned __int64 **)&P);
  if ( PoolTrackTableSnapshot < 0 )
  {
    v6 = P;
  }
  else
  {
    v5 = P;
    *((_QWORD *)&v8 + 1) = v2;
    *((_QWORD *)&v9 + 1) = InitialStack;
    *(_QWORD *)&v8 = (char *)P + 8;
    *(_QWORD *)&v9 = (char *)P + 80 * v2 + 8;
    KeGenericCallDpcEx((__int64)ExpGetPoolTagInfoTarget, (__int64)&v8);
    v6 = 0LL;
    *a1 = v5;
    PoolTrackTableSnapshot = 0;
  }
  if ( v6 )
    ExFreePool(v6);
  return (unsigned int)PoolTrackTableSnapshot;
}
