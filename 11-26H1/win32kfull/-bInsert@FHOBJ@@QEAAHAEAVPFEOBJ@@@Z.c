/*
 * XREFs of ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x140105540
 * Callers:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4 (-iHash@@YAIPEBGI@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x140105860 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
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
  __int64 v21; // rcx
  unsigned __int16 *k; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  WCHAR *v25; // rbx
  unsigned int v27; // r11d
  __int64 v28; // r10
  char *m; // rdx
  unsigned __int16 *n; // rax
  int v32; // eax
  bool v33; // zf
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 v36[32]; // [rsp+50h] [rbp-19h] BYREF

  memset_0(v36, 0, sizeof(v36));
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    && !_wcsicmp(
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    return 1LL;
  }
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)a2;
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 == 2 )
  {
    v23 = *(_QWORD *)(v5 + 84);
    *(_QWORD *)&SourceString.Length = v23;
    if ( (_DWORD)v23 == 1 )
      v24 = HIDWORD(v23);
    else
      LODWORD(v24) = v23;
    v19 = (unsigned int)v24 % *(_DWORD *)(v4 + 8);
    for ( i = *(__int64 **)(v4 + 8LL * v19 + 40); ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        i = 0LL;
        goto LABEL_16;
      }
      v32 = *((_DWORD *)i + 15);
      if ( v32 == 1 )
      {
        if ( (_DWORD)v23 != 1 )
          continue;
        v33 = *((_DWORD *)i + 16) == *(_DWORD *)(&SourceString.MaximumLength + 1);
      }
      else
      {
        v33 = v32 == (_DWORD)v23;
      }
      if ( v33 )
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
    DestinationString.Buffer = v36;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  v12 = v36;
  v13 = 0LL;
  v36[(int)v11] = 0;
  for ( j = 0; *v12; j = v15 + 257 * j )
    v15 = *(unsigned __int8 *)v12++;
  v16 = *((_QWORD *)this + 1);
  v17 = j % *(_DWORD *)(v16 + 8);
  for ( i = *(__int64 **)(v16 + 8LL * v17 + 40); i; i = (__int64 *)*i )
  {
    for ( k = v36; *k == *(unsigned __int16 *)((char *)k + (char *)i - (char *)v36 + 60); ++k )
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
  if ( !(unsigned int)FHOBJ::bAddPFELink(this, (struct _HASHBUCKET *)i, v19, v36, a2, 0) )
    return 0LL;
  v21 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (*(_DWORD *)(v21 + 48) & 0x8000000) != 0 && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
  {
    v25 = (WCHAR *)(v21 + *(int *)(v21 + 8));
    while ( *v25++ )
      ;
    while ( *v25 )
    {
      cCapString(v36, v25, 32);
      v27 = iHash(v36, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
      for ( m = *(char **)(v28 + 8LL * v27 + 40); m; m = *(char **)m )
      {
        if ( (*((_DWORD *)m + 8) & 2) != 0 )
        {
          for ( n = v36; *n == *(unsigned __int16 *)((char *)n + m - (char *)v36 + 60); ++n )
          {
            if ( !*n )
              goto LABEL_39;
          }
        }
      }
      m = 0LL;
LABEL_39:
      if ( !(unsigned int)FHOBJ::bAddPFELink(this, (struct _HASHBUCKET *)m, v27, v36, a2, 1) )
        return 0LL;
      while ( *v25++ )
        ;
    }
  }
  return 1LL;
}
