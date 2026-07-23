/*
 * XREFs of ApiSetpSearchForApiSetA @ 0x18013B410
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x180111A5C (ApiSetQuerySchemaInfo2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSetA(_DWORD *a1, unsigned __int8 *a2, unsigned __int16 a3)
{
  unsigned int v3; // esi
  int v4; // r11d
  unsigned __int8 *v5; // rdi
  char *v7; // r10
  __int64 v8; // rbx
  char v9; // cl
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char *v14; // rax
  int v15; // edx
  unsigned __int8 *v16; // r10
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // r8

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = (char *)a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7 + 32;
      if ( (unsigned __int8)(*v7 - 65) > 0x19u )
        v9 = *v7;
      ++v7;
      v3 = v9 + a1[6] * v3;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0LL;
  v11 = 0;
  v12 = a1[3] - 1;
  while ( v11 <= v12 )
  {
    v13 = (v12 + v11) >> 1;
    v14 = (char *)a1 + (unsigned int)a1[5];
    if ( v3 >= *(_DWORD *)&v14[8 * v13] )
    {
      if ( v3 <= *(_DWORD *)&v14[8 * v13] )
      {
        v10 = (__int64)&a1[6 * *(unsigned int *)&v14[8 * v13 + 4]] + (unsigned int)a1[4];
        if ( v10 )
        {
          v15 = *(_DWORD *)(v10 + 12) >> 1;
          v16 = (unsigned __int8 *)a1 + *(unsigned int *)(v10 + 4);
          if ( !v4 || !v15 )
            return 0LL;
          while ( v4 && v15 )
          {
            v17 = *v5;
            v18 = *v16;
            if ( *v5 >= 0x41u && v17 <= 0x5Au )
              v17 += 32;
            if ( (unsigned __int8)(v18 - 65) <= 0x19u )
              v18 += 32;
            if ( v17 < v18 || v17 > v18 )
              return 0LL;
            ++v5;
            --v4;
            v16 += 2;
            --v15;
          }
        }
        return v10;
      }
      v11 = v13 + 1;
    }
    else
    {
      v12 = v13 - 1;
    }
  }
  return v10;
}
