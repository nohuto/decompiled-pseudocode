/*
 * XREFs of sub_1400FC314 @ 0x1400FC314
 * Callers:
 *     sub_140197C28 @ 0x140197C28 (sub_140197C28.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400BDDF4 @ 0x1400BDDF4 (sub_1400BDDF4.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400FC314(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // r12d
  unsigned int v5; // esi
  __int64 *v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rbp
  __int64 *v9; // rcx
  unsigned __int64 v10; // r8
  __int64 *v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdi
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // rbp
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r8
  _OWORD v23[4]; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+90h] [rbp+18h]

  v3 = *(unsigned int *)(a2 + 20);
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v23[0] = 0LL;
  if ( !(_DWORD)v3 )
    return 3221225485LL;
  v7 = *(_DWORD *)(a2 + 24);
  if ( v7 < 0x10 )
    return 3221225485LL;
  if ( (v7 & 0xFFFFFFF0) != 0x10 )
    return 3221225485LL;
  v8 = *(unsigned int *)(a1 + 64);
  v9 = (__int64 *)(a2 + v3);
  v25 = *v9;
  if ( *v9 % v8 )
    return 3221225485LL;
  v10 = v9[1];
  if ( v10 % v8 )
    return 3221225485LL;
  v11 = (__int64 *)(a1 + 16);
  v12 = v10 / v8;
  if ( v10 / v8 )
  {
    v13 = *(unsigned int *)(*v11 + 620);
    if ( v13 >= v12 * (unsigned int)v8 )
      v13 = v12 * (unsigned int)v8;
    v4 = sub_1400E736C(*v11, v13, v10, (void **)v23, (_QWORD *)v23 + 1, 0);
    v5 = v13;
    if ( v4 >= 0 )
    {
      v6 = (__int64 *)sub_1401225EC(*v11);
      if ( v6 )
      {
        v14 = 0;
        v24 = 0;
        v15 = 0LL;
        v16 = v25 / v8;
        v26 = v25 / v8;
        do
        {
          v17 = *(unsigned int *)(a1 + 64);
          v18 = v13 / v17;
          if ( v13 / v17 >= v12 - v15 )
            LODWORD(v18) = v12 - v14;
          v19 = *(_DWORD *)(a1 + 56);
          v20 = *v6 + 4096;
          *(_DWORD *)(v20 + 48) &= 0xFF0FFFFF;
          *(_DWORD *)(v20 + 40) = v16 / v17;
          *(_BYTE *)v20 = 1;
          *(_DWORD *)v20 &= 0xFFFFFCFF;
          *(_WORD *)(v20 + 54) = 0;
          *(_QWORD *)(v20 + 16) = 0LL;
          *(_BYTE *)(v20 + 52) = 0;
          *(_QWORD *)(v20 + 56) = 0LL;
          *(_DWORD *)(v20 + 4) = v19;
          *(_DWORD *)(v20 + 44) = (unsigned __int64)(v16 / v17) >> 32;
          *(_WORD *)(v20 + 48) = v18 - 1;
          *(_DWORD *)(v20 + 48) &= 0x3FFFFFFu;
          if ( !(unsigned int)sub_1400BDDF4(
                                *v6,
                                *v6 + 4096,
                                *((__int64 *)&v23[0] + 1),
                                *(_DWORD *)(a1 + 64) * (int)v18,
                                (_QWORD *)*v6,
                                v6[1]) )
            break;
          *(_DWORD *)(*v6 + 4256) &= ~1u;
          *(_DWORD *)(*v6 + 4256) |= 0x20u;
          *(_DWORD *)(*v6 + 4256) |= 2u;
          *(_QWORD *)(*v6 + 4184) = 0LL;
          *(_QWORD *)(*v6 + 4192) = sub_1400E90F0;
          *(_QWORD *)(*v6 + 4200) = v6;
          *(_OWORD *)(*v6 + 4160) = v23[0];
          *(_DWORD *)(*v6 + 4248) = *(_DWORD *)(a1 + 64) * v18;
          v4 = sub_1400BD378((PVOID)*v11, (__int64)v6);
          if ( v4 < 0 )
            break;
          v14 = v18 + v24;
          v16 = (unsigned int)v18 + v26;
          v15 = v14;
          v24 += v18;
          v26 = v16;
        }
        while ( v14 < v12 );
      }
      else
      {
        v4 = -1073741670;
      }
    }
  }
  sub_140122C20(*v11, v6);
  if ( *(_QWORD *)&v23[0] )
    sub_1400F5FEC(*v11, v5, v21, *(__int64 *)&v23[0], *((__int64 *)&v23[0] + 1));
  return (unsigned int)v4;
}
