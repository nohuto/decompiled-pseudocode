/*
 * XREFs of RtlAreBitsClearEx @ 0x140431D80
 * Callers:
 *     MiPatchDataPagesCallback @ 0x140873410 (MiPatchDataPagesCallback.c)
 *     MiHotAddPartitionMemory @ 0x14087BE70 (MiHotAddPartitionMemory.c)
 *     MiCommitPageTablesSetBits @ 0x1409C7A4C (MiCommitPageTablesSetBits.c)
 *     MiReturnVadBitmapCommit @ 0x140AE6210 (MiReturnVadBitmapCommit.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r11
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v9; // rax

  if ( a2 < *a1 )
  {
    if ( a3 > 1 )
    {
      if ( *a1 - a2 >= a3 )
      {
        v4 = a1[1];
        v5 = *(_QWORD *)(v4 + 8 * (a2 >> 6));
        v6 = v4 + 8 * (a2 >> 6);
        v7 = v4 + 8 * ((a2 + a3 - 1) >> 6);
        if ( v6 == v7 )
          return ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2) & v5) == 0;
        if ( ((-1LL << a2) & v5) != 0 )
          return 0;
        while ( 1 )
        {
          v9 = *(_QWORD *)(v6 + 8);
          v6 += 8LL;
          if ( v6 == v7 )
            break;
          if ( v9 )
            return 0;
        }
        return ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)a2 + (unsigned __int8)a3 - 1)) & v9) == 0;
      }
    }
    else if ( a3 == 1 )
    {
      return !_bittest64((const signed __int64 *)(a1[1] + 8 * (a2 >> 6)), a2 & 0x3F);
    }
  }
  return 0;
}
