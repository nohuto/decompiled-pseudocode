/*
 * XREFs of sub_14002EBF8 @ 0x14002EBF8
 * Callers:
 *     sub_140019EA0 @ 0x140019EA0 (sub_140019EA0.c)
 *     sub_14002EE7C @ 0x14002EE7C (sub_14002EE7C.c)
 * Callees:
 *     sub_1400314C4 @ 0x1400314C4 (sub_1400314C4.c)
 *     sub_1400318DC @ 0x1400318DC (sub_1400318DC.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002EBF8(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r11d
  int v4; // r11d
  int v5; // r8d
  __int64 v6; // r10
  unsigned int v7; // ecx
  __int128 *v8; // rax
  int v9; // edi
  int v10; // r8d
  unsigned int v11; // [rsp+50h] [rbp+17h] BYREF
  unsigned int v12; // [rsp+54h] [rbp+1Bh] BYREF
  unsigned int v13; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+60h] [rbp+27h] BYREF
  __int128 v15; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+78h] [rbp+3Fh] BYREF
  char v17; // [rsp+80h] [rbp+47h]

  v17 = 0;
  v15 = xmmword_14003C9A0;
  v11 = 512;
  *(_DWORD *)(a1 + 56) &= ~0x200000u;
  v16 = 0x72725F5645522664LL;
  result = StorPortAllocateRegistryBuffer(a1, &v11);
  v14 = result;
  if ( result )
  {
    sub_1400318DC((char *)&v15 + 4, *(unsigned __int16 *)(a1 + 4), 4LL);
    sub_1400318DC((char *)&v15 + 13, *(unsigned __int16 *)(a1 + 6), v3);
    sub_1400318DC((char *)&v16 + 6, *(unsigned __int8 *)(a1 + 8), (unsigned int)(v4 - 2));
    v7 = 0;
    v8 = &v15;
    v9 = 29;
    while ( *(_BYTE *)v8 )
    {
      ++v7;
      v8 = (__int128 *)((char *)v8 + 1);
      if ( v7 >= 0x1D )
        goto LABEL_7;
    }
    v9 = v7;
LABEL_7:
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
    result = sub_1400314C4(
               a1,
               (unsigned int)"ControllerResetWaitTimeCushion",
               v5,
               (unsigned int)&v14,
               (__int64)&v11,
               (__int64)&v13,
               (__int64)&v15,
               v9,
               (__int64)&v12);
    if ( (_BYTE)result == 1 )
    {
      result = v12;
      *(_DWORD *)(a1 + 156) = v12;
    }
    if ( v14 )
    {
      v13 = v11;
      if ( (v11 & 3) != 0 )
      {
        if ( v11 )
          sub_140032C80(v14, 0LL, v11);
      }
      else if ( v11 >> 2 )
      {
        sub_140032C80(v14, 0LL, 4LL * (v11 >> 2));
      }
      v12 = 0;
      result = sub_1400314C4(
                 a1,
                 (unsigned int)"DisableDSTThrottle",
                 v10,
                 (unsigned int)&v14,
                 (__int64)&v11,
                 (__int64)&v13,
                 (__int64)&v15,
                 v9,
                 (__int64)&v12);
      if ( (_BYTE)result == 1 && v12 )
        *(_DWORD *)(a1 + 56) |= 0x200000u;
      if ( v14 )
        return StorPortFreeRegistryBuffer(a1);
    }
  }
  return result;
}
