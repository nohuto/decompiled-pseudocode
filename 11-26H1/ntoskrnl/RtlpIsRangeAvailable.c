/*
 * XREFs of RtlpIsRangeAvailable @ 0x140AAF0B8
 * Callers:
 *     RtlFindRange @ 0x140AAEE80 (RtlFindRange.c)
 *     RtlIsRangeAvailable @ 0x140AAF000 (RtlIsRangeAvailable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlGetNextRange @ 0x140AAF1A0 (RtlGetNextRange.c)
 */

char __fastcall RtlpIsRangeAvailable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v14; // rax
  bool v15; // cf
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v11 = *(_QWORD *)(a1 + 16);
  v12 = a3;
  v17 = v11;
  while ( v11 )
  {
    if ( !*(_QWORD *)(a1 + 8) )
    {
      if ( a7 )
      {
        if ( v12 < *(_QWORD *)v11 )
          return 1;
      }
      else if ( a2 > *(_QWORD *)(v11 + 8) )
      {
        return 1;
      }
    }
    v14 = *(_QWORD *)v11;
    v15 = *(_QWORD *)v11 < a2;
    if ( *(_QWORD *)v11 > a2 )
    {
      if ( v12 < v14 )
        goto LABEL_9;
      v15 = v14 < a2;
    }
    if ( (!v15 || *(_QWORD *)(v11 + 8) >= a2)
      && (!a5 || (*(_BYTE *)(v11 + 33) & 1) == 0)
      && (a4 & *(_BYTE *)(v11 + 32)) == 0
      && (!a6 || *(_QWORD *)(v11 + 24))
      && (!a9 || !(unsigned __int8)guard_dispatch_icall_no_overrides(a8, v11)) )
    {
      return 0;
    }
LABEL_9:
    LOBYTE(a3) = a7;
    RtlGetNextRange(a1, &v17, a3);
    v11 = v17;
  }
  return 1;
}
