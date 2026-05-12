/*
 * XREFs of sub_1400ED960 @ 0x1400ED960
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400E7D1C @ 0x1400E7D1C (sub_1400E7D1C.c)
 *     sub_1400E92E8 @ 0x1400E92E8 (sub_1400E92E8.c)
 *     sub_1400EDE20 @ 0x1400EDE20 (sub_1400EDE20.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 *     sub_1400F2CA8 @ 0x1400F2CA8 (sub_1400F2CA8.c)
 *     sub_1401208A0 @ 0x1401208A0 (sub_1401208A0.c)
 */

__int64 __fastcall sub_1400ED960(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  unsigned int v4; // eax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // edi
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned __int64 v14; // rcx
  int v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // r14d
  __int64 v18; // r8
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 712);
  v2 = *(_QWORD *)(a1 + 856);
  v19 = 0LL;
  *(_QWORD *)(v1 + 88) = a1;
  v4 = *(unsigned __int16 *)(a1 + 6);
  *(_DWORD *)(v1 + 124) = v4;
  v5 = *(_QWORD *)(a1 + 128);
  v20 = 0LL;
  v6 = sub_1400143E0(72LL, 16LL * v4, 1363763538LL, *(_QWORD *)(v5 + 8));
  *(_QWORD *)(v1 + 24) = v6;
  if ( !v6
    || (v11 = sub_1400143E0(
                72LL,
                (unsigned __int64)(unsigned int)(*(_DWORD *)(v1 + 124) - 1) << 7,
                1363763538LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
        (*(_QWORD *)(v1 + 32) = v11) == 0LL) )
  {
    v9 = -1073741670;
LABEL_3:
    sub_1400E7D1C(a1, v7, v8);
    return (unsigned int)v9;
  }
  InitializeSListHead((PSLIST_HEADER)(v1 + 64));
  v13 = 0;
  if ( *(_DWORD *)(v1 + 124) != 1 )
  {
    do
    {
      v14 = (unsigned __int64)v13 << 7;
      *(_WORD *)(v14 + *(_QWORD *)(v1 + 32) + 54) = v13;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v1 + 64), (PSLIST_ENTRY)(v14 + *(_QWORD *)(v1 + 32)));
      ++v13;
    }
    while ( v13 < *(_DWORD *)(v1 + 124) - 1 );
  }
  *(_WORD *)(v1 + 136) = 0;
  *(_QWORD *)(v1 + 16) = *(_QWORD *)(a1 + 920) + 4096LL;
  *(_QWORD *)(v2 + 48) = a1;
  *(_WORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 920) + 4096LL + *(unsigned int *)(a1 + 1200);
  v15 = *(_DWORD *)(v1 + 124);
  v16 = v15 << 6;
  v17 = 16 * v15;
  v9 = sub_1400E736C(a1, v16, v12, (void **)&v20, &v19, 1);
  if ( v9 < 0 )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    sub_1400F0DFC(a1, 2147483650LL, 4LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 12LL) = 0;
  }
  sub_1400F2CA8(a1, v1, 0, v20, v19, 0LL, 0LL);
  v20 = 0LL;
  v19 = 0LL;
  sub_1401208A0(v1);
  v9 = sub_1400E736C(a1, v17, v18, (void **)&v20, &v19, 1);
  if ( v9 < 0 )
    goto LABEL_3;
  sub_1400E92E8(a1, v2, 0, v20, v19);
  v9 = sub_1400EDE20();
  if ( v9 < 0 )
    goto LABEL_3;
  return 0LL;
}
