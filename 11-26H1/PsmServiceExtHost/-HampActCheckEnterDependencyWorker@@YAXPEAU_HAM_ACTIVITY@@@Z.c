/*
 * XREFs of ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800138C0
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x1800172C0 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampActCheckEnterDependencyWorker(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rax
  struct _HAM_DEPENDENCY_GROUP *v3; // rdi

  v1 = *((_QWORD *)a1 + 10);
  v3 = *(struct _HAM_DEPENDENCY_GROUP **)(v1 + 704);
  if ( v3 && !*((_QWORD *)a1 + 9) && (*((_BYTE *)a1 + 552) & 2) == 0 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v1 + 704));
    *((_DWORD *)a1 + 138) ^= ((unsigned __int8)*((_DWORD *)a1 + 138) ^ (unsigned __int8)(2
                                                                                       * HampDepGroupTryEnterStateChange(
                                                                                           v3,
                                                                                           (unsigned __int64 *)(*((_QWORD *)a1 + 10) + 624LL)))) & 2;
    HampDepGroupReleaseLockExclusive(v3);
  }
}
