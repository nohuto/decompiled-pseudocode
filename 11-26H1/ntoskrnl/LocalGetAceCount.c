/*
 * XREFs of LocalGetAceCount @ 0x140A7C8D0
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     FContainCallBackAce @ 0x140900EB0 (FContainCallBackAce.c)
 */

__int64 __fastcall LocalGetAceCount(wchar_t *a1, wchar_t *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  wchar_t *v6; // rbx
  int v7; // ebp
  BOOL v8; // r14d
  int i; // r8d
  bool v11; // zf
  int v12; // ecx
  wchar_t v13; // ax

  v3 = 0;
  *a3 = 0;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  if ( !(unsigned int)FContainCallBackAce(a1) )
  {
    for ( i = 0; v6 < a2; ++v6 )
    {
      if ( *v6 == 59 )
      {
        ++v3;
      }
      else if ( *v6 != 40 )
      {
        i = 1;
      }
    }
    if ( v3 != 5 * (v3 / 5) || !v3 && i )
      return 87LL;
    *a3 = v3 / 5;
    return 0LL;
  }
  v11 = v6 == a2;
  if ( v6 < a2 )
  {
    while ( *v6 == 32 )
    {
      v11 = ++v6 == a2;
      if ( v6 >= a2 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  if ( !v11 )
  {
LABEL_15:
    if ( *v6 == 40 )
    {
      v12 = 0;
      goto LABEL_17;
    }
  }
  v12 = 1;
LABEL_17:
  while ( v6 < a2 )
  {
    v13 = *v6;
    if ( *v6 == 32 )
      goto LABEL_23;
    if ( v12 )
      return 87LL;
    switch ( v13 )
    {
      case '(':
        if ( v8 )
          goto LABEL_25;
        ++v7;
        ++v6;
        break;
      case ')':
        if ( v8 )
          goto LABEL_25;
        if ( !v7 )
          return 1336LL;
        if ( v7 == 1 )
        {
          if ( v3 < 5 )
            return 1336LL;
          v3 = 0;
          ++*a3;
        }
        --v7;
        ++v6;
        break;
      case ';':
        ++v3;
        ++v6;
        break;
      default:
LABEL_23:
        if ( v13 == 34 )
          v8 = !v8;
LABEL_25:
        ++v6;
        break;
    }
  }
  if ( !v7 )
    return 0LL;
  *a3 = 0;
  return 1336LL;
}
