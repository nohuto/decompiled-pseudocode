/*
 * XREFs of MiDefragmentAllSlabAllocators @ 0x14049A638
 * Callers:
 *     MmManagePartitionCreateLargePages @ 0x1407809E4 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 *     MiDeletePendingSlabIdentities @ 0x14049A848 (MiDeletePendingSlabIdentities.c)
 *     MiDefragmentAllSlabsHelper @ 0x14070AED0 (MiDefragmentAllSlabsHelper.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiDefragmentAllSlabAllocators(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // r15
  __int64 v9; // rsi
  unsigned int i; // edi
  int j; // ebx
  _DWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]
  unsigned __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]

  v5 = a3;
  MiDeletePendingSlabIdentities(a1, 0LL);
  v13[1] = 0;
  v8 = (unsigned int)v5;
  v9 = a4 << MiLargePageShifts[v5];
  v15 = 0LL;
  v16 = 0LL;
  v13[0] = v5;
  v14 = v9;
  if ( a2 == -1 )
  {
    for ( i = 0; i < 2; ++i )
    {
      for ( j = 0; j < 9; ++j )
      {
        HIDWORD(v16) = j;
        if ( (unsigned int)MiDefragmentAllSlabsHelper(a1, 0LL, v13) )
          return v15 >> MiLargePageShifts[v8];
      }
      LODWORD(v16) = 1;
    }
  }
  else
  {
    MiEnumerateSlabAllocatorsEx(a1, (unsigned int)MiDefragmentAllSlabsHelper, (unsigned int)v13, a2, 9);
    if ( v15 < v14 )
    {
      LODWORD(v16) = 1;
      MiEnumerateSlabAllocatorsEx(a1, (unsigned int)MiDefragmentAllSlabsHelper, (unsigned int)v13, a2, 9);
    }
  }
  return v15 >> MiLargePageShifts[v8];
}
