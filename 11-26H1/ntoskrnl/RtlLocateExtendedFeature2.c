/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x1403DA020
 * Callers:
 *     KeVerifyContextXStateCetU @ 0x1403D9C14 (KeVerifyContextXStateCetU.c)
 *     RtlLocateExtendedFeature @ 0x1403D9FF0 (RtlLocateExtendedFeature.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateExtendedFeature2(_DWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rdi
  int v7; // ebp
  __int64 v8; // rsi
  char *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  _DWORD *v16; // r8
  int v17; // eax

  v4 = a2;
  v5 = a2 - 2;
  if ( a2 - 2 > 0x3D )
    return 0LL;
  v6 = 1LL << a2;
  if ( ((*(_QWORD *)a3 | *(_QWORD *)(a3 + 816)) & (1LL << a2)) == 0 )
    return 0LL;
  v7 = *(_DWORD *)(a3 + 20);
  if ( (v7 & 0xFFFFFFF8) != 0 )
    return 0LL;
  v8 = (int)a1[4];
  if ( *a1 > (int)v8 )
    return 0LL;
  if ( *a1 + a1[1] < (int)v8 + a1[5] )
    return 0LL;
  v9 = (char *)a1 + v8;
  if ( !(_DWORD *)((char *)a1 + v8) )
    return 0LL;
  if ( a4 )
  {
    if ( (v7 & 2) != 0 )
      v17 = *(_DWORD *)(a3 + 4 * v4 + 556);
    else
      v17 = *(_DWORD *)(a3 + 8 * v4 + 28);
    *a4 = v17;
  }
  if ( (*(_DWORD *)(a3 + 20) & 2) == 0 )
    return &v9[*(unsigned int *)(a3 + 8 * v4 + 24) - 512];
  v10 = *((_QWORD *)v9 + 1);
  if ( (v6 & v10) == 0 )
    return 0LL;
  v11 = *(_QWORD *)(a3 + 544);
  v12 = 576LL;
  if ( (unsigned int)v4 > 2 )
  {
    v14 = 4LL;
    v15 = v5;
    v16 = (_DWORD *)(a3 + 564);
    do
    {
      if ( (v14 & v10) != 0 )
      {
        if ( (v14 & v11) != 0 )
          LODWORD(v12) = (v12 + 63) & 0xFFFFFFC0;
        v12 = (unsigned int)(*v16 + v12);
      }
      v14 = __ROL8__(v14, 1);
      ++v16;
      --v15;
    }
    while ( v15 );
  }
  if ( (v6 & v11) != 0 )
    v12 = ((_DWORD)v12 + 63) & 0xFFFFFFC0;
  return &v9[v12 - 512];
}
