/*
 * XREFs of RtlFindRange @ 0x140AAEE80
 * Callers:
 *     ArbFindSuitableRange @ 0x14078B240 (ArbFindSuitableRange.c)
 *     IopPortFindSuitableRange @ 0x1407A9850 (IopPortFindSuitableRange.c)
 * Callees:
 *     RtlpIsRangeAvailable @ 0x140AAF0B8 (RtlpIsRangeAvailable.c)
 */

__int64 __fastcall RtlFindRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 *a10)
{
  int v12; // r9d
  unsigned __int64 v13; // rbx
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rcx
  char IsRangeAvailable; // al
  unsigned __int64 v18; // rbx
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  unsigned __int64 *v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+6Ch] [rbp-4h]

  v12 = 0;
  v24 = 0;
  v13 = a3 - a4 + 1 - (a3 - a4 + 1) % a5;
  if ( a2 > a3 || a3 - a2 < a4 - 1 || a2 + a5 < a2 || v13 < a2 || !a4 || !a5 )
    return 3221225485LL;
  v14 = *(_DWORD *)(a1 + 24);
  v20 = a1;
  v23 = v14;
  v15 = a3 - (a3 - a4 + 1) % a5;
  if ( *(_QWORD *)a1 == a1 )
  {
    v22 = 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 8) - 40LL;
    if ( (*(_BYTE *)(v16 + 34) & 1) != 0 )
    {
      v21 = v16 + 16;
      v22 = (unsigned __int64 *)(*(_QWORD *)(v16 + 24) - 40LL);
      goto LABEL_13;
    }
    v22 = (unsigned __int64 *)v16;
  }
  v21 = 0LL;
LABEL_13:
  while ( 1 )
  {
    LOBYTE(v12) = a7;
    IsRangeAvailable = RtlpIsRangeAvailable((unsigned int)&v20, v13, v15, v12, a6 & 1, a6 & 2, 0, a8, a9);
    v12 = 0;
    if ( IsRangeAvailable )
      break;
    v18 = *v22 - a4;
    if ( v18 <= *v22 )
    {
      v13 = v18 - v18 % a5;
      v15 = v13 + a4 - 1;
      if ( v13 >= a2 )
        continue;
    }
    return 3221225473LL;
  }
  *a10 = v13;
  return 0LL;
}
