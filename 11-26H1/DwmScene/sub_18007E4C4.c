/*
 * XREFs of sub_18007E4C4 @ 0x18007E4C4
 * Callers:
 *     sub_18004EF74 @ 0x18004EF74 (sub_18004EF74.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18007AC98 @ 0x18007AC98 (sub_18007AC98.c)
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_18007B264 @ 0x18007B264 (sub_18007B264.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_18007C620 @ 0x18007C620 (sub_18007C620.c)
 *     sub_18007CA38 @ 0x18007CA38 (sub_18007CA38.c)
 *     sub_18007D898 @ 0x18007D898 (sub_18007D898.c)
 */

__int64 __fastcall sub_18007E4C4(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  const void *v14; // rdx
  char *v15; // r9
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  Spectre::Utils::SpectreException *v18; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v19[56]; // [rsp+30h] [rbp-58h] BYREF

  v17 = a1;
  sub_18007C620(*(_QWORD *)(a1 + 16));
  try
  {
    v4 = (unsigned __int16)sub_18007BE98(*(_QWORD *)(a1 + 16), a2, 1);
    v5 = *(_QWORD *)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v18 )
  {
    sub_18007C50C(*(_QWORD *)(v17 + 16));
    sub_1800183D8((__int64)v19, (__int64)v18);
    throw (Spectre::Utils::SpectreException *)v19;
  }
  sub_18007C50C(v5);
  v6 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v6 + 1242);
  v7 = 56LL * *(unsigned __int16 *)(v6 + 2 * v4 + 128);
  v8 = *(_QWORD *)(v6 + 56);
  if ( *(_DWORD *)(v7 + v8 + 36) != 8 )
  {
    v9 = (unsigned int)((__int64)(*(_QWORD *)(v6 + 88) - *(_QWORD *)(v6 + 80)) >> 2);
    v10 = *(_QWORD *)(a1 + 32);
    v11 = (*(_QWORD *)(a1 + 40) - v10) >> 2;
    if ( v9 < v11 )
    {
      v12 = v10 + 4 * v9;
LABEL_12:
      *(_QWORD *)(a1 + 40) = v12;
      goto LABEL_13;
    }
    if ( v9 > v11 )
    {
      if ( v9 <= (*(_QWORD *)(a1 + 48) - v10) >> 2 )
      {
        v12 = sub_18007B264(*(_QWORD *)(a1 + 40), v9 - v11, a1 + 32);
        goto LABEL_12;
      }
      sub_18007B100((const void **)(a1 + 32), v9);
    }
LABEL_13:
    v13 = sub_18007CA38(*(_DWORD *)(v7 + v8 + 36));
    sub_18007D898(&v17, v14, (__int64)v14 + 4 * v13, v15);
    ++*(_DWORD *)(a1 + 80);
    return (unsigned __int16)v4;
  }
  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 72) )
  {
    sub_18007AEA8(
      (__int64 *)(a1 + 56),
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(v6 + 104) + 40LL * *(unsigned int *)(v7 + v8 + 40));
  }
  else
  {
    sub_18007AC98();
    *(_QWORD *)(a1 + 64) += 40LL;
  }
  return (unsigned __int16)v4;
}
