/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x1800CD990
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x180146300 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateEntryHashTable(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // r11d
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // r8
  unsigned int v9; // r10d
  _QWORD *v10; // rdx
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  unsigned int v13; // ecx
  __int64 *v14; // rcx
  __int64 **v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *result; // rax

  v2 = *((_DWORD *)a2 + 8);
  v4 = *(_DWORD *)(a1 + 8);
  v6 = v2;
  v7 = v2 + 128;
LABEL_2:
  if ( v6 >= v4 )
    return 0LL;
  if ( v6 == v2 )
  {
    v11 = (_QWORD *)a2[3];
    v10 = a2;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v4 > 0x80 )
    {
      _BitScanReverse(&v13, v7);
      v9 = v7 ^ (1 << v13);
      v8 = *(_QWORD *)(v8 + 8LL * (v13 - 7));
    }
    else
    {
      v9 = v6;
    }
    v10 = (_QWORD *)(v8 + 16LL * v9);
    v11 = v10;
  }
  do
  {
    v12 = (_QWORD *)*v10;
    v10 = v12;
    if ( v12 == v11 )
    {
      ++v6;
      ++v7;
      goto LABEL_2;
    }
  }
  while ( !v12[2] );
  v14 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 )
    goto LABEL_16;
  v15 = (__int64 **)a2[1];
  if ( *v15 != a2 )
    goto LABEL_16;
  *v15 = v14;
  v14[1] = (__int64)v15;
  v16 = (_QWORD *)a2[3];
  if ( v16 != v11 )
  {
    if ( (_QWORD *)*v16 == v16 )
      --*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v11 == v11 )
      ++*(_DWORD *)(a1 + 24);
  }
  *((_DWORD *)a2 + 8) = v6;
  a2[3] = (__int64)v11;
  v17 = *v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 )
LABEL_16:
    __fastfail(3u);
  *a2 = v17;
  a2[1] = (__int64)v10;
  *(_QWORD *)(v17 + 8) = a2;
  result = v10;
  *v10 = a2;
  return result;
}
