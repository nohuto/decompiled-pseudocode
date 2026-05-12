/*
 * XREFs of sub_1400EA590 @ 0x1400EA590
 * Callers:
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400344E0 @ 0x1400344E0 (sub_1400344E0.c)
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_1400C93A0 @ 0x1400C93A0 (sub_1400C93A0.c)
 *     sub_1400E7FA4 @ 0x1400E7FA4 (sub_1400E7FA4.c)
 *     sub_1400E9608 @ 0x1400E9608 (sub_1400E9608.c)
 *     sub_1400EC398 @ 0x1400EC398 (sub_1400EC398.c)
 *     sub_1400EC454 @ 0x1400EC454 (sub_1400EC454.c)
 *     sub_1400EC4CC @ 0x1400EC4CC (sub_1400EC4CC.c)
 *     sub_1400EC5DC @ 0x1400EC5DC (sub_1400EC5DC.c)
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 *     sub_1400F6764 @ 0x1400F6764 (sub_1400F6764.c)
 *     sub_1401223BC @ 0x1401223BC (sub_1401223BC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400EA590(_QWORD *SystemArgument2, char a2)
{
  __int64 v2; // r8
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  _BYTE *v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  int v18; // r10d
  int v19; // edx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // eax
  char v23[128]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = SystemArgument2[16];
  v5 = *(_QWORD *)(v2 + 576);
  v6 = v2 + 176;
  if ( !v5 )
    return 3221225860LL;
  *((_WORD *)SystemArgument2 + 470) = *(_WORD *)(v5 + 8);
  *((_WORD *)SystemArgument2 + 471) = *(_WORD *)(v5 + 10);
  *((_BYTE *)SystemArgument2 + 944) = *(_BYTE *)(v5 + 16);
  sub_1400344E0(
    v23,
    128LL,
    "Segment:%u Bus:%u Device:%u Function:%u",
    (unsigned __int16)(*(_DWORD *)(v2 + 568) >> 8),
    (unsigned __int8)*(_DWORD *)(v2 + 568),
    **(unsigned __int16 **)(v2 + 576),
    *(unsigned __int16 *)(*(_QWORD *)(v2 + 576) + 2LL));
  v8 = -1LL;
  do
    ++v8;
  while ( v23[v8] );
  if ( (unsigned int)sub_1400C93A0() )
  {
    v9 = (void *)SystemArgument2[94];
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52436152u);
  }
  v10 = (unsigned int)(v8 + 1);
  v11 = v10;
  v12 = (_BYTE *)sub_1400143E0(64LL, v10, 1380147538LL, *(_QWORD *)(SystemArgument2[16] + 8LL));
  SystemArgument2[94] = v12;
  if ( !v12 )
    return 3221225626LL;
  sub_14006FED8(v12, v11, (__int64)v23);
  v13 = *(_DWORD *)(v5 + 24) & 0xFFFFC000;
  SystemArgument2[116] = v13;
  SystemArgument2[116] = v13 | ((unsigned __int64)*(unsigned int *)(v5 + 28) << 32);
  v14 = (_QWORD *)sub_1400EC5DC(SystemArgument2, v6);
  SystemArgument2[115] = v14;
  if ( v14 )
  {
    SystemArgument2[73] = *v14;
    v15 = HIDWORD(SystemArgument2[73]);
    *((_DWORD *)SystemArgument2 + 144) = *(_DWORD *)(SystemArgument2[115] + 8LL);
    *((_DWORD *)SystemArgument2 + 300) = 4 << (v15 & 0xF);
    *((_DWORD *)SystemArgument2 + 301) = sub_1400EC4CC(SystemArgument2);
    if ( !a2 )
      sub_1400F6764(SystemArgument2);
    v16 = 3;
    if ( *(_DWORD *)(v6 + 20) != 1 )
      v16 = 1;
    *((_DWORD *)SystemArgument2 + 226) = v16;
    *((_WORD *)SystemArgument2 + 3) = 256;
    *((_DWORD *)SystemArgument2 + 2) = sub_1400EC454(SystemArgument2);
    v17 = *(_DWORD *)(v6 + 20) == 1;
    *(_DWORD *)(v6 + 48) = v18;
    *(_BYTE *)(v6 + 81) = 1;
    *(_BYTE *)(v6 + 145) = 0;
    *(_DWORD *)(v6 + 148) = 1;
    *(_DWORD *)(v6 + 160) = v17 + 1;
    *(_DWORD *)(v6 + 216) = 0;
    if ( *(_BYTE *)(v6 + 144) == 0x80 )
      *(_BYTE *)(v6 + 144) = 2;
    v19 = *(_DWORD *)(v6 + 220) | 0x2B;
    *(_BYTE *)(v6 + 147) = 0;
    *(_DWORD *)(v6 + 220) = v19;
    if ( (*(_DWORD *)(SystemArgument2[131] + 24LL) & 2) == 0 )
      *(_DWORD *)(v6 + 220) = v19 | 4;
    *(_DWORD *)(v6 + 24) = 0x200000;
    if ( !(unsigned int)sub_1400C93A0() || (result = sub_1400E9608(SystemArgument2), (int)result >= 0) )
    {
      if ( a2
        || ((unsigned int)sub_1400C93A0() || (result = sub_1400E9608(SystemArgument2), (int)result >= 0))
        && (result = sub_1400E7FA4((__int64)SystemArgument2, v6), (int)result >= 0)
        && ((*(_DWORD *)(SystemArgument2[16] + 976LL) & 8) == 0 || (*(_DWORD *)(SystemArgument2[131] + 24LL) & 8) == 0
          ? (SystemArgument2[17] &= ~0x100000000uLL)
          : (SystemArgument2[17] |= 0x100000000uLL),
            result = sub_1401223BC(SystemArgument2),
            (int)result >= 0) )
      {
        result = sub_1400F1D38(SystemArgument2, v20, 1LL);
        if ( (int)result >= 0 )
        {
          result = sub_1400ED16C(SystemArgument2);
          if ( (int)result >= 0 )
          {
            v21 = sub_1400EC398(SystemArgument2);
            *((_DWORD *)SystemArgument2 + 155) = v21;
            *(_DWORD *)(v6 + 24) = v21;
            v22 = 0xA00000u / *((_DWORD *)SystemArgument2 + 155);
            if ( v22 >= 0x20 )
            {
              LOBYTE(v22) = 32;
            }
            else if ( v22 <= 0xA )
            {
              LOBYTE(v22) = 10;
            }
            *((_BYTE *)SystemArgument2 + 1730) = v22;
            *(_DWORD *)(v6 + 28) = 513;
            *(_BYTE *)(v6 + 72) = 1;
            *(_BYTE *)(v6 + 97) = 1;
            *(_BYTE *)(v6 + 146) = -1;
            *(_DWORD *)(v6 + 212) = 32;
            *(_DWORD *)(v6 + 204) = 32;
            *(_DWORD *)(v6 + 208) = 32;
            SystemArgument2[121] &= ~2uLL;
            return 0LL;
          }
        }
        else
        {
          *((_DWORD *)SystemArgument2 + 294) = 5;
        }
      }
    }
  }
  else
  {
    *((_DWORD *)SystemArgument2 + 294) = 4;
    return 3221225858LL;
  }
  return result;
}
