/*
 * XREFs of ?WriteAbsolute8@@YAHPEBEPEAEH0@Z @ 0x1401EECB8
 * Callers:
 *     ?EncodeRLE8@@YAHPEAE0III@Z @ 0x1401EEA6C (-EncodeRLE8@@YAHPEAE0III@Z.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall WriteAbsolute8(unsigned __int8 *Src, unsigned __int8 *a2, int a3, unsigned __int8 *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned __int8 *v7; // rsi

  v4 = a3;
  if ( a3 == 1 )
  {
    v5 = 2;
  }
  else if ( a3 == 2 )
  {
    v5 = 4;
  }
  else
  {
    v5 = a3 + 3;
    if ( (a3 & 1) == 0 )
      v5 = a3 + 2;
  }
  if ( !a2 )
    return v5;
  if ( &a2[v5] > a4 )
    return 0LL;
  if ( a3 == 1 )
  {
    *a2 = 1;
    a2[1] = *Src;
    return 2LL;
  }
  else
  {
    v7 = a2 + 2;
    if ( a3 == 2 )
    {
      *a2 = 1;
      a2[1] = *Src;
      *v7 = 1;
      a2[3] = Src[1];
      return 4LL;
    }
    else
    {
      *a2 = 0;
      a2[1] = a3;
      memmove(v7, Src, a3);
      result = v5;
      if ( (v4 & 1) != 0 )
        v7[v4] = 0;
    }
  }
  return result;
}
