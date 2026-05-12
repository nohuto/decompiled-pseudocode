/*
 * XREFs of sub_1400F60E0 @ 0x1400F60E0
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400F60E0(_QWORD *SystemArgument2)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // r8
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = SystemArgument2[74];
  v12[0] = 0LL;
  if ( (*(_DWORD *)(v1 + 96) & 4) == 0 || !*(_WORD *)(v1 + 338) )
    return 3221225659LL;
  v3 = sub_1401225EC(SystemArgument2);
  if ( !v3 )
    return 3221225626LL;
  v6 = sub_1400E736C((__int64)SystemArgument2, 0x1000u, v4, (void **)v12, (_QWORD *)v12 + 1, 0);
  if ( v6 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)v3 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v3 + 4184LL) = 0LL;
    *(_OWORD *)(*(_QWORD *)v3 + 4160LL) = v12[0];
    *(_DWORD *)(*(_QWORD *)v3 + 4248LL) = 4096;
    *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
    v7 = *(_QWORD *)v3;
    v8 = *((_QWORD *)&v12[0] + 1);
    v9 = *(unsigned __int8 **)&v12[0];
    *(_BYTE *)(v7 + 4096) = 6;
    *(_DWORD *)(v7 + 4100) = 0;
    *(_QWORD *)(v7 + 4120) = v8;
    *(_BYTE *)(v7 + 4136) = 4;
    *(_WORD *)(v7 + 4140) = 1;
    v6 = sub_1400BD378(SystemArgument2, v3);
    if ( v6 >= 0 )
    {
      v10 = SystemArgument2[133];
      if ( v10
        || (v10 = sub_1400143E0(
                    64LL,
                    (*(unsigned __int16 *)(v1 + 338) + 1LL) << 7,
                    1380147538LL,
                    *(_QWORD *)(SystemArgument2[16] + 8LL)),
            (SystemArgument2[133] = v10) != 0LL) )
      {
        memmove((void *)(v10 + 128), v9 + 128, (unsigned __int64)*v9 << 7);
      }
      else
      {
        v6 = -1073741670;
      }
    }
  }
  sub_140122C20(SystemArgument2, v3);
  sub_1400F5FEC((__int64)SystemArgument2, 0x1000u, v11, *(__int64 *)&v12[0], *((__int64 *)&v12[0] + 1));
  return (unsigned int)v6;
}
