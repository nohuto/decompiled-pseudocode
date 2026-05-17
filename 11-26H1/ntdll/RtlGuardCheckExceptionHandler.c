/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x180081080
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     RcFrameConsolidation @ 0x180127350 (RcFrameConsolidation.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     RtlFailFast2 @ 0x180127850 (RtlFailFast2.c)
 *     bsearch_s @ 0x18012A100 (bsearch_s.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // si
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdx
  rsize_t v11; // r8
  int Key; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+98h] [rbp+20h] BYREF

  if ( !qword_1801E3518 || (dword_1801E34FC & 1) != 0 )
  {
    if ( a3 )
      *a3 = 1;
  }
  else
  {
    v6 = 0;
    v15 = 0LL;
    v14 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_1801E0450 + 1)
      || a1 >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
    {
      RtlpxLookupFunctionTable(a1, (__int64)&v14);
    }
    else
    {
      v14 = xmmword_1801E0450;
    }
    v7 = *((_QWORD *)&v14 + 1);
    if ( *((_QWORD *)&v14 + 1)
      && (v16 = 0,
          v13 = 0LL,
          RtlImageNtHeaderEx(1, *((unsigned __int64 *)&v14 + 1), 0LL, &v13),
          LOBYTE(v8) = 1,
          (v9 = RtlImageDirectoryEntryToData(v7, v8, 10LL, &v16)) != 0)
      && v16
      && v16 == *(_DWORD *)v9
      && *(_WORD *)(v13 + 4) == 0x8664
      && *(_DWORD *)v9 >= 0x118u
      && (*(_DWORD *)(v9 + 144) & 0x400000) != 0
      && *(_QWORD *)(v9 + 264) > v7
      && ((Key = a1 - v7, (v11 = *(_QWORD *)(v9 + 272)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(v9 + 264),
             v11,
             (unsigned int)((*(_DWORD *)(v9 + 144) >> 28) + 4),
             RtlpTargetCompare,
             0LL)) )
    {
      if ( !a2 )
        RtlFailFast2(38LL, a1);
    }
    else
    {
      v6 = 1;
    }
    if ( a3 )
      *a3 = v6;
  }
  return 0LL;
}
