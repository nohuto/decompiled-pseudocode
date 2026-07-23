/*
 * XREFs of CmpRemoveFromSecurityCache @ 0x140B02F74
 * Callers:
 *     CmpRemoveSecurityCellList @ 0x1404C21E4 (CmpRemoveSecurityCellList.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall CmpRemoveFromSecurityCache(__int64 a1, int a2)
{
  char result; // al
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  result = CmpFindSecurityCellCacheIndex(a1, a2, &v9);
  if ( result )
  {
    v4 = v9;
    v5 = 16LL * v9;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1896) + v5 + 8);
    v7 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v7 + 8) != v6 + 8 || (v8 = *(_QWORD **)(v6 + 16), *v8 != v6 + 8) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    guard_dispatch_icall_no_overrides(v6, (unsigned int)(*(_DWORD *)(v6 + 24) + 32));
    result = (unsigned __int8)memmove(
                                (void *)(v5 + *(_QWORD *)(a1 + 1896)),
                                (const void *)(*(_QWORD *)(a1 + 1896) + 16LL * (v4 + 1)),
                                16LL * (*(_DWORD *)(a1 + 1880) - v4 - 1));
    --*(_DWORD *)(a1 + 1880);
  }
  return result;
}
