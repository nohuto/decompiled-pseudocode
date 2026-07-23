/*
 * XREFs of ApiSetpSearchForApiSetA @ 0x1406DD58C
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x1406DD094 (ApiSetQuerySchemaInfo2.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DEC64 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSetA(_DWORD *a1, unsigned __int8 *a2, unsigned __int16 a3)
{
  unsigned int v3; // esi
  int v4; // r11d
  unsigned __int8 *v5; // rdi
  char *v7; // r10
  int v8; // ebp
  __int64 v9; // rbx
  char v10; // cl
  __int64 v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  char *v15; // r14
  int v16; // edx
  unsigned __int8 *v17; // r10
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // r8

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = (char *)a2;
  if ( a3 )
  {
    v8 = a1[6];
    v9 = a3;
    do
    {
      v10 = *v7 + 32;
      if ( (unsigned __int8)(*v7 - 65) > 0x19u )
        v10 = *v7;
      ++v7;
      v3 = v10 + v8 * v3;
      --v9;
    }
    while ( v9 );
  }
  v11 = 0LL;
  v12 = 0;
  v13 = a1[3] - 1;
  while ( v12 <= v13 )
  {
    v14 = (v13 + v12) >> 1;
    v15 = (char *)a1 + (unsigned int)a1[5];
    if ( v3 >= *(_DWORD *)&v15[8 * v14] )
    {
      if ( v3 <= *(_DWORD *)&v15[8 * v14] )
      {
        v11 = (__int64)&a1[6 * *(unsigned int *)&v15[8 * v14 + 4]] + (unsigned int)a1[4];
        if ( v11 )
        {
          v16 = *(_DWORD *)(v11 + 12) >> 1;
          v17 = (unsigned __int8 *)a1 + *(unsigned int *)(v11 + 4);
          if ( !v4 || !v16 )
            return 0LL;
          while ( v4 && v16 )
          {
            v18 = *v5;
            v19 = *v17;
            if ( *v5 >= 0x41u && v18 <= 0x5Au )
              v18 += 32;
            if ( (unsigned __int8)(v19 - 65) <= 0x19u )
              v19 += 32;
            if ( v18 < v19 || v18 > v19 )
              return 0LL;
            ++v5;
            --v4;
            v17 += 2;
            --v16;
          }
        }
        return v11;
      }
      v12 = v14 + 1;
    }
    else
    {
      v13 = v14 - 1;
    }
  }
  return v11;
}
