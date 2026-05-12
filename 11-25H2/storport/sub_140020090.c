/*
 * XREFs of sub_140020090 @ 0x140020090
 * Callers:
 *     sub_14000BC30 @ 0x14000BC30 (sub_14000BC30.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14000CCB0 @ 0x14000CCB0 (sub_14000CCB0.c)
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 *     sub_140012944 @ 0x140012944 (sub_140012944.c)
 *     sub_1400129E0 @ 0x1400129E0 (sub_1400129E0.c)
 *     sub_140012E50 @ 0x140012E50 (sub_140012E50.c)
 *     sub_14001AB28 @ 0x14001AB28 (sub_14001AB28.c)
 *     sub_14001F5FC @ 0x14001F5FC (sub_14001F5FC.c)
 *     sub_14001F9C0 @ 0x14001F9C0 (sub_14001F9C0.c)
 *     sub_14001FE70 @ 0x14001FE70 (sub_14001FE70.c)
 *     sub_1400267A0 @ 0x1400267A0 (sub_1400267A0.c)
 *     sub_140029648 @ 0x140029648 (sub_140029648.c)
 *     sub_140032CB4 @ 0x140032CB4 (sub_140032CB4.c)
 *     sub_140038CC0 @ 0x140038CC0 (sub_140038CC0.c)
 *     sub_140039BC0 @ 0x140039BC0 (sub_140039BC0.c)
 *     sub_140039E80 @ 0x140039E80 (sub_140039E80.c)
 *     sub_1400425B8 @ 0x1400425B8 (sub_1400425B8.c)
 *     Callback @ 0x140045BD0 (Callback.c)
 *     sub_14005595C @ 0x14005595C (sub_14005595C.c)
 *     sub_140059EAC @ 0x140059EAC (sub_140059EAC.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_14006A4DC @ 0x14006A4DC (sub_14006A4DC.c)
 *     sub_140077B6C @ 0x140077B6C (sub_140077B6C.c)
 *     sub_140077BF8 @ 0x140077BF8 (sub_140077BF8.c)
 *     sub_140077D58 @ 0x140077D58 (sub_140077D58.c)
 *     sub_140079AF0 @ 0x140079AF0 (sub_140079AF0.c)
 *     sub_140079E70 @ 0x140079E70 (sub_140079E70.c)
 *     sub_14007A1F0 @ 0x14007A1F0 (sub_14007A1F0.c)
 *     sub_140178FA0 @ 0x140178FA0 (sub_140178FA0.c)
 *     sub_14017A21C @ 0x14017A21C (sub_14017A21C.c)
 *     sub_14017A65C @ 0x14017A65C (sub_14017A65C.c)
 *     sub_1401AD7BC @ 0x1401AD7BC (sub_1401AD7BC.c)
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_140020090(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // r8
  int v5; // ecx
  unsigned int (__fastcall *v6)(__int64, _QWORD); // rax

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 248) & 0x20) != 0 )
    return *(_BYTE *)(a2 + a1 + 292);
  v4 = (_DWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  v5 = *(_DWORD *)(a1 + 376);
  *v4 = 19;
  if ( v5 )
  {
    if ( v5 > 2 && *(_BYTE *)(a1 + 382) )
      *v4 = 20;
    if ( v5 > 3 && *(_BYTE *)(a1 + 383) )
      *v4 = 21;
    if ( v5 > 5 && *(_BYTE *)(a1 + 385) )
      *v4 = 22;
    if ( v5 > 6 && *(_BYTE *)(a1 + 386) )
      *v4 = 23;
    if ( v5 > 7 && *(_BYTE *)(a1 + 387) )
      *v4 = 24;
    if ( v5 > 8 && *(_BYTE *)(a1 + 388) )
      *v4 = 25;
    if ( v5 > 9 && *(_BYTE *)(a1 + 389) )
      *v4 = 26;
    if ( v5 > 10 && *(_BYTE *)(a1 + 390) )
      *v4 = 27;
    if ( v5 > 12 && *(_BYTE *)(a1 + 392) )
      *v4 = 28;
  }
  v6 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v6 || v6(*(_QWORD *)(a1 + 240) + 16LL, 0LL) )
    return 0;
  *(_BYTE *)(a1 + 248) |= 0x20u;
  return *(_BYTE *)(v3 + a1 + 292);
}
