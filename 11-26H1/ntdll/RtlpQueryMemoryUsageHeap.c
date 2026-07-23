/*
 * XREFs of RtlpQueryMemoryUsageHeap @ 0x1800929D0
 * Callers:
 *     RtlpHeapQueryTotalReserveSize @ 0x180092950 (RtlpHeapQueryTotalReserveSize.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180092C70 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpGetLowFragHeapMetadataSize @ 0x180092ACC (RtlpGetLowFragHeapMetadataSize.c)
 */

__int64 __fastcall RtlpQueryMemoryUsageHeap(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r8
  unsigned __int64 v4; // r9
  __int64 *v5; // r11
  __int64 v6; // r10
  _QWORD **v7; // rbx
  _QWORD **v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rsi
  _QWORD *v12; // r10
  _QWORD *i; // rax
  __int64 v14; // rcx

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return 3221225474LL;
  *a2 = 0LL;
  *a3 = 0LL;
  RtlpGetLowFragHeapMetadataSize(a1, a2, a3, 0LL);
  v7 = (_QWORD **)(v6 + 288);
  v8 = (_QWORD **)(v6 + 272);
  while ( 1 )
  {
    v9 = *v7;
    v10 = -1LL;
    v11 = 0LL;
    v12 = 0LL;
    while ( v9 != v7 )
    {
      if ( (unsigned __int64)(v9 - 3) < v10 && (unsigned __int64)(v9 - 3) > v4 )
      {
        v10 = (unsigned __int64)(v9 - 3);
        v11 = v9 - 3;
      }
      v9 = (_QWORD *)*v9;
    }
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
    {
      if ( (unsigned __int64)i < v10 && (unsigned __int64)i > v4 )
      {
        v10 = (unsigned __int64)i;
        v12 = i;
      }
    }
    if ( v10 == -1LL )
      break;
    v14 = *v5;
    v4 = 0LL;
    if ( !v12 )
      v4 = (unsigned __int64)v11;
    if ( v4 )
    {
      *v5 = v14 + ((unsigned __int64)*(unsigned int *)(v4 + 56) << 12);
      *v3 += (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 56) - *(_DWORD *)(v4 + 80)) << 12;
    }
    else
    {
      v4 = (unsigned __int64)v12;
      *v5 = v12[5] + v14;
      *v3 += v12[4];
    }
  }
  return 0LL;
}
