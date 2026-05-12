/*
 * XREFs of sub_1400C7960 @ 0x1400C7960
 * Callers:
 *     sub_1400ECECC @ 0x1400ECECC (sub_1400ECECC.c)
 *     sub_1400EF9BC @ 0x1400EF9BC (sub_1400EF9BC.c)
 *     sub_1400F604C @ 0x1400F604C (sub_1400F604C.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400C7960(
        _QWORD *SystemArgument2,
        char a2,
        unsigned __int8 a3,
        char a4,
        unsigned int a5,
        void *Src,
        size_t Size)
{
  int v8; // r13d
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // r14
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // r8d
  void *v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a3;
  *(_OWORD *)v20 = 0LL;
  if ( !a5 )
    return 3221225485LL;
  v12 = sub_1401225EC(SystemArgument2);
  if ( !v12 )
    return 3221225626LL;
  v14 = sub_1400E736C(SystemArgument2, 4096LL, v13, v20, &v20[1], 0);
  if ( v14 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)v12 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v12 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v12 + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v12 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v12 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*(_QWORD *)v12 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v12 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v12 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v12 + 4200LL) = v12;
    *(void **)(*(_QWORD *)v12 + 4160LL) = v20[0];
    *(void **)(*(_QWORD *)v12 + 4168LL) = v20[1];
    *(_DWORD *)(*(_QWORD *)v12 + 4248LL) = 4096;
    v15 = *(_QWORD *)v12 + 4096LL;
    v16 = *(_DWORD *)(*(_QWORD *)v12 + 4140LL);
    *(_BYTE *)v15 = 9;
    *(_BYTE *)(v15 + 40) = 13;
    *(_DWORD *)(v15 + 44) = v16 ^ (v16 ^ v8) & 1 ^ ((unsigned __int8)(v16 ^ (v16 ^ v8) & 1) ^ (unsigned __int8)(2 * a4)) & 2;
    v17 = 1 << (((*(_DWORD *)(SystemArgument2[115] + 20LL) >> 7) & 0xF) + 12);
    if ( a5 % v17 )
    {
      v14 = -1073741811;
    }
    else
    {
      *(_DWORD *)(v15 + 48) = a5 / v17;
      memmove(v20[0], Src, (unsigned int)Size);
      v18 = (__int64)v20[1] & 0xFFFFFFF0;
      *(_DWORD *)(v15 + 56) = HIDWORD(v20[1]);
      *(_DWORD *)(v15 + 52) = v18;
      *(_DWORD *)(v15 + 60) = (unsigned int)Size >> 4;
      v14 = sub_1400BD378(SystemArgument2, v12);
    }
  }
  sub_140122C20(SystemArgument2, v12);
  sub_1400F5FEC((_DWORD)SystemArgument2, 4096, v19, v20[0], (__int64)v20[1]);
  return (unsigned int)v14;
}
