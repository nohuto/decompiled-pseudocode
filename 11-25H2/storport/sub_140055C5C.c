/*
 * XREFs of sub_140055C5C @ 0x140055C5C
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_1400329EC @ 0x1400329EC (sub_1400329EC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140055C5C(__int64 a1, char a2)
{
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rax

  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 608);
  if ( !v4 )
    return 3221225485LL;
  v5 = *(void (__fastcall **)(__int64))(v4 + 176);
  if ( !v5 )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 109) & 2) != 0) != a2 )
  {
    v5(*(_QWORD *)(a1 + 616) + 16LL);
    *(_BYTE *)(a1 + 109) ^= (*(_BYTE *)(a1 + 109) ^ (2 * a2)) & 2;
  }
  return 0LL;
}
