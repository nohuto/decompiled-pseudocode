/*
 * XREFs of sub_140031208 @ 0x140031208
 * Callers:
 *     sub_140023BF0 @ 0x140023BF0 (sub_140023BF0.c)
 * Callees:
 *     sub_1400314C4 @ 0x1400314C4 (sub_1400314C4.c)
 *     sub_1400318DC @ 0x1400318DC (sub_1400318DC.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140031208(__int64 a1)
{
  bool v1; // zf
  unsigned int v3; // r11d
  int v4; // r11d
  int v5; // r8d
  __int64 v6; // r10
  unsigned int v7; // ecx
  char *v8; // rax
  int v9; // edi
  unsigned int v11; // [rsp+50h] [rbp+17h] BYREF
  unsigned int v12; // [rsp+54h] [rbp+1Bh] BYREF
  unsigned int v13; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+60h] [rbp+27h] BYREF
  char v15[32]; // [rsp+68h] [rbp+2Fh] BYREF

  v1 = *(_BYTE *)(a1 + 20) == 0;
  strcpy(v15, "VEN_vvvv&DEV_dddd&REV_rr");
  v11 = 512;
  if ( !v1 )
    return 0LL;
  v14 = StorPortAllocateRegistryBuffer(a1, &v11);
  if ( !v14 )
    return 0LL;
  sub_1400318DC(&v15[4], *(unsigned __int16 *)(a1 + 4), 4LL);
  sub_1400318DC(&v15[13], *(unsigned __int16 *)(a1 + 6), v3);
  sub_1400318DC(&v15[22], *(unsigned __int8 *)(a1 + 8), (unsigned int)(v4 - 2));
  v7 = 0;
  v8 = v15;
  v9 = 29;
  while ( *v8 )
  {
    ++v7;
    ++v8;
    if ( v7 >= 0x1D )
      goto LABEL_8;
  }
  v9 = v7;
LABEL_8:
  v13 = v11;
  if ( (v11 & 3) != 0 )
  {
    if ( v11 )
      sub_140032C80(v6, 0LL, v11);
  }
  else if ( v11 >> 2 )
  {
    sub_140032C80(v6, 0LL, 4LL * (v11 >> 2));
  }
  v12 = 0;
  sub_1400314C4(
    a1,
    (unsigned int)"DisableActivateFWWithoutReset",
    v5,
    (unsigned int)&v14,
    (__int64)&v11,
    (__int64)&v13,
    (__int64)v15,
    v9,
    (__int64)&v12);
  if ( v14 )
    StorPortFreeRegistryBuffer(a1);
  return v12;
}
