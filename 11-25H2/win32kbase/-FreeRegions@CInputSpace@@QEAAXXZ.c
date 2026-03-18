/*
 * XREFs of ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14014EDA8
 * Callers:
 *     NtConfigureInputSpace @ 0x1401B9DA0 (NtConfigureInputSpace.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F84D4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall CInputSpace::FreeRegions(CInputSpace *this)
{
  char **v2; // rdi
  char *v3; // rcx
  __int64 v4; // rdx
  char **v5; // rax

  v2 = (char **)((char *)this + 1456);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (char *)v2 )
      break;
    v4 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)v3 + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    GreDeleteFastMutex(v3);
  }
  *((_DWORD *)this + 363) = 0;
}
