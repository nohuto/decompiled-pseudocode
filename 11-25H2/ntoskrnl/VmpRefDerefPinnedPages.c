/*
 * XREFs of VmpRefDerefPinnedPages @ 0x14063F1F0
 * Callers:
 *     VmpCheckPinAndReference @ 0x14063E47C (VmpCheckPinAndReference.c)
 *     VmpCheckUnpinAndDereference @ 0x14063E570 (VmpCheckUnpinAndDereference.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 */

unsigned __int64 *__fastcall VmpRefDerefPinnedPages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 **v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 **v16; // rcx
  __int64 v17; // rsi
  int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  char v23; // [rsp+68h] [rbp+20h]

  v23 = a4;
  v5 = *(_QWORD *)(a1 + 56);
  v7 = a2;
  if ( !v5 || a2 < *(_QWORD *)(v5 + 24) || a2 > *(_QWORD *)(v5 + 32) )
  {
    v9 = a1 + 40;
    v5 = *(_QWORD *)v9;
    if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && v5 )
      v5 ^= v9;
    while ( v5 )
    {
      if ( a2 >= *(_QWORD *)(v5 + 24) )
      {
        if ( a2 <= *(_QWORD *)(v5 + 32) )
          break;
        v10 = *(_QWORD *)(v5 + 8);
      }
      else
      {
        v10 = *(_QWORD *)v5;
      }
      if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && v10 )
        v5 ^= v10;
      else
        v5 = v10;
    }
  }
  v11 = 0LL;
  do
  {
    v12 = (unsigned __int64 **)(v5 + 8);
    v13 = v5;
    result = *(unsigned __int64 **)(v5 + 8);
    v15 = v5;
    if ( result )
    {
      v16 = (unsigned __int64 **)*result;
      v5 = *(_QWORD *)(v5 + 8);
      if ( *result )
      {
        do
        {
          result = *v16;
          v5 = (unsigned __int64)v16;
          v16 = (unsigned __int64 **)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v15 )
          break;
        v15 = v5;
      }
    }
    if ( v7 <= *(_QWORD *)(v13 + 24) )
      v17 = 0LL;
    else
      v17 = (unsigned int)(v7 - *(_DWORD *)(v13 + 24));
    v18 = a3;
    if ( a3 >= *(_QWORD *)(v13 + 32) )
      v18 = *(_DWORD *)(v13 + 32);
    v19 = v18 - *(_DWORD *)(v13 + 24);
    while ( (unsigned int)v17 <= v19 )
    {
      if ( a5 )
      {
        if ( (a4 & 1) != 0 )
        {
          *(_BYTE *)(v17 + v13 + 40) = 0;
        }
        else if ( (*(_BYTE *)(v17 + v13 + 40))-- != 1 )
        {
          goto LABEL_37;
        }
        ++v11;
      }
      else
      {
        ++*(_BYTE *)(v17 + v13 + 40);
      }
LABEL_37:
      v17 = (unsigned int)(v17 + 1);
    }
    v7 = *(_QWORD *)(v13 + 32) + 1LL;
    if ( v11 )
    {
      v21 = 0;
      v22 = *(_DWORD *)(v13 + 32) - *(_DWORD *)(v13 + 24) + 1;
      if ( *(_DWORD *)(v13 + 32) - *(_DWORD *)(v13 + 24) != -1 )
      {
        result = (unsigned __int64 *)(v13 + 40);
        do
        {
          if ( *(_BYTE *)result )
            break;
          ++v21;
          result = (unsigned __int64 *)((char *)result + 1);
        }
        while ( v21 < v22 );
      }
      if ( v21 == v22 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), (PRTL_BALANCED_NODE)v13);
        result = *(unsigned __int64 **)(a5 + 8);
        if ( *result != a5 )
          __fastfail(3u);
        a4 = v23;
        *(_QWORD *)v13 = a5;
        *v12 = result;
        *result = v13;
        *(_QWORD *)(a5 + 8) = v13;
        if ( *(_QWORD *)(a1 + 56) == v13 )
          *(_QWORD *)(a1 + 56) = 0LL;
      }
    }
  }
  while ( a3 > *(_QWORD *)(v13 + 32) );
  return result;
}
