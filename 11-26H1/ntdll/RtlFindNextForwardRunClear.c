/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1800CA080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClear(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r9d
  __int64 v6; // rsi
  _DWORD *v7; // rax
  unsigned __int64 v8; // r8
  _DWORD *v9; // rcx
  int v10; // r10d
  unsigned int v11; // r10d
  __int64 v12; // r11
  unsigned int v13; // ebx
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // eax

  v3 = *a1;
  v4 = 0;
  if ( *a1 <= a2 )
  {
    *a3 = a2;
    return 0LL;
  }
  else
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = (_DWORD *)(v6 + 4 * ((unsigned __int64)a2 >> 5));
    v8 = v6 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
    v9 = v7 + 1;
    v10 = *v7 | ((1 << (a2 & 0x1F)) - 1);
    while ( 1 )
    {
      v11 = ~v10;
      if ( v11 )
        break;
      if ( (unsigned __int64)v9 > v8 )
        goto LABEL_16;
      v10 = v7[1];
      ++v7;
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v11);
    v13 = v12 + 32 * (((__int64)v7 - v6) >> 2);
    if ( v13 > v3 )
    {
LABEL_16:
      v13 = v3;
      goto LABEL_15;
    }
    v14 = ~(v11 | ((1 << v12) - 1));
    while ( 1 )
    {
      if ( v14 )
      {
        _BitScanForward64((unsigned __int64 *)&v15, v14);
        goto LABEL_12;
      }
      v4 += 32;
      if ( (unsigned __int64)(v7 + 1) > v8 )
        break;
      v14 = v7[1];
      ++v7;
    }
    LODWORD(v15) = 32;
LABEL_12:
    v16 = v3;
    v17 = v15 + 32 * (((__int64)v7 - v6) >> 2);
    if ( v17 <= v3 )
      v16 = v17;
    v4 = v16 - v13;
LABEL_15:
    *a3 = v13;
    return v4;
  }
}
