/*
 * XREFs of KiTestForAlertPending @ 0x1404A4888
 * Callers:
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTestForAlertPending(__int64 a1, char a2, char a3, int a4)
{
  unsigned int v4; // r10d
  int v6; // edx

  v4 = 0;
  if ( !a2 )
  {
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 && a3 )
      return 192;
    return v4;
  }
  v6 = *(unsigned __int8 *)(a1 + 113);
  if ( _bittest(&v6, a3) )
  {
    if ( a4 )
    {
      v6 &= ~(1 << a3);
      goto LABEL_17;
    }
    return 257;
  }
  if ( a3 && *(_QWORD *)(a1 + 168) != a1 + 168 )
  {
    if ( a4 )
      *(_BYTE *)(a1 + 194) |= 2u;
    return 192;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( a4 )
    {
      LOBYTE(v6) = v6 & 0xFE;
LABEL_17:
      *(_BYTE *)(a1 + 113) = v6;
      return 257;
    }
    return 257;
  }
  return v4;
}
