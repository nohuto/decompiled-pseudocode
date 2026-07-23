/*
 * XREFs of VmpRefDerefPinnedPages @ 0x1406C563C
 * Callers:
 *     VmpCheckPinAndReference @ 0x1406C47E8 (VmpCheckPinAndReference.c)
 *     VmpCheckUnpinAndDereference @ 0x1406C48D0 (VmpCheckUnpinAndDereference.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

unsigned __int64 __fastcall VmpRefDerefPinnedPages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 *v11; // r12
  _QWORD *v12; // r13
  unsigned __int64 **v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rdi
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v22; // ecx
  _BYTE *v23; // rdx
  unsigned __int64 v24; // [rsp+70h] [rbp+18h]
  char v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = a2;
  if ( !v5 || a2 < *(_QWORD *)(v5 + 24) || a2 > *(_QWORD *)(v5 + 32) )
  {
    v8 = a1 + 56;
    v5 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v5 )
      v5 ^= v8;
    while ( v5 )
    {
      if ( a2 < *(_QWORD *)(v5 + 24) )
      {
        v9 = *(_QWORD *)v5;
      }
      else
      {
        if ( a2 <= *(_QWORD *)(v5 + 32) )
          break;
        v9 = *(_QWORD *)(v5 + 8);
      }
      if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v9 )
        v5 ^= v9;
      else
        v5 = v9;
    }
  }
  v10 = 0LL;
  do
  {
    v11 = (unsigned __int64 *)(v5 + 8);
    v12 = (_QWORD *)v5;
    v13 = *(unsigned __int64 ***)(v5 + 8);
    v14 = v5;
    v15 = v5;
    result = v5;
    if ( v13 )
    {
      v5 = *(_QWORD *)(v5 + 8);
      v17 = *v13;
      if ( v17 )
      {
        do
        {
          result = *v17;
          v5 = (unsigned __int64)v17;
          v17 = (unsigned __int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == result )
          break;
        result = v5;
      }
    }
    if ( v6 <= *(_QWORD *)(v14 + 24) )
      v18 = 0LL;
    else
      v18 = (unsigned int)(v6 - *(_DWORD *)(v14 + 24));
    v19 = a3;
    if ( a3 >= *(_QWORD *)(v14 + 32) )
      v19 = *(_DWORD *)(v14 + 32);
    v20 = v19 - *(_DWORD *)(v14 + 24);
    while ( (unsigned int)v18 <= v20 )
    {
      if ( a5 )
      {
        if ( (a4 & 1) != 0 )
        {
          *(_BYTE *)(v18 + v15 + 40) = 0;
        }
        else if ( (*(_BYTE *)(v18 + v15 + 40))-- != 1 )
        {
          goto LABEL_37;
        }
        ++v10;
      }
      else
      {
        ++*(_BYTE *)(v18 + v15 + 40);
      }
LABEL_37:
      v18 = (unsigned int)(v18 + 1);
    }
    v6 = *(_QWORD *)(v14 + 32) + 1LL;
    if ( v10 )
    {
      result = 0LL;
      v22 = *(_DWORD *)(v14 + 32) - *(_DWORD *)(v14 + 24) + 1;
      if ( *(_DWORD *)(v14 + 32) - *(_DWORD *)(v14 + 24) == -1 )
      {
LABEL_44:
        if ( (_DWORD)result == v22 )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), (PRTL_BALANCED_NODE)v14);
          result = *(_QWORD *)(a5 + 8);
          if ( *(_QWORD *)result != a5 )
            __fastfail(3u);
          a3 = v24;
          a4 = v25;
          *v12 = a5;
          *v11 = result;
          *(_QWORD *)result = v14;
          *(_QWORD *)(a5 + 8) = v14;
          if ( *(_QWORD *)(a1 + 72) == v14 )
            *(_QWORD *)(a1 + 72) = 0LL;
        }
      }
      else
      {
        v23 = (_BYTE *)(v14 + 40);
        while ( !*v23 )
        {
          result = (unsigned int)(result + 1);
          ++v23;
          if ( (unsigned int)result >= v22 )
            goto LABEL_44;
        }
      }
    }
  }
  while ( a3 > *(_QWORD *)(v14 + 32) );
  return result;
}
