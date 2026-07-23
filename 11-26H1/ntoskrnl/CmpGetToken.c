/*
 * XREFs of CmpGetToken @ 0x140CBE05C
 * Callers:
 *     CmpParseInfBuffer @ 0x140CBE2F8 (CmpParseInfBuffer.c)
 * Callees:
 *     isspace @ 0x1405390B0 (isspace.c)
 *     strchr @ 0x140539E80 (strchr.c)
 *     strncpy_s @ 0x14053EC50 (strncpy_s.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall CmpGetToken(const char **a1, unsigned __int64 a2, __int64 a3)
{
  const char *i; // rdi
  int v7; // eax
  const char *v8; // rbx
  const char *v9; // r15
  const char *v10; // rbx
  const char *v11; // r12
  const char *v12; // rax
  const char *v13; // r13
  __int64 v14; // rbx
  char *Pool2; // rax
  char *v16; // rbp
  const char *v17; // rdi
  const char *j; // rbx
  int v19; // ecx

  *(_BYTE *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  while ( 1 )
  {
    for ( i = *a1; (unsigned __int64)i < a2 && *i != 10 && isspace(*(unsigned __int8 *)i); ++i )
      ;
    if ( (unsigned __int64)i >= a2 )
      goto LABEL_57;
    if ( *i == 35 || *i == 59 )
    {
      do
      {
        if ( *i == 10 )
          break;
        ++i;
      }
      while ( (unsigned __int64)i < a2 );
    }
    if ( (unsigned __int64)i >= a2 || (v7 = *i, *i == 26) )
    {
LABEL_57:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 8) = 0LL;
      goto LABEL_58;
    }
    if ( v7 == 10 )
    {
      ++i;
      *(_DWORD *)a3 = 1;
      goto LABEL_58;
    }
    if ( v7 == 34 )
      break;
    switch ( v7 )
    {
      case ',':
        ++i;
        *(_DWORD *)a3 = 6;
        goto LABEL_58;
      case '=':
        ++i;
        *(_DWORD *)a3 = 5;
        goto LABEL_58;
      case '[':
        ++i;
        *(_DWORD *)a3 = 2;
        goto LABEL_58;
    }
    if ( v7 != 92 )
    {
      if ( v7 == 93 )
      {
        ++i;
        *(_DWORD *)a3 = 3;
      }
      else
      {
LABEL_35:
        v9 = i;
        v10 = i;
        if ( (unsigned __int64)i >= a2 )
          goto LABEL_44;
        v11 = i + 1;
        v12 = i;
        do
        {
          v13 = v10;
          v10 = v12;
          if ( strchr(StringTerminators, *i) )
            break;
          v10 = v11;
          i = v11++;
          v13 = v10;
          v12 = v10;
        }
        while ( (unsigned __int64)v10 < a2 );
        if ( v13 == v9 )
        {
LABEL_44:
          *(_DWORD *)a3 = 7;
          *a1 = v10 + 1;
          return;
        }
        v14 = (unsigned int)((_DWORD)i - (_DWORD)v9);
        if ( (int)v14 + 1 >= (unsigned int)v14
          && (Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)(v14 + 1), 0x69704D43u), (v16 = Pool2) != 0LL) )
        {
          strncpy_s(Pool2, (unsigned int)(v14 + 1), v9, (unsigned int)v14);
          v16[v14] = 0;
          *(_DWORD *)a3 = 4;
          *(_QWORD *)(a3 + 8) = v16;
          *(_BYTE *)(a3 + 16) = 1;
        }
        else
        {
          *(_DWORD *)a3 = 8;
        }
      }
LABEL_58:
      *a1 = i;
      return;
    }
    v8 = ++i;
    if ( (unsigned __int64)i < a2 )
    {
      do
      {
        if ( *v8 == 10 )
          break;
        if ( !isspace(*(unsigned __int8 *)v8) )
          break;
        ++v8;
      }
      while ( (unsigned __int64)v8 < a2 );
    }
    if ( (*v8 == 35 || *v8 == 59) && (++i, v8 = i, (unsigned __int64)i < a2) )
    {
      while ( *v8 != 10 )
      {
        if ( (unsigned __int64)++v8 >= a2 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      if ( (unsigned __int64)v8 >= a2 )
      {
        *(_DWORD *)a3 = 7;
        goto LABEL_58;
      }
      if ( *v8 != 10 )
        goto LABEL_35;
    }
    *a1 = v8 + 1;
  }
  v17 = i + 1;
  for ( j = v17; (unsigned __int64)j < a2; ++j )
  {
    if ( strchr(&StringTerminators[6], *j) )
      break;
  }
  if ( (unsigned __int64)j < a2 && *j == 34 )
  {
    *j = 0;
    v19 = 4;
    ++j;
    *(_QWORD *)(a3 + 8) = v17;
  }
  else
  {
    v19 = 7;
  }
  *(_DWORD *)a3 = v19;
  *a1 = j;
}
