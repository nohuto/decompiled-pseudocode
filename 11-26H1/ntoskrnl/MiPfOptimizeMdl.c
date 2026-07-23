/*
 * XREFs of MiPfOptimizeMdl @ 0x140AB6FA8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiReduceMdl @ 0x14046C100 (MiReduceMdl.c)
 */

void __fastcall MiPfOptimizeMdl(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 **v6; // rax

  v3 = 0LL;
  if ( a3 )
  {
    if ( (*((_DWORD *)a2 + 47) & 0x400000) == 0 )
      v3 = a2[26];
    MiReduceMdl(v3);
    if ( *(_DWORD *)(v3 + 40) != *((_DWORD *)a2 + 46) )
      *((_DWORD *)a2 + 46) = *(_DWORD *)(v3 + 40);
  }
  else
  {
    v5 = *a2;
    if ( *(__int64 **)(v5 + 8) != a2 || (v6 = (__int64 **)a2[1], *v6 != a2) )
      __fastfail(3u);
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    --*(_DWORD *)(*(_QWORD *)a1 + 212LL);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)a2);
  }
}
