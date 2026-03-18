/*
 * XREFs of ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x140105050
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4 (-iHash@@YAIPEBGI@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x140105340 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  WCHAR *v9; // rcx
  WCHAR *v10; // rbx
  __int64 v11; // rbx
  unsigned __int16 *v12; // rdx
  __int64 *v13; // r10
  unsigned int j; // eax
  int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 *i; // rdx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned __int16 *k; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  WCHAR *v24; // rbx
  unsigned int v26; // r11d
  __int64 v27; // r10
  char *m; // rdx
  unsigned __int16 *n; // rax
  int v31; // eax
  bool v32; // zf
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 v35[32]; // [rsp+40h] [rbp-19h] BYREF

  memset_0(v35, 0, sizeof(v35));
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    && !_wcsicmp(
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    return;
  }
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)a2;
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 == 2 )
  {
    v22 = *(_QWORD *)(v5 + 84);
    *(_QWORD *)&SourceString.Length = v22;
    if ( (_DWORD)v22 == 1 )
      v23 = HIDWORD(v22);
    else
      LODWORD(v23) = v22;
    v19 = (unsigned int)v23 % *(_DWORD *)(v4 + 8);
    for ( i = *(__int64 **)(v4 + 8LL * v19 + 40); ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        i = 0LL;
        goto LABEL_16;
      }
      v31 = *((_DWORD *)i + 15);
      if ( v31 == 1 )
      {
        if ( (_DWORD)v22 != 1 )
          continue;
        v32 = *((_DWORD *)i + 16) == *(_DWORD *)(&SourceString.MaximumLength + 1);
      }
      else
      {
        v32 = v31 == (_DWORD)v22;
      }
      if ( v32 )
        goto LABEL_16;
    }
  }
  v7 = *(_QWORD *)(v5 + 32);
  if ( v6 == 1 )
    v8 = *(int *)(v7 + 8);
  else
    v8 = *(int *)(v7 + 16);
  v9 = (WCHAR *)(v7 + v8);
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v10 = v9;
  for ( DestinationString = 0LL; v10 < v9 + 31; ++v10 )
  {
    if ( !*v10 )
      break;
  }
  v11 = v10 - v9;
  if ( (_DWORD)v11 )
  {
    SourceString.Buffer = v9;
    SourceString.MaximumLength = 64;
    SourceString.Length = 2 * v11;
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = v35;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  v12 = v35;
  v13 = 0LL;
  v35[(int)v11] = 0;
  for ( j = 0; *v12; j = v15 + 257 * j )
    v15 = *(unsigned __int8 *)v12++;
  v16 = *((_QWORD *)this + 1);
  v17 = j % *(_DWORD *)(v16 + 8);
  for ( i = *(__int64 **)(v16 + 8LL * v17 + 40); i; i = (__int64 *)*i )
  {
    for ( k = v35; *k == *(unsigned __int16 *)((char *)k + (char *)i - (char *)v35 + 60); ++k )
    {
      if ( !*k )
      {
        if ( (i[4] & 2) == 0 )
          goto LABEL_15;
        v13 = i;
        break;
      }
    }
  }
  i = v13;
LABEL_15:
  v19 = v17;
LABEL_16:
  FHOBJ::vDeletePFELink(this, (struct _HASHBUCKET *)i, v19, a2);
  v20 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (*(_DWORD *)(v20 + 48) & 0x8000000) != 0 && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
  {
    v24 = (WCHAR *)(v20 + *(int *)(v20 + 8));
    while ( *v24++ )
      ;
    while ( *v24 )
    {
      cCapString(v35, v24, 32);
      v26 = iHash(v35, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
      for ( m = *(char **)(v27 + 8LL * v26 + 40); m; m = *(char **)m )
      {
        if ( (*((_DWORD *)m + 8) & 2) != 0 )
        {
          for ( n = v35; *n == *(unsigned __int16 *)((char *)n + m - (char *)v35 + 60); ++n )
          {
            if ( !*n )
              goto LABEL_37;
          }
        }
      }
      m = 0LL;
LABEL_37:
      FHOBJ::vDeletePFELink(this, (struct _HASHBUCKET *)m, v26, a2);
      while ( *v24++ )
        ;
    }
  }
}
