/*
 * XREFs of ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14008F0FC
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x14008DACC (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     NtConfigureInputSpace @ 0x1401E04B0 (NtConfigureInputSpace.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CInputSpace::FreeRegions(CInputSpace *this, __int64 a2, __int64 a3, __int64 a4)
{
  char **v5; // rdi
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rax

  v5 = (char **)((char *)this + 1456);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (char *)v5 )
      break;
    v7 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (__int64 *)*((_QWORD *)v6 + 1), (char *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    GreDeleteFastMutex(v6, v7, a3, a4);
  }
  *((_DWORD *)this + 363) = 0;
}
