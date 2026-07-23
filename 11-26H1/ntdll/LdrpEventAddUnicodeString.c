/*
 * XREFs of LdrpEventAddUnicodeString @ 0x180098A80
 * Callers:
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrpLogEtwDllSearchResults @ 0x180098450 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpEventAddUnicodeString(__int64 a1, _WORD *a2, unsigned int a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r10
  __int16 v10; // cx
  _WORD *v11; // rcx
  int v12; // ecx
  __int64 result; // rax

  v4 = 0;
  if ( a1 && *(_WORD *)a1 )
  {
    v6 = (unsigned __int64)a3 >> 1;
    if ( v6 )
    {
      v7 = (unsigned __int64)a3 >> 1;
      v8 = 0;
      v9 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      do
      {
        if ( !(2147483646 - v6 + v7) )
          break;
        v10 = *(_WORD *)((char *)a2 + v9);
        if ( !v10 )
          break;
        *a2 = v10;
        ++v8;
        ++a2;
        --v7;
      }
      while ( v7 );
      v11 = a2 - 1;
      if ( v7 )
        v11 = a2;
      *v11 = 0;
      v12 = v8 - 1;
      if ( v7 )
        v12 = v8;
      v4 = v6 - v12;
    }
    result = a3 + 2 * (1 - v4);
    *a4 = result;
  }
  else
  {
    if ( a3 < 2 )
    {
      result = 0LL;
    }
    else
    {
      result = 2LL;
      *a2 = 0;
    }
    *a4 = result;
  }
  return result;
}
