/*
 * XREFs of ExpandMonitorSpaceVertex @ 0x140082970
 * Callers:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1400828DC (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, unsigned __int64 a3)
{
  signed int v3; // r10d
  int v4; // eax
  int v5; // r9d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  signed int v8; // r10d
  int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+18h] [rbp+18h]

  v3 = ((int)a3 >> 31) & 0xFFFFFFFE;
  v4 = -(int)a3;
  v5 = 0x80000000;
  if ( (int)a3 > 0 )
    v4 = a3;
  if ( a2 && (v6 = (__int64)(((unsigned __int64)a2 >> 1) + a1 * (__int64)v4) / a2, v6 <= 0x7FFFFFFF) )
  {
    if ( v3 <= -1 )
      LODWORD(v6) = -(int)v6;
  }
  else
  {
    LODWORD(v6) = 0x80000000;
    if ( v3 > -1 )
      LODWORD(v6) = 0x7FFFFFFF;
  }
  v7 = HIDWORD(a3);
  LODWORD(v12) = v6;
  v8 = ((int)v7 >> 31) & 0xFFFFFFFE;
  v9 = -(int)v7;
  if ( (int)v7 > 0 )
    v9 = v7;
  if ( a2 && (v10 = (__int64)(((unsigned __int64)a2 >> 1) + a1 * (__int64)v9) / a2, v10 <= 0x7FFFFFFF) )
  {
    v5 = v10;
    if ( v8 <= -1 )
      v5 = -(int)v10;
  }
  else if ( v8 > -1 )
  {
    v5 = 0x7FFFFFFF;
  }
  HIDWORD(v12) = v5;
  return v12;
}
