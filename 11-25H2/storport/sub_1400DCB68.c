/*
 * XREFs of sub_1400DCB68 @ 0x1400DCB68
 * Callers:
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400DF8B0 @ 0x1400DF8B0 (sub_1400DF8B0.c)
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 * Callees:
 *     sub_1400DF484 @ 0x1400DF484 (sub_1400DF484.c)
 *     sub_1400DF70C @ 0x1400DF70C (sub_1400DF70C.c)
 *     sub_1400DF7EC @ 0x1400DF7EC (sub_1400DF7EC.c)
 *     sub_1400DFFEC @ 0x1400DFFEC (sub_1400DFFEC.c)
 *     sub_1400E0960 @ 0x1400E0960 (sub_1400E0960.c)
 *     sub_1400E0ABC @ 0x1400E0ABC (sub_1400E0ABC.c)
 *     sub_1400E4C30 @ 0x1400E4C30 (sub_1400E4C30.c)
 *     sub_1400EA27C @ 0x1400EA27C (sub_1400EA27C.c)
 */

__int64 __fastcall sub_1400DCB68(__int64 a1, __int64 a2)
{
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 742) )
    sub_1400DF70C();
  v3 = *(_DWORD *)(a1 + 572);
  if ( v3 == 1 )
  {
    if ( *(_QWORD *)(a1 + 728) )
      sub_1400E0960(a1);
  }
  else if ( v3 == 2 )
  {
    sub_1400DFFEC(a1 + 1576);
    *(_QWORD *)(a1 + 1568) = 0LL;
    sub_1400DFFEC(a1 + 1608);
    *(_QWORD *)(a1 + 1600) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 742) )
    sub_1400E0ABC(a1);
  v4 = *(void **)(a1 + 536);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x72536152u);
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  v5 = *(void **)(a1 + 624);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x52436152u);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  v6 = *(void **)(a1 + 608);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x52436152u);
    *(_QWORD *)(a1 + 608) = 0LL;
  }
  v7 = *(void **)(a1 + 600);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x52436152u);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  v8 = *(void **)(a1 + 592);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x52436152u);
    *(_QWORD *)(a1 + 592) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 136) & 0x100LL) != 0 )
  {
    LOBYTE(a2) = 1;
    sub_1400DF484(a1, a2);
  }
  sub_1400DF7EC(*(_QWORD *)(a1 + 712));
  sub_1400E4C30(a1);
  result = sub_1400EA27C(a1);
  *(_DWORD *)(a1 + 568) = 0;
  return result;
}
