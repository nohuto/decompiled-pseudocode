/*
 * XREFs of WheapInsertPageToList @ 0x1406DA54C
 * Callers:
 *     WheaPersistBadPageToRegistry @ 0x1406DA108 (WheaPersistBadPageToRegistry.c)
 * Callees:
 *     WheapFormatBadPageList @ 0x1406DA37C (WheapFormatBadPageList.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall WheapInsertPageToList(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rax
  char v8; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // r10
  unsigned __int64 *v12; // rbx

  v5 = *a3;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      if ( a2 <= *(_QWORD *)a1 )
      {
        if ( a2 >= *(_QWORD *)a1 )
          return 0;
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
        *(_QWORD *)a1 = a2;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = a2;
      }
      *a3 = 2;
    }
    else
    {
      v6 = 0;
      v7 = 0LL;
      v8 = 1;
      while ( (unsigned int)v7 < (int)v5 - 1 )
      {
        v9 = *(_QWORD *)(a1 + 8 * v7);
        v10 = (unsigned int)(v7 + 1);
        if ( v9 >= *(_QWORD *)(a1 + 8 * v10) )
        {
          v8 = 0;
          break;
        }
        if ( v9 == a2 )
          return 0;
        v7 = (unsigned int)v10;
        if ( v9 >= a2 )
          LODWORD(v10) = v6;
        v6 = v10;
      }
      *a3 = v5 + 1;
      if ( v8 )
      {
        v12 = (unsigned __int64 *)(a1 + 8LL * v6);
        memmove((void *)(a1 + 8LL * (v6 + 1)), v12, 8LL * ((unsigned int)v5 - v6));
        *v12 = a2;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * v5) = a2;
        WheapFormatBadPageList((char *)a1, v5 + 1, a3);
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = a2;
    *a3 = 1;
  }
  return 1;
}
