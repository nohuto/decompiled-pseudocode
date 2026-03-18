/*
 * XREFs of sub_14002B7D8 @ 0x14002B7D8
 * Callers:
 *     sub_14002CA30 @ 0x14002CA30 (sub_14002CA30.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14002B7D8(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned int v5; // r11d
  __int64 i; // rax
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 j; // r10
  __int64 v10; // rcx

  if ( a2 && a1 && *a2 != -1 )
  {
    if ( *(_DWORD *)(a1 + 4092) )
    {
LABEL_24:
      *a2 = -1;
    }
    else
    {
      v3 = 0LL;
      v4 = 1024;
      while ( (unsigned int)v3 < 0x400uLL )
      {
        if ( !*(_DWORD *)(a1 + 4 * v3) )
        {
          v4 = v3;
          break;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      v5 = 1024;
      for ( i = 0LL; (unsigned int)i < 0x400uLL; i = (unsigned int)(i + 1) )
      {
        if ( !a2[i] )
        {
          v5 = i;
          break;
        }
      }
      v7 = 0LL;
      v8 = v5;
      while ( (unsigned int)v7 < v4 )
      {
        for ( j = 0LL; (unsigned int)j < v5; j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(a1 + 4 * v7) == a2[j] )
            goto LABEL_23;
        }
        v10 = v8;
        if ( v8 >= 0x400uLL )
          goto LABEL_24;
        ++v8;
        a2[v10] = *(_DWORD *)(a1 + 4 * v7);
LABEL_23:
        v7 = (unsigned int)(v7 + 1);
      }
    }
  }
}
