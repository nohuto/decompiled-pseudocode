/*
 * XREFs of ?_Tidy@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXXZ @ 0x180504B00
 * Callers:
 *     ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F75C8 (--1-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall std::stringbuf::_Tidy(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _DWORD *result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    v2 = **(_QWORD **)(a1 + 64);
    if ( v2 )
      v3 = v2 + **(int **)(a1 + 88);
    else
      v3 = **(_QWORD **)(a1 + 56) + **(int **)(a1 + 80);
    std::_Deallocate<16>(**(void ***)(a1 + 24), (struct std::nothrow_t *)(v3 - **(_QWORD **)(a1 + 24)));
  }
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  result = *(_DWORD **)(a1 + 88);
  *result = 0;
  *(_DWORD *)(a1 + 112) &= ~1u;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
