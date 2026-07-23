/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x14041CA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r10d
  __int64 v8; // r15
  _DWORD *v9; // rax
  unsigned __int64 v10; // r9
  _DWORD *v11; // rcx
  int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // r10d
  unsigned int v19; // eax

  v4 = *a1;
  v5 = 0;
  if ( *a1 <= a2 )
  {
    *a4 = a2;
    return 0LL;
  }
  else
  {
    v8 = *((_QWORD *)a1 + 1);
    v9 = (_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 5));
    v10 = v8 + 4 * ((unsigned __int64)(v4 - 1) >> 5);
    v11 = v9 + 1;
    v12 = *v9 | ((1 << (a2 & 0x1F)) - 1);
    while ( 1 )
    {
      v13 = ~v12;
      if ( v13 )
        break;
      if ( (unsigned __int64)v11 > v10 )
        goto LABEL_19;
      v12 = v9[1];
      ++v9;
      ++v11;
    }
    _BitScanForward64((unsigned __int64 *)&v14, v13);
    v15 = v14 + 32 * (((__int64)v9 - v8) >> 2);
    if ( v15 > v4 )
    {
LABEL_19:
      v15 = v4;
      goto LABEL_17;
    }
    v16 = ~(v13 | ((1 << v14) - 1));
    while ( 1 )
    {
      if ( v16 )
      {
        _BitScanForward64((unsigned __int64 *)&v17, v16);
        goto LABEL_13;
      }
      if ( v5 > a3 )
        break;
      v5 += 32;
      if ( (unsigned __int64)(v9 + 1) > v10 )
        break;
      v16 = v9[1];
      ++v9;
    }
    LODWORD(v17) = 32;
LABEL_13:
    v18 = v4;
    v19 = v17 + 32 * (((__int64)v9 - v8) >> 2);
    if ( v19 <= v4 )
      v18 = v19;
    v5 = v18 - v15;
    if ( v5 > a3 )
      v5 = a3;
LABEL_17:
    *a4 = v15;
    return v5;
  }
}
