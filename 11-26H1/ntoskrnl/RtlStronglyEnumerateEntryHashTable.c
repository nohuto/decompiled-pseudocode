/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1404876E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  __int64 v7; // r11
  unsigned int v8; // r9d
  _QWORD *v9; // rcx
  _QWORD *v10; // r9
  _QWORD *result; // rax
  unsigned int v12; // ecx

  v2 = *(_DWORD *)(a2 + 32);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v2;
  v6 = v2 + 128;
LABEL_2:
  if ( v5 >= v4 )
    return 0LL;
  if ( v5 == v2 )
  {
    v9 = *(_QWORD **)a2;
    v10 = *(_QWORD **)(a2 + 24);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( v4 > 0x80 )
    {
      _BitScanReverse(&v12, v6);
      v8 = v6 ^ (1 << v12);
      v7 = *(_QWORD *)(v7 + 8LL * (v12 - 7));
    }
    else
    {
      v8 = v5;
    }
    v9 = (_QWORD *)(v7 + 16LL * v8);
    v10 = v9;
  }
  do
  {
    result = (_QWORD *)*v9;
    v9 = result;
    if ( result == v10 )
    {
      ++v5;
      ++v6;
      goto LABEL_2;
    }
  }
  while ( !result[2] );
  *(_DWORD *)(a2 + 32) = v5;
  *(_QWORD *)(a2 + 24) = v10;
  *(_QWORD *)a2 = result;
  return result;
}
