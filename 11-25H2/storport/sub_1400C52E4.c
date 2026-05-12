/*
 * XREFs of sub_1400C52E4 @ 0x1400C52E4
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400C52E4(PVOID *SystemArgument2, char a2)
{
  __int64 v4; // r8
  __int64 *v5; // r14
  int v7; // esi
  unsigned int v8; // r8d
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // r8d
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]

  v15 = 0LL;
  v16 = 0xAE3430FE2131D944uLL;
  v17 = 0x5A1983BA3DFD4DABLL;
  v5 = (__int64 *)sub_1401225EC(SystemArgument2);
  if ( !v5 )
    return 3221225626LL;
  v7 = sub_1400E736C(SystemArgument2, 512LL, v4, &v15, (char *)&v15 + 8, 0);
  if ( v7 >= 0 )
  {
    v9 = v15;
    if ( SystemArgument2[153]
      || (v10 = sub_1400143E0(64LL, 512LL, 1380147538LL, *((_QWORD *)SystemArgument2[16] + 1)),
          (SystemArgument2[153] = (PVOID)v10) != 0LL) )
    {
      LOBYTE(v8) = -63;
      *(_DWORD *)(*v5 + 4256) |= 1u;
      *(_DWORD *)(*v5 + 4256) |= 0x20u;
      *(_DWORD *)(*v5 + 4256) |= 2u;
      *(_DWORD *)(*v5 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*v5 + 4252) = 0;
      *(_QWORD *)(*v5 + 4184) = 0LL;
      *(_QWORD *)(*v5 + 4192) = sub_1400E90F0;
      *(_QWORD *)(*v5 + 4200) = v5;
      *(_OWORD *)(*v5 + 4160) = v15;
      *(_DWORD *)(*v5 + 4248) = 512;
      sub_1400BC8A4((__int64)SystemArgument2, *v5 + 4096, v8, 0x200u, *((__int64 *)&v15 + 1), -1, 0LL, 0, *v5, v5[1]);
      v7 = sub_1400BD378(SystemArgument2, (__int64)v5);
      if ( v7 >= 0 && *(_QWORD *)(v9 + 496) == v16 && *(_QWORD *)(v9 + 504) == v17 )
      {
        v12 = SystemArgument2[153];
        v13 = 4LL;
        do
        {
          *v12 = *(_OWORD *)v9;
          v12[1] = *(_OWORD *)(v9 + 16);
          v12[2] = *(_OWORD *)(v9 + 32);
          v12[3] = *(_OWORD *)(v9 + 48);
          v12[4] = *(_OWORD *)(v9 + 64);
          v12[5] = *(_OWORD *)(v9 + 80);
          v12[6] = *(_OWORD *)(v9 + 96);
          v12 += 8;
          v14 = *(_OWORD *)(v9 + 112);
          v9 += 128LL;
          *(v12 - 1) = v14;
          --v13;
        }
        while ( v13 );
        goto LABEL_8;
      }
    }
    else
    {
      v7 = -1073741670;
    }
  }
  ExFreePoolWithTag(SystemArgument2[153], 0x52436152u);
  SystemArgument2[17] = (PVOID)((unsigned __int64)SystemArgument2[17] | 0x1000000);
  SystemArgument2[153] = 0LL;
LABEL_8:
  sub_140122C20(SystemArgument2, v5);
  sub_1400F5FEC((_DWORD)SystemArgument2, 512, v11, v15, *((__int64 *)&v15 + 1));
  return (unsigned int)v7;
}
