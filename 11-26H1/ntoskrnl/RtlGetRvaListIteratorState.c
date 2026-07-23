/*
 * XREFs of RtlGetRvaListIteratorState @ 0x14099B1B0
 * Callers:
 *     MiImageCfgEnumRvaListFirst @ 0x14099B138 (MiImageCfgEnumRvaListFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetRvaListIteratorState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r11d
  unsigned int v5; // r9d
  int v6; // eax
  int v7; // esi
  __int64 v8; // rbx
  const signed __int64 *v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  unsigned int *v13; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 > 1 )
  {
    v5 = 0;
    v6 = 1;
    v7 = *(_DWORD *)(a2 + 4) * v2;
    v8 = 0LL;
    v9 = *(const signed __int64 **)(a1 + 40);
    do
    {
      if ( _bittest64(v9, v7 + v5) )
      {
        v10 = *(_QWORD *)(a1 + 48);
        if ( v10 )
          v11 = *(_DWORD *)(v8 + v10);
        else
          v11 = v6;
        v3 |= v11;
      }
      ++v5;
      v6 = __ROL4__(v6, 1);
      v8 += 4LL;
    }
    while ( v5 < v2 );
    return v3;
  }
  if ( v2 != 1 )
    return v3;
  v13 = *(unsigned int **)(a1 + 48);
  if ( v13 )
    return *v13;
  else
    return 1LL;
}
