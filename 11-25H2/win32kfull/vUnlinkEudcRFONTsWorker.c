/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x14030E570
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x14030E238 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     vMakeInactiveHelper @ 0x14030DF34 (vMakeInactiveHelper.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsWorker(struct _LIST_ENTRY **a1, struct PFF *a2)
{
  char *v4; // rsi
  char *i; // rbx
  __int64 j; // rbp
  struct _LIST_ENTRY **v7; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct PFF *result; // rax
  struct PFF *v10; // rdi

  while ( 1 )
  {
    result = SkipInvalidPff(a2);
    v10 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v4 = (char *)result + 72;
      for ( i = (char *)*((_QWORD *)result + 9); i != v4; i = *(char **)i )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 90); j = (unsigned int)(j + 1) )
        {
          v7 = (struct _LIST_ENTRY **)(*((_QWORD *)i + 33) + 8 * j);
          if ( *v7 )
          {
            Blink = (*v7)[7].Blink;
            if ( Blink == *a1 || Blink == a1[1] )
              vMakeInactiveHelper(v7);
          }
        }
        *((_DWORD *)i + 58) = 0;
      }
    }
    a2 = (struct PFF *)*((_QWORD *)v10 + 1);
  }
  return result;
}
