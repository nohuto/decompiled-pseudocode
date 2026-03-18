/*
 * XREFs of ExpandMonitorSpaceVertex @ 0x1400636F0
 * Callers:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x14006365C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, unsigned __int64 a3)
{
  int v3; // eax
  signed int v4; // r9d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  signed int v7; // r9d
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+18h] [rbp+18h]

  v3 = -(int)a3;
  v4 = ((int)a3 >> 31) & 0xFFFFFFFE;
  if ( (a3 & 0x80000000) == 0LL )
    v3 = a3;
  if ( a2 && (v5 = (__int64)(((unsigned __int64)a2 >> 1) + a1 * (__int64)v3) / a2, v5 <= 0x7FFFFFFF) )
  {
    if ( v4 <= -1 )
      LODWORD(v5) = -(int)v5;
    LODWORD(v11) = v5;
  }
  else if ( v4 <= -1 )
  {
    LODWORD(v11) = 0x80000000;
  }
  else
  {
    LODWORD(v11) = 0x7FFFFFFF;
  }
  v6 = HIDWORD(a3);
  v7 = ((int)v6 >> 31) & 0xFFFFFFFE;
  v8 = -(int)v6;
  if ( (int)v6 > 0 )
    v8 = v6;
  if ( a2 && (v9 = (__int64)(((unsigned __int64)a2 >> 1) + a1 * (__int64)v8) / a2, v9 <= 0x7FFFFFFF) )
  {
    if ( v7 <= -1 )
      LODWORD(v9) = -(int)v9;
    HIDWORD(v11) = v9;
  }
  else if ( v7 <= -1 )
  {
    HIDWORD(v11) = 0x80000000;
  }
  else
  {
    HIDWORD(v11) = 0x7FFFFFFF;
  }
  return v11;
}
