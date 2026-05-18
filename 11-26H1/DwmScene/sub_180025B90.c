/*
 * XREFs of sub_180025B90 @ 0x180025B90
 * Callers:
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 *     sub_18002B454 @ 0x18002B454 (sub_18002B454.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_18003F3F0 @ 0x18003F3F0 (sub_18003F3F0.c)
 *     sub_1800D8F67 @ 0x1800D8F67 (sub_1800D8F67.c)
 *     sub_1800D9899 @ 0x1800D9899 (sub_1800D9899.c)
 *     sub_1800D98F1 @ 0x1800D98F1 (sub_1800D98F1.c)
 *     sub_1800D996B @ 0x1800D996B (sub_1800D996B.c)
 *     sub_1800D9A4C @ 0x1800D9A4C (sub_1800D9A4C.c)
 *     sub_1800D9AE2 @ 0x1800D9AE2 (sub_1800D9AE2.c)
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA @ 0x1800D9B6A (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA.c)
 *     sub_1800D9BC2 @ 0x1800D9BC2 (sub_1800D9BC2.c)
 *     sub_1800D9C3C @ 0x1800D9C3C (sub_1800D9C3C.c)
 *     sub_1800D9D1D @ 0x1800D9D1D (sub_1800D9D1D.c)
 *     sub_1800D9DB3 @ 0x1800D9DB3 (sub_1800D9DB3.c)
 *     sub_1800DA9B2 @ 0x1800DA9B2 (sub_1800DA9B2.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 */

__int64 __fastcall sub_180025B90(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    while ( v1 != v3 )
    {
      v4 = *(volatile signed __int32 **)(v1 + 8);
      if ( v4 )
        sub_180010F00(v4);
      v1 += 16LL;
    }
    sub_18000E26C(*(void **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  sub_180011E54(a1 + 8);
  return sub_1800D5408(a1);
}
