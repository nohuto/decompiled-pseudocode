/*
 * XREFs of MiFreeUnusedSlabPages @ 0x1402A6920
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140207480 (MiGetSlabCurrentTime.c)
 *     MiFreeSlabEntries @ 0x1402A6AEC (MiFreeSlabEntries.c)
 *     MiSlabUpdateRecentFailure @ 0x1402A6D10 (MiSlabUpdateRecentFailure.c)
 *     MiCheckMdlSlabFragmentation @ 0x1402A6D4C (MiCheckMdlSlabFragmentation.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E8E7C (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiDemoteSlabEntries @ 0x140500334 (MiDemoteSlabEntries.c)
 *     MiLogSlabEntriesDemote @ 0x140502720 (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiFreeUnusedSlabPages(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 i; // rdi
  unsigned int j; // ebx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // [rsp+20h] [rbp-98h] BYREF
  char v13[80]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14; // [rsp+78h] [rbp-40h]
  __int64 v15; // [rsp+80h] [rbp-38h]

  memset_0(&v12, 0, 0x68uLL);
  v2 = a1[2];
  v3 = v2 + 56320LL * (unsigned __int16)KeNumberNodes;
  while ( v2 < v3 )
  {
    for ( i = v2 + 14752; i < v2 + 16840; i += 232LL )
    {
      if ( (unsigned int)MiFreeSlabEntries(a1, i, 0LL) )
        goto LABEL_8;
    }
    v2 += 56320LL;
  }
LABEL_8:
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    v6 = 56320LL * j;
    v7 = v6 + a1[2] + 16376LL;
    v8 = MiCheckMdlSlabFragmentation(v7, 0LL);
    if ( v8 )
    {
      memset_0(v13, 0, sizeof(v13));
      v12 = a1;
      v14 = v7;
      v15 = -1LL;
      KeGenericCallDpcEx(MiDemoteSlabEntriesDpc, &v12);
      v10 = a1[2];
      *(_QWORD *)(v10 + v6 + 56120) = MiGetSlabCurrentTime();
      MiLogSlabEntriesDemote(&v12, v8);
    }
  }
  result = MiSlabUpdateRecentFailure(a1 + 2136);
  if ( a1[2770] )
  {
    if ( a1[2939] )
    {
      result = MiSlabDemotionLowMemoryConditionUpdate(a1, 0LL);
      v11 = a1[2770];
      if ( v11 )
      {
        result = MiGetSlabCurrentTime() - v11;
        if ( result > 0x1C9C380 )
          return MiDemoteSlabEntries(a1, 1LL);
      }
    }
  }
  return result;
}
