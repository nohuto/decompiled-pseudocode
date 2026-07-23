/*
 * XREFs of RtlpPopulateContext @ 0x1800CA100
 * Callers:
 *     RtlInsertEntryHashTable @ 0x1800C9F40 (RtlInsertEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1800CA080 (RtlInitEnumerationHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1800DA910 (RtlRemoveEntryHashTable.c)
 *     RtlInitStrongEnumerationHashTable @ 0x180146150 (RtlInitStrongEnumerationHashTable.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlpPopulateContext(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  __int64 v6; // r11
  _QWORD *result; // rax
  _QWORD *v8; // r10
  _QWORD *i; // r9
  unsigned __int64 v10; // rcx
  unsigned int v11; // ecx

  v4 = (69069 * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4)) + 1) & 0xFFFF0000 | ((1103515245
                                                                              * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4))
                                                                              + 12345) >> 16);
  v5 = v4 & *(_DWORD *)(a1 + 16);
  if ( v5 < *(_DWORD *)(a1 + 12) )
    v5 = v4 & ((2 * *(_DWORD *)(a1 + 16)) | 1);
  v6 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v11, v5 + 128);
    v5 = (v5 + 128) ^ (1 << v11);
    v6 = *(_QWORD *)(v6 + 8LL * (v11 - 7));
  }
  result = (_QWORD *)(v6 + 16LL * v5);
  v8 = result;
  for ( i = (_QWORD *)*result; i != result; i = (_QWORD *)*i )
  {
    v10 = i[2];
    if ( v10 && v10 >= a3 )
      break;
    v8 = i;
  }
  *a2 = result;
  a2[1] = v8;
  a2[2] = a3;
  return result;
}
