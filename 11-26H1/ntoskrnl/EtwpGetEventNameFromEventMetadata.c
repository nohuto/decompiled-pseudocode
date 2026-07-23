/*
 * XREFs of EtwpGetEventNameFromEventMetadata @ 0x1404140D0
 * Callers:
 *     EtwpTraceLostEvent @ 0x140258AC8 (EtwpTraceLostEvent.c)
 *     EtwpApplyEventNameFilter @ 0x140413C18 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     strnlen @ 0x140539F20 (strnlen.c)
 */

const char *__fastcall EtwpGetEventNameFromEventMetadata(__int64 a1, unsigned int a2, _WORD *a3)
{
  const char *v4; // rbx
  const char *v5; // rax
  char *v6; // rcx
  __int16 v7; // di
  __int16 v8; // ax

  *a3 = 0;
  if ( a2 >= 3 )
  {
    v4 = (const char *)(a1 + 2);
    v5 = (const char *)(a1 + a2);
    while ( 1 )
    {
      v6 = (char *)v4;
      if ( v4 == v5 )
        break;
      ++v4;
      if ( *v6 >= 0 )
      {
        if ( v4 == v5 )
          return 0LL;
        v7 = (_WORD)v5 - (_WORD)v4;
        v8 = strnlen(v4, (unsigned __int16)((_WORD)v5 - (_WORD)v4));
        *a3 = v8;
        if ( v8 != v7 )
          return v4;
        *a3 = 0;
        return 0LL;
      }
    }
  }
  return 0LL;
}
