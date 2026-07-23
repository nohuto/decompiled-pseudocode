/*
 * XREFs of _splitpath_helper @ 0x1801282D0
 * Callers:
 *     _splitpath @ 0x180128240 (_splitpath.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     strncpy_s @ 0x180133CE0 (strncpy_s.c)
 */

__int64 __fastcall splitpath_helper(
        char *Source,
        char *Destination,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        char *Destinationa,
        unsigned __int64 a7,
        char *a8,
        unsigned __int64 a9)
{
  unsigned __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // rax
  char *v15; // rbx
  char v16; // al
  char *v17; // rbp
  const char *v18; // rsi
  char *v19; // rbx
  rsize_t v20; // rbx
  rsize_t v21; // rbx

  v12 = a3;
  v13 = 0;
  if ( !Source )
    goto LABEL_4;
  if ( Destination )
  {
    if ( !a3 )
      goto LABEL_4;
  }
  else if ( a3 )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_58;
  }
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_4;
  }
  else if ( a5 )
  {
    goto LABEL_4;
  }
  if ( Destinationa )
  {
    if ( !a7 )
      goto LABEL_4;
  }
  else if ( a7 )
  {
    goto LABEL_4;
  }
  if ( a8 )
  {
    if ( !a9 )
      goto LABEL_4;
  }
  else if ( a9 )
  {
    goto LABEL_4;
  }
  v14 = 1LL;
  v15 = Source;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v14;
  }
  while ( v14 );
  if ( *v15 == 58 )
  {
    if ( Destination )
    {
      if ( a3 < 3 )
        goto LABEL_59;
      strncpy_s(Destination, 0xFFFFFFFFFFFFFFFFuLL, Source, 2uLL);
      v13 = 0;
    }
    Source = v15 + 1;
  }
  else if ( Destination )
  {
    *Destination = 0;
  }
  v16 = *Source;
  v17 = 0LL;
  v18 = 0LL;
  v19 = Source;
  if ( !*Source )
    goto LABEL_40;
  do
  {
    if ( v16 == 47 || v16 == 92 )
    {
      v17 = v19 + 1;
    }
    else if ( v16 == 46 )
    {
      v18 = v19;
    }
    v16 = *++v19;
  }
  while ( *v19 );
  if ( !v17 )
  {
LABEL_40:
    if ( a4 )
      *a4 = 0;
LABEL_42:
    if ( v18 && v18 >= Source )
    {
      if ( !Destinationa )
      {
LABEL_47:
        if ( !a8 )
          return 0LL;
        v20 = v19 - v18;
        if ( a9 > v20 )
        {
          strncpy_s(a8, 0xFFFFFFFFFFFFFFFFuLL, v18, v20);
          return 0LL;
        }
        goto LABEL_56;
      }
      if ( a7 > v18 - Source )
      {
        strncpy_s(Destinationa, 0xFFFFFFFFFFFFFFFFuLL, Source, v18 - Source);
        goto LABEL_47;
      }
LABEL_56:
      v13 = 0;
      goto LABEL_57;
    }
    if ( Destinationa )
    {
      v21 = v19 - Source;
      if ( a7 <= v21 )
        goto LABEL_56;
      strncpy_s(Destinationa, 0xFFFFFFFFFFFFFFFFuLL, Source, v21);
    }
    if ( a8 )
      *a8 = 0;
    return 0LL;
  }
  if ( !a4 )
  {
LABEL_39:
    Source = v17;
    goto LABEL_42;
  }
  if ( a5 > v17 - Source )
  {
    strncpy_s(a4, 0xFFFFFFFFFFFFFFFFuLL, Source, v17 - Source);
    goto LABEL_39;
  }
LABEL_57:
  v12 = a3;
LABEL_58:
  if ( Destination )
  {
LABEL_59:
    if ( v12 )
      *Destination = 0;
  }
  if ( a4 && a5 )
    *a4 = 0;
  if ( Destinationa && a7 )
    *Destinationa = 0;
  if ( a8 && a9 )
    *a8 = 0;
  if ( Source && !v13 )
    return 34LL;
  invalid_parameter();
  return 22LL;
}
