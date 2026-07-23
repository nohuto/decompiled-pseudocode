/*
 * XREFs of RtlFindNextAlignedForwardRunClear @ 0x1404631D0
 * Callers:
 *     EtwpFindUserBufferSpace @ 0x140A14940 (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextAlignedForwardRunClear(int *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  int v4; // edx
  unsigned int v5; // eax
  unsigned int v8; // r9d
  const signed __int64 *v9; // r11
  char *v10; // rdi
  char *i; // r10
  __int64 v12; // rax
  int v13; // ebx
  unsigned int j; // ecx
  int v15; // r8d
  unsigned int v17; // ecx

  v3 = *a1;
  v4 = 1;
  v5 = 1;
  v8 = 0;
  do
    v4 |= 1 << v5++;
  while ( v5 < 0x20 );
  v9 = (const signed __int64 *)*((_QWORD *)a1 + 1);
  v10 = (char *)v9 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
LABEL_4:
  for ( i = (char *)v9 + 4 * ((unsigned __int64)v8 >> 5); i <= v10; i += 4 )
  {
    v12 = v8 & 0x1F;
    v8 &= 0xFFFFFFE0;
    v13 = *((_DWORD *)qword_1400195D0 + v12) | *(_DWORD *)i;
    if ( (v13 & v4) == v4 )
    {
      v8 += 32;
    }
    else
    {
      for ( j = 0; j < 0x20; ++j )
      {
        if ( !_bittest(&v13, j) )
        {
          v9 = (const signed __int64 *)*((_QWORD *)a1 + 1);
          v15 = 0;
          while ( v8 < v3 && !_bittest64(v9, v8) )
          {
            ++v8;
            if ( ++v15 == a3 )
              return v8 - v15;
          }
          if ( v15 )
          {
            v17 = v15 + j + 1;
            if ( v17 >= 0x20 )
            {
              ++v8;
              goto LABEL_4;
            }
            j = v17 - 1;
          }
        }
        ++v8;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
