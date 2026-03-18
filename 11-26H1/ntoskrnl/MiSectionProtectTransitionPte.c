/*
 * XREFs of MiSectionProtectTransitionPte @ 0x14033EF60
 * Callers:
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 * Callees:
 *     MiSectionProtectZeroPte @ 0x1402CFA48 (MiSectionProtectZeroPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033CED4 (MiSetProtectionOnTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x14033E48C (MiTryDeleteTransitionPte.c)
 *     MiDecreaseUsedPtes @ 0x14033F020 (MiDecreaseUsedPtes.c)
 */

__int64 __fastcall MiSectionProtectTransitionPte(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8

  if ( !*(_DWORD *)(a1 + 68) )
    return (unsigned int)MiSetProtectionOnTransitionPte(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(a1 + 60), 1) != 0
         ? 0xC000022D
         : 0;
  v4 = MiTryDeleteTransitionPte(a2, a2);
  if ( v4 == 3 )
  {
    ++*(_QWORD *)(a1 + 104);
    goto LABEL_4;
  }
  if ( v4 != 1 )
  {
LABEL_4:
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 648LL));
    *(_QWORD *)a2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MiDecreaseUsedPtes(v5, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, v6);
    LOBYTE(v7) = 1;
    MiSectionProtectZeroPte(a1, (__int64 *)a2, v7);
    return 0LL;
  }
  return 3221226029LL;
}
