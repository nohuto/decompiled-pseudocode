/*
 * XREFs of MiGetNodeHugeScrubRanges @ 0x14086DF80
 * Callers:
 *     MiScrubNodeHugeRanges @ 0x1407113F0 (MiScrubNodeHugeRanges.c)
 * Callees:
 *     MiWalkAllHugeRanges @ 0x140534FF0 (MiWalkAllHugeRanges.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiGetNodeHugeScrubRanges(__int16 a1, int a2, _QWORD *a3)
{
  PVOID result; // rax
  bool v4; // zf
  __int128 v6; // [rsp+20h] [rbp-60h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int128 v9; // [rsp+48h] [rbp-38h] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h]
  __int128 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+78h] [rbp-8h]

  result = 0LL;
  v4 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) == 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  v11 = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( !v4 )
  {
    DWORD1(v9) |= 7u;
    LODWORD(v11) = a2;
    LOWORD(v8) = a1;
    P[1] = &v9;
    LODWORD(v9) = 1;
    *((_QWORD *)&v10 + 1) = 0x40000000LL;
    if ( (int)MiWalkAllHugeRanges((__int64)MiAddRuns, (__int64)&v6) < 0 )
    {
      result = P[0];
      if ( P[0] )
      {
        ExFreePoolWithTag(P[0], 0);
        return 0LL;
      }
    }
    else
    {
      *a3 = v6;
      return P[0];
    }
  }
  return result;
}
