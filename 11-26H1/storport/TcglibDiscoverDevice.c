/*
 * XREFs of TcglibDiscoverDevice @ 0x140130E30
 * Callers:
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     RaidRefreshTcg @ 0x140095C48 (RaidRefreshTcg.c)
 * Callees:
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x140134E98 (TcglibpGetProtocolList.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall TcglibDiscoverDevice(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( a3 )
  {
    result = TcglibpGetProtocolList(a1, &v7);
    if ( (int)result >= 0 )
    {
      if ( (v7 & 7) == 7 )
      {
        memset_0(a2, 0, 0x1860uLL);
        *(_QWORD *)a2 = a1;
        a2[6] = -60928;
        return TcglibpGetCapabilities(a2, a3);
      }
      else
      {
        return 3221225659LL;
      }
    }
  }
  else
  {
    memset_0(a2, 0, 0x1860uLL);
    result = 0LL;
    *(_QWORD *)a2 = a1;
    a2[6] = -60928;
  }
  return result;
}
