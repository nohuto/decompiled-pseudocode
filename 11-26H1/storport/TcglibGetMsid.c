/*
 * XREFs of TcglibGetMsid @ 0x1401311AC
 * Callers:
 *     RaidFillTcgAuthKey @ 0x140094074 (RaidFillTcgAuthKey.c)
 * Callees:
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpGetTableColumnData @ 0x140134100 (TcglibpGetTableColumnData.c)
 */

__int64 __fastcall TcglibGetMsid(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r9

  if ( !a3 )
    return 3221225485LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  result = TcglibpCheckContext(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      result = TcglibpGetTableColumnData(a1, v6, 33794, 3, v7 + 4, 32, v7);
      if ( (int)result < 0 )
        result = TcglibpCheckError(a1, a2, (unsigned int)result);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
