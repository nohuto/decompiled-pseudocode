/*
 * XREFs of MiImageRvaRawEnumNext @ 0x140A22690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // eax
  int v5; // esi
  unsigned int v6; // ebp
  _DWORD *v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // ecx
  _DWORD *v16; // r8
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 296) )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 128);
  v5 = 0;
  v6 = 0;
  v7 = (_DWORD *)(a1 + 136);
  v8 = a1 + 136;
  v9 = 0;
  if ( v4 )
  {
    v10 = *(_DWORD *)(a1 + 128);
    do
    {
      v4 = v10;
      if ( *(_QWORD *)(v8 + 16) )
      {
        v11 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 == *(_DWORD *)(a1 + 296) )
        {
          v12 = guard_dispatch_icall_no_overrides(a1, v8 + 24);
          *(_DWORD *)v8 = v12;
          v11 = v12;
          v10 = *(_DWORD *)(a1 + 128);
        }
        v4 = v10;
        if ( v11 && (!v6 || v6 >= v11) )
          v6 = v11;
      }
      ++v9;
      v8 += 40LL;
      v10 = v4;
    }
    while ( v9 < v4 );
  }
  if ( a2 && v6 )
  {
    v13 = 0;
    if ( v4 )
    {
      v14 = v4;
      do
      {
        if ( *v7 == v6 )
          v13 |= v7[1];
        v7 += 10;
        --v14;
      }
      while ( v14 );
      v15 = 0;
      v16 = (_DWORD *)(a1 + 112);
      do
      {
        if ( (v13 & *v16) != 0 )
          v5 |= 1 << v15;
        ++v15;
        ++v16;
      }
      while ( v15 < v4 );
    }
    *a2 = v5;
  }
  result = v6;
  *(_DWORD *)(a1 + 296) = v6;
  return result;
}
