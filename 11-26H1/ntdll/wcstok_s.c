/*
 * XREFs of wcstok_s @ 0x180134350
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *String, const wchar_t *Delimiter, wchar_t **Context)
{
  wchar_t v5; // ax
  wchar_t v6; // r11
  const wchar_t *v7; // rdx
  wchar_t v8; // r8
  wchar_t *v9; // rdi
  wchar_t *result; // rax
  const wchar_t *v11; // r8
  wchar_t v12; // dx
  wchar_t *v13; // rdx

  if ( !Context || !Delimiter )
    goto LABEL_26;
  if ( !String )
  {
    if ( *Context )
    {
      String = *Context;
      goto LABEL_6;
    }
LABEL_26:
    invalid_parameter();
    return 0LL;
  }
LABEL_6:
  v5 = *String;
  if ( *String )
  {
    v6 = *Delimiter;
    do
    {
      v7 = Delimiter;
      if ( v6 )
      {
        v8 = v6;
        do
        {
          if ( v8 == v5 )
            break;
          v8 = *++v7;
        }
        while ( *v7 );
      }
      if ( !*v7 )
        break;
      v5 = *++String;
    }
    while ( *String );
  }
  v9 = String;
  result = String;
  if ( *String )
  {
    while ( 1 )
    {
      v11 = Delimiter;
      if ( *Delimiter )
      {
        v12 = *Delimiter;
        do
        {
          if ( v12 == *String )
            break;
          v12 = *++v11;
        }
        while ( *v11 );
      }
      v13 = String + 1;
      if ( *v11 )
        break;
      ++String;
      if ( !*v13 )
        goto LABEL_23;
    }
    *String++ = 0;
  }
LABEL_23:
  *Context = String;
  if ( v9 == String )
    return 0LL;
  return result;
}
