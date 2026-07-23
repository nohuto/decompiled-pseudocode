/*
 * XREFs of RtlpInitializeLowFragHeap @ 0x18006DA10
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18006CC20 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlpInitializeLowFragHeap(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int16 *v6; // r10
  _QWORD *result; // rax
  unsigned __int16 v8; // cx
  __int64 v9; // rcx

  v3 = 0;
  *a3 = 0LL;
  a3[2] = a3 + 1;
  a3[1] = a3 + 1;
  v4 = a3 + 15;
  a3[3] = a1;
  v5 = 12LL;
  do
  {
    *(v4 - 1) = 0;
    *v4 = 6;
    v4 += 12;
    --v5;
  }
  while ( v5 );
  v6 = RtlpBucketBlockSizes;
  result = (_QWORD *)((char *)a3 + 679);
  do
  {
    v8 = *v6++;
    *((_BYTE *)result - 1) = v3;
    result = (_QWORD *)((char *)result + 4);
    ++v3;
    *(_WORD *)((char *)result - 7) = (v8 >> 4) + 1;
    *((_BYTE *)result - 4) = *((_BYTE *)result - 4) & 0xF9 | (2 * (dword_1801CBFEC & 3));
  }
  while ( v3 < 0x81 );
  if ( (a2 & 1) != 0 )
  {
    v9 = 1LL;
  }
  else
  {
    v9 = LODWORD(RtlpAffinityState[0]);
    if ( !LODWORD(RtlpAffinityState[0]) )
      return result;
  }
  result = a3 + 411;
  do
  {
    *result = a3;
    result += 6;
    --v9;
  }
  while ( v9 );
  return result;
}
