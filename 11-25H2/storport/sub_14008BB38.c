/*
 * XREFs of sub_14008BB38 @ 0x14008BB38
 * Callers:
 *     sub_14006CEFC @ 0x14006CEFC (sub_14006CEFC.c)
 * Callees:
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_1400298E0 @ 0x1400298E0 (sub_1400298E0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_14008BB38(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, _QWORD, __int64))
{
  char result; // al
  __int64 *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8

  result = *(_BYTE *)(a4 - 32) & 0x1C;
  if ( result == 12 )
  {
    v10 = (__int64 *)(a4 + 168);
    if ( (qword_140168458 & 0x40) != 0 )
    {
      v11 = sub_1400298E0(a4 - 48);
      sub_14000FB90(*v10, 13, *(_QWORD *)(a4 + 112), v11, *(_QWORD *)(a4 + 120), v12, 0LL);
    }
    if ( (*(_BYTE *)(a4 - 31) & 1) != 0 )
    {
      sub_14001F93C(*v10, *(unsigned int *)(a4 + 700));
      *(_BYTE *)(a4 - 31) &= ~1u;
    }
    a5(a1, a3, a4);
    *(_BYTE *)(*(_QWORD *)(a4 + 120) + 3LL) = a2;
    return (*(__int64 (__fastcall **)(__int64))(a4 + 608))(a4 - 48);
  }
  return result;
}
