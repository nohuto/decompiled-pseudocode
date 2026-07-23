/*
 * XREFs of ApiSetpFindHashInsertionPoint_V7 @ 0x1406E0688
 * Callers:
 *     ApiSetpInsertHashEntry @ 0x1406E0788 (ApiSetpInsertHashEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpFindHashInsertionPoint_V7(__int64 a1, __int64 a2, unsigned int a3, _WORD *a4)
{
  int v4; // eax
  int v9; // r9d
  int v10; // ebx
  int v11; // r11d
  int v12; // r8d
  unsigned int *v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx

  v4 = *(unsigned __int16 *)(a2 + 4);
  *a4 = 0;
  if ( !(_WORD)v4 )
    return 0LL;
  v9 = v4 - 1;
  v10 = v4 * *(unsigned __int8 *)(a2 + 8);
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  v14 = (unsigned int)(*(_DWORD *)a2 + v10);
  while ( v11 <= v9 )
  {
    v12 = (v11 + v9) >> 1;
    v13 = (unsigned int *)((unsigned int)v14 + a1 + 8LL * v12 - *(unsigned __int16 *)(a1 + 18));
    v15 = *v13;
    if ( a3 == *v13 )
      return 0x40000000LL;
    if ( v11 == v9 )
      break;
    if ( a3 >= v15 )
    {
      if ( a3 > v15 )
        v11 = v12 + 1;
    }
    else
    {
      v9 = v12 - 1;
    }
  }
  if ( v13 )
  {
    if ( v11 <= v12 )
    {
      if ( v9 >= v12 )
      {
        if ( v11 == v9 )
        {
          if ( a3 >= *v13 )
            LOWORD(v12) = v12 + 1;
          goto LABEL_22;
        }
      }
      else if ( a3 < *v13 )
      {
        goto LABEL_22;
      }
    }
    else if ( a3 < *(_DWORD *)(v14 + a1 + 8LL * v12 + 8 - *(unsigned __int16 *)(a1 + 18)) )
    {
      LOWORD(v12) = v12 + 1;
LABEL_22:
      *a4 = v12;
      return 0LL;
    }
  }
  return 3221225701LL;
}
