/*
 * XREFs of ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x14010EF44
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x14010ED5C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B7BF0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x14010F404 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x14010F8A8 (-iHash@@YAIPEBGI@Z.c)
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x14010F8D4 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int16 *v9; // rdx
  __int64 *v10; // r9
  unsigned int j; // eax
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int v14; // r10d
  __int64 *i; // rdx
  unsigned __int16 *k; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int16 *v19; // rbx
  unsigned int v21; // r11d
  __int64 v22; // r10
  char *m; // rdx
  unsigned __int16 *n; // rcx
  int v26; // eax
  unsigned __int16 v27[32]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v27, 0, sizeof(v27));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    || _wcsicmp(
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    v4 = *((_QWORD *)this + 1);
    v5 = *(_QWORD *)a2;
    v6 = *(_DWORD *)(v4 + 4);
    if ( v6 == 2 )
    {
      v17 = *(_QWORD *)(v5 + 84);
      if ( (_DWORD)v17 == 1 )
        v18 = HIDWORD(v17);
      else
        LODWORD(v18) = v17;
      v14 = (unsigned int)v18 % *(_DWORD *)(v4 + 8);
      for ( i = *(__int64 **)(v4 + 8LL * v14 + 40); i; i = (__int64 *)*i )
      {
        v26 = *((_DWORD *)i + 15);
        if ( v26 == 1 && (_DWORD)v17 == 1 )
        {
          if ( *((_DWORD *)i + 16) == HIDWORD(v17) )
            goto LABEL_10;
        }
        else if ( v26 == (_DWORD)v17 )
        {
          goto LABEL_10;
        }
      }
      i = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 32);
      if ( v6 == 1 )
        v8 = *(int *)(v7 + 8);
      else
        v8 = *(int *)(v7 + 16);
      cCapString(v27, (WCHAR *)(v7 + v8), 32);
      v9 = v27;
      v10 = 0LL;
      for ( j = 0; *v9; j = v12 + 257 * j )
        v12 = *(unsigned __int8 *)v9++;
      v13 = *((_QWORD *)this + 1);
      v14 = j % *(_DWORD *)(v13 + 8);
      for ( i = *(__int64 **)(v13 + 8LL * v14 + 40); i; i = (__int64 *)*i )
      {
        for ( k = v27; *k == *(unsigned __int16 *)((char *)k + (char *)i - (char *)v27 + 60); ++k )
        {
          if ( !*k )
          {
            if ( (i[4] & 2) == 0 )
              goto LABEL_10;
            v10 = i;
            break;
          }
        }
      }
      i = v10;
    }
LABEL_10:
    FHOBJ::vDeletePFELink(this, (struct _HASHBUCKET *)i, v14, a2);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v19 = FHOBJ::pwszName(this, a2);
      while ( *v19++ )
        ;
      while ( *v19 )
      {
        cCapString(v27, v19, 32);
        v21 = iHash(v27, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
        for ( m = *(char **)(v22 + 8LL * v21 + 40); m; m = *(char **)m )
        {
          if ( (*((_DWORD *)m + 8) & 2) != 0 )
          {
            for ( n = v27; *n == *(unsigned __int16 *)((char *)n + m - (char *)v27 + 60); ++n )
            {
              if ( !*n )
                goto LABEL_31;
            }
          }
        }
        m = 0LL;
LABEL_31:
        FHOBJ::vDeletePFELink(this, (struct _HASHBUCKET *)m, v21, a2);
        while ( *v19++ )
          ;
      }
    }
  }
}
