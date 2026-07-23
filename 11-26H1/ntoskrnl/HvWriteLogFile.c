/*
 * XREFs of HvWriteLogFile @ 0x140AA7DD4
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     HvpGenerateLogEntryChecksums @ 0x140AA86B4 (HvpGenerateLogEntryChecksums.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140AA8A4C (HvpLogTypeToLogArrayIndex.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x140AA8D1C (CmpTraceHiveFlushWroteLogFile.c)
 */

__int64 __fastcall HvWriteLogFile(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r15
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // r8
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  _DWORD *v16; // r14

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    return 0LL;
  v5 = *(unsigned int *)(a1 + 168);
  if ( !(_DWORD)v5 || !*(_QWORD *)(a1 + 8 * v5 + 1544) )
    return 3221225485LL;
  v6 = *(_DWORD *)(a1 + 1720);
  v7 = *(_QWORD *)(a1 + 1712);
  v8 = *(unsigned int *)(a1 + 1724);
  LOBYTE(a3) = *(_BYTE *)(a1 + 1728);
  HvpGenerateLogEntryChecksums(v7, v6, a3);
  if ( *(_DWORD *)(a1 + 168) == 1 || *(_DWORD *)(a1 + 168) == 4 )
  {
    v9 = (_QWORD *)(a1 + 1816);
  }
  else if ( *(_DWORD *)(a1 + 168) == 5 )
  {
    v9 = (_QWORD *)(a1 + 1824);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v8 + *(unsigned int *)(a1 + 180);
  if ( v10 > *v9 )
    CmpDoFileSetSizeEx(a1, *(unsigned int *)(a1 + 168), v10, 1LL);
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v16 = (_DWORD *)(v7 + 24 * i);
    *v16 = *(_DWORD *)(a1 + 180);
    result = guard_dispatch_icall_no_overrides(a1, *(unsigned int *)(a1 + 168));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 180) += v16[4];
  }
  result = CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 168));
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a1 + 172);
    v15 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 168), v13, v14);
    *(_BYTE *)(v15 + a1 + 192) = 1;
    CmpTraceHiveFlushWroteLogFile(v15, (unsigned int)v8);
    *v3 = v8;
    return 0LL;
  }
  return result;
}
