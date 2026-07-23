/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x140AEBE2C
 * Callers:
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  unsigned __int64 result; // rax
  unsigned __int16 i; // di
  __int64 v4; // rbx
  char v5; // al
  unsigned __int8 v6; // si
  __int64 v7; // r9
  __int64 v8; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v4 = PpmParkNodes + 1264LL * i;
    v5 = *(_BYTE *)(v4 + 1152);
    if ( a1 )
    {
      if ( (v5 & 8) == 0 )
      {
        v6 = 0;
        for ( *(_BYTE *)(v4 + 1152) = v5 | 8; v6 < *(_BYTE *)(v4 + 10); ++v6 )
        {
          v7 = 624LL * v6;
          v8 = *(_QWORD *)(v4 + 1256);
          if ( *(_WORD *)(v7 + v8) )
            PopExecuteOnTargetProcessors(
              v7 + v8 + 24,
              (__int64)PpmIdleInstallConcurrency,
              *(_QWORD *)(v4 + 1072),
              *(_QWORD *)(v7 + v8 + 552));
        }
      }
    }
    else if ( (v5 & 8) != 0 )
    {
      *(_BYTE *)(v4 + 1152) = v5 & 0xF7;
      PopExecuteOnTargetProcessors(v4 + 16, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
    }
    ++i;
  }
  return result;
}
