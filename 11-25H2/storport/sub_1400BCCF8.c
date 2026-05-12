/*
 * XREFs of sub_1400BCCF8 @ 0x1400BCCF8
 * Callers:
 *     sub_1400BD410 @ 0x1400BD410 (sub_1400BD410.c)
 * Callees:
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400BCCF8(_QWORD *SystemArgument2, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdi
  int v5; // esi
  __int64 v6; // rax
  __int128 v8; // [rsp+50h] [rbp-18h] BYREF

  v8 = 0LL;
  v4 = 0LL;
  if ( (SystemArgument2[121] & 1) == 0
    || (SystemArgument2[121] & 2) != 0
    || (SystemArgument2[121] & 4) != 0
    || (SystemArgument2[121] & 8) != 0
    || (SystemArgument2[121] & 0x10) != 0 )
  {
    v5 = -1073741436;
  }
  else if ( SystemArgument2[159] && *(_DWORD *)SystemArgument2[159] )
  {
    v5 = -2147483631;
  }
  else
  {
    v4 = (__int64 *)sub_1401225EC(SystemArgument2);
    if ( v4 )
    {
      v5 = sub_1400E736C(SystemArgument2, 4096LL, a3, &v8, (char *)&v8 + 8, 0);
      if ( v5 >= 0 )
      {
        LOBYTE(a3) = 4;
        v6 = *v4;
        *((_WORD *)v4 + 26) = *(_WORD *)(SystemArgument2[16] + 1092LL);
        *(_DWORD *)(*v4 + 4256) = *(_DWORD *)(v6 + 4256) | 1;
        *(_DWORD *)(*v4 + 4256) |= 0x20u;
        *(_DWORD *)(*v4 + 4256) |= 2u;
        *(_DWORD *)(*v4 + 4256) &= ~0x40u;
        *(_WORD *)(*v4 + 4252) = 0;
        *(_QWORD *)(*v4 + 4184) = 0LL;
        *(_QWORD *)(*v4 + 4192) = sub_1400EBA60;
        *(_QWORD *)(*v4 + 4200) = v4;
        *(_OWORD *)(*v4 + 4160) = v8;
        *(_DWORD *)(*v4 + 4248) = 4096;
        sub_1400BC8A4((__int64)SystemArgument2, *v4 + 4096, a3, 0x1000u, *((__int64 *)&v8 + 1), -1, 0LL, 0, *v4, v4[1]);
        v5 = sub_140122670(SystemArgument2);
        if ( v5 >= 0 )
          return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( (_QWORD)v8 )
    sub_1400F5FEC((_DWORD)SystemArgument2, 4096, a3, v8, *((__int64 *)&v8 + 1));
  if ( v4 )
    sub_140122C20(SystemArgument2, v4);
  return (unsigned int)v5;
}
