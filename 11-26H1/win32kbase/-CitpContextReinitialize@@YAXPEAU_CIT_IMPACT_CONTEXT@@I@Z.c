/*
 * XREFs of ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140249A7C
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x140196CFC (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 * Callees:
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x14024A200 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextReinitialize(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  char *v2; // r14
  unsigned __int64 v5; // rax
  char *v6; // rdi
  __int64 v7; // rdx
  char i; // cl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int j; // esi
  __int64 v12; // rcx
  char *v13; // rdi
  char **v14; // rax

  v2 = (char *)a1 + 8;
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  *((_DWORD *)a1 + 15) = 0;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  v5 = (unsigned __int64)a1 + 72;
  v6 = (char *)*((_QWORD *)a1 + 11);
  v7 = *((_DWORD *)a1 + 19) >> 5;
  *((_DWORD *)a1 + 16) = 0;
  if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
  {
    for ( i = -1; (_DWORD)v7; LODWORD(v7) = (unsigned int)v7 >> 1 )
      ++i;
    v7 = (unsigned int)(1 << i);
  }
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (unsigned int)v7 > 0x4000000 )
    v7 = 0x4000000LL;
  *(_DWORD *)(v5 + 4) = 32 * v7;
  v9 = v5 | 1;
  v10 = (unsigned int)v7;
  if ( v6 > &v6[8 * v7] )
    v10 = 0LL;
  if ( v10 )
    memset64(v6, v9, v10);
  for ( j = 0; j < *((_DWORD *)a1 + 14); *((_QWORD *)v2 + 1) = v13 )
  {
    v12 = *(_QWORD *)a1 + 96LL * j;
    v13 = (char *)(v12 + 16);
    *(_QWORD *)(v12 + 24) = v12 + 16;
    *(_QWORD *)(v12 + 16) = v12 + 16;
    *(_QWORD *)v12 = 0LL;
    CitpProgDataReinitialize((struct _CIT_PROG_DATA *)v12);
    v14 = (char **)*((_QWORD *)v2 + 1);
    if ( *v14 != v2 )
      __fastfail(3u);
    *(_QWORD *)v13 = v2;
    ++j;
    *((_QWORD *)v13 + 1) = v14;
    *v14 = v13;
  }
  *((_DWORD *)a1 + 34) = a2;
  *((_DWORD *)a1 + 72) = a2;
  *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
}
