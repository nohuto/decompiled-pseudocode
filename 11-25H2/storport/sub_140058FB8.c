/*
 * XREFs of sub_140058FB8 @ 0x140058FB8
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_14005E1B0 @ 0x14005E1B0 (sub_14005E1B0.c)
 * Callees:
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140058FB8(__int64 a1, unsigned __int8 a2)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // al

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    return 0LL;
  v5 = *(_QWORD *)a1;
  if ( (qword_140168458 & 0x400) != 0 )
    sub_14000FB90(v5, 11, v5, *(unsigned int *)(v5 + 56), a2, 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 232);
  v7 = *(_QWORD *)(a1 + 240);
  *(_BYTE *)(a1 + 248) |= 4u;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v6 + 40))(v7 + 16, v3);
  *(_BYTE *)(a1 + 248) &= ~4u;
  return v8 == 0 ? 0xC0000001 : 0;
}
