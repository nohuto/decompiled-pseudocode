/*
 * XREFs of sub_1400C772C @ 0x1400C772C
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400C772C(_QWORD *SystemArgument2, char a2)
{
  char *v2; // r8
  int v5; // esi
  __int64 v6; // rdi
  char v7; // dl
  __int64 v8; // r8
  __int64 v10; // rdx
  int v11; // eax
  char v12; // cl
  int v13; // r8d
  void *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (char *)SystemArgument2[158];
  v5 = -1073741823;
  v6 = 0LL;
  *(_OWORD *)v14 = 0LL;
  if ( v2 )
  {
    v7 = *v2;
    if ( (*v2 & 1) != 0 )
    {
      if ( (*(_DWORD *)(SystemArgument2[74] + 96LL) & 1) != 0 && (v7 & 2) != 0 )
        *v2 = v7 | 8;
      v6 = sub_1401225EC(SystemArgument2);
      if ( !v6 )
        return 3221225626LL;
      v5 = sub_1400E736C(SystemArgument2, 16LL, v8, v14, &v14[1], 0);
      if ( v5 >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)v6 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v6 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        *(_WORD *)(*(_QWORD *)v6 + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)v6 + 4184LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)v6 + 4192LL) = sub_1400E90F0;
        *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
        *(void **)(*(_QWORD *)v6 + 4160LL) = v14[0];
        *(void **)(*(_QWORD *)v6 + 4168LL) = v14[1];
        *(_DWORD *)(*(_QWORD *)v6 + 4248LL) = 16;
        memmove(
          v14[0],
          (const void *)(SystemArgument2[158] + 1LL),
          (*(_BYTE *)SystemArgument2[158] & 8) != 0 ? 16LL : 8LL);
        v10 = *(_QWORD *)v6;
        v11 = *(_DWORD *)(*(_QWORD *)v6 + 4140LL);
        v12 = v11 ^ (*(_BYTE *)SystemArgument2[158] >> 3);
        *(void **)(v10 + 4120) = v14[1];
        *(_BYTE *)(v10 + 4096) = 9;
        *(_BYTE *)(v10 + 4136) = -127;
        *(_DWORD *)(v10 + 4140) = v11 ^ v12 & 1;
        v5 = sub_1400BD378(SystemArgument2, v6);
        if ( v5 >= 0 )
          *(_BYTE *)SystemArgument2[158] |= 4u;
      }
    }
  }
  sub_140122C20(SystemArgument2, v6);
  sub_1400F5FEC((_DWORD)SystemArgument2, 16, v13, v14[0], (__int64)v14[1]);
  return (unsigned int)v5;
}
