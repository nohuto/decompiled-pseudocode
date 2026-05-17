/*
 * XREFs of RtlLookupEntryHashTable @ 0x1800D1750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlLookupEntryHashTable(__int64 a1, unsigned __int64 a2, char *a3)
{
  char *v4; // r11
  int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // r8
  _QWORD *i; // rdx
  unsigned __int64 v14; // rax
  unsigned int v16; // ecx
  char v17; // [rsp+0h] [rbp-28h] BYREF

  v4 = &v17;
  v5 = *(_DWORD *)(a1 + 4);
  if ( a3 )
    v4 = a3;
  v7 = (69069 * ((unsigned int)a2 >> v5) + 1) & 0xFFFF0000 | ((1103515245 * ((unsigned int)a2 >> v5) + 12345) >> 16);
  v8 = v7 & *(_DWORD *)(a1 + 16);
  if ( v8 < *(_DWORD *)(a1 + 12) )
    v8 = v7 & ((2 * *(_DWORD *)(a1 + 16)) | 1);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v16, v8 + 128);
    v8 = (v8 + 128) ^ (1 << v16);
    v9 = *(_QWORD *)(v9 + 8LL * (v16 - 7));
  }
  v11 = (_QWORD *)(v9 + 16LL * v8);
  v12 = v11;
  for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
  {
    v14 = i[2];
    if ( v14 && v14 >= a2 )
      break;
    v12 = i;
  }
  *(_QWORD *)v4 = v11;
  *((_QWORD *)v4 + 1) = v12;
  *((_QWORD *)v4 + 2) = a2;
  if ( v11 == (_QWORD *)*v12 )
    return 0LL;
  if ( *(_QWORD *)(*v12 + 16LL) == a2 )
    return (_QWORD *)*v12;
  return (_QWORD *)v10;
}
