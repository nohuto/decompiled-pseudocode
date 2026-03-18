/*
 * XREFs of ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14016BF30
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14016B8E8 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14024A3B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x140249C7C (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextTrackingDataCleanup(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 14); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)a1 + 96 * i;
    if ( *(_BYTE *)(v6 + 34) )
    {
      --*((_DWORD *)a1 + 15);
    }
    else if ( *(_BYTE *)(v6 + 35) )
    {
      --*((_DWORD *)a1 + 16);
    }
    v7 = (_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v6 + 16);
    if ( *(_QWORD *)(v8 + 8) != v6 + 16 || (v9 = *(_QWORD **)(v6 + 24), (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v6 + 24) = v7;
    *v7 = v7;
    *(_QWORD *)v6 = 0LL;
    CitpProgDataCleanup((struct _CIT_PROG_DATA *)v6);
  }
  GreDeleteFastMutex(*(char **)a1, a2, a3, a4);
  v10 = (char *)*((_QWORD *)a1 + 11);
  *(_QWORD *)a1 = 0LL;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 17) = 0;
  GreDeleteFastMutex(v10, v11, v12, v13);
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
}
