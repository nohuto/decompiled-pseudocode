/*
 * XREFs of RtlpHpHeapSuspendCommitCaching @ 0x14063B8CC
 * Callers:
 *     ExConfigurePoolCommitCaching @ 0x1406D6740 (ExConfigurePoolCommitCaching.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpHeapSuspendCommitCaching(_BYTE *a1, _DWORD *a2)
{
  signed __int16 v3; // ax
  signed __int16 v4; // tt
  char v6; // al
  signed __int8 v7; // al
  signed __int8 v8; // tt
  int v9; // [rsp+8h] [rbp+8h]

  _m_prefetchw(a1 + 30);
  v3 = *((_WORD *)a1 + 15);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange16((volatile signed __int16 *)a1 + 15, v3 | 8, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 8) != 0 )
    return 3221225865LL;
  v6 = a1[978];
  a1[978] = 1;
  LOBYTE(v9) = v6;
  _m_prefetchw(a1 + 708);
  v7 = a1[708];
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange8(a1 + 708, v7 & 0xFD, v7);
  }
  while ( v8 != v7 );
  BYTE1(v9) = (v7 & 2) != 0;
  _m_prefetchw(a1 + 333);
  BYTE2(v9) = (_InterlockedOr8(a1 + 333, 8u) & 8) != 0;
  _m_prefetchw(a1 + 525);
  HIBYTE(v9) = (_InterlockedOr8(a1 + 525, 8u) & 8) != 0;
  *a2 = v9;
  return 0LL;
}
