/*
 * XREFs of ?ScTrimString@@YAXPEAD@Z @ 0x14071F838
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14071F6CC (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     isspace @ 0x1405390B0 (isspace.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall ScTrimString(char *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  char *v5; // rdi
  int v6; // ebp
  __int64 v7; // rdi

  v1 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  if ( (_DWORD)v3 )
  {
    v4 = (int)v3 - 1LL;
    if ( v4 >= 0 )
    {
      v5 = &a1[v4];
      do
      {
        if ( !isspace(*v5) )
          break;
        *v5-- = 0;
      }
      while ( v5 - a1 >= 0 );
    }
    do
      ++v1;
    while ( a1[v1] );
    if ( (_DWORD)v1 )
    {
      v6 = 0;
      if ( (int)v1 > 0 )
      {
        v7 = 0LL;
        do
        {
          if ( !isspace(a1[v7]) )
            break;
          ++v6;
          ++v7;
        }
        while ( v7 < (int)v1 );
      }
      memmove(a1, &a1[v6], (int)v1 - v6 + 1);
    }
  }
}
