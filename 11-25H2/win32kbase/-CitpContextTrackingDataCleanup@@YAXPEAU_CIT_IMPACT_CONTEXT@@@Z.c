/*
 * XREFs of ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14015E464
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14023FCDC (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x140240788 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x14023FFE0 (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextTrackingDataCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8
  char *v7; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 14); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)a1 + 96 * i;
    if ( *(_BYTE *)(v3 + 34) )
    {
      --*((_DWORD *)a1 + 15);
    }
    else if ( *(_BYTE *)(v3 + 35) )
    {
      --*((_DWORD *)a1 + 16);
    }
    v4 = (_QWORD *)(v3 + 16);
    v5 = *(_QWORD *)(v3 + 16);
    if ( *(_QWORD *)(v5 + 8) != v3 + 16 || (v6 = *(_QWORD **)(v3 + 24), (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *v4 = v4;
    *(_QWORD *)v3 = 0LL;
    CitpProgDataCleanup((struct _CIT_PROG_DATA *)v3);
  }
  GreDeleteFastMutex(*(char **)a1);
  v7 = (char *)*((_QWORD *)a1 + 11);
  *(_QWORD *)a1 = 0LL;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 17) = 0;
  GreDeleteFastMutex(v7);
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 18) = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_DWORD *)a1 + 19) = 0;
}
