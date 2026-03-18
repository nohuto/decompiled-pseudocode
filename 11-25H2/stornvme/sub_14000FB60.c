/*
 * XREFs of sub_14000FB60 @ 0x14000FB60
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140019D00 @ 0x140019D00 (sub_140019D00.c)
 *     sub_140019D70 @ 0x140019D70 (sub_140019D70.c)
 *     sub_140028BD4 @ 0x140028BD4 (sub_140028BD4.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006F00 @ 0x140006F00 (sub_140006F00.c)
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000B280 @ 0x14000B280 (sub_14000B280.c)
 *     sub_14000CB60 @ 0x14000CB60 (sub_14000CB60.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14000D0D0 @ 0x14000D0D0 (sub_14000D0D0.c)
 *     sub_14000D250 @ 0x14000D250 (sub_14000D250.c)
 *     sub_14000D710 @ 0x14000D710 (sub_14000D710.c)
 *     sub_14001B6FC @ 0x14001B6FC (sub_14001B6FC.c)
 *     sub_14001F138 @ 0x14001F138 (sub_14001F138.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 *     sub_1400285D0 @ 0x1400285D0 (sub_1400285D0.c)
 *     sub_140029900 @ 0x140029900 (sub_140029900.c)
 *     sub_14002DDDC @ 0x14002DDDC (sub_14002DDDC.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032860 @ 0x140032860 (sub_140032860.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14000FB60(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r14d
  __int64 v7; // rdx
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int8 v19; // di
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  bool v28; // zf
  __int64 v30; // [rsp+B0h] [rbp-68h]
  __int64 v31; // [rsp+B8h] [rbp-60h]
  _OWORD *v32; // [rsp+E0h] [rbp-38h]

  v30 = *(_QWORD *)(a1 + 1560);
  sub_14000B280(a1, a2);
  v5 = 1LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_14000D250(a1, a2);
    sub_14000D0D0(a1, a2);
    if ( !*(_BYTE *)(a1 + 20) )
    {
      v6 = (*(_DWORD *)(a1 + 56) & 2) != 0 ? 0x80000000 : *(_DWORD *)(a1 + 244);
      if ( (unsigned int)StorPortExtendedFunction(82LL, a1, 512LL, 0LL) && v6 != 0x80000000 )
        StorPortExtendedFunction(82LL, a1, 512LL, 0LL);
    }
    v5 = 1LL;
  }
  v7 = *(unsigned int *)(a1 + 56);
  if ( (v7 & 0x2000) != 0 )
  {
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1560) + 76LL);
    if ( (v4 & 1) == 0 && (v4 & 6) == 2 && (v4 & 8) == 0 && (*(_DWORD *)(a1 + 4056) & 8) == 0 && !*(_BYTE *)(a1 + 20) )
    {
      v8 = (v7 & 2) != 0 ? 0x80000000 : *(_DWORD *)(a1 + 244);
      if ( (unsigned int)StorPortExtendedFunction(82LL, a1, 512LL, 0LL) && v8 != 0x80000000 )
        StorPortExtendedFunction(82LL, a1, 512LL, 0LL);
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 && !*(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(a1 + 220) = -1;
    if ( *(_BYTE *)(a1 + 1008) )
      *(_DWORD *)(a1 + 4056) |= 0x20000u;
    v9 = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(a1 + 1019) = 0;
    sub_140032C80(v9, 0LL, 4232LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
    *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(a1 + 1008) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v10 = *(_QWORD *)(a1 + 1104);
    *(_DWORD *)(v10 + 4140) &= 0xFFC0FFFF;
    *(_BYTE *)(v10 + 4096) = 10;
    *(_BYTE *)(v10 + 4136) = 4;
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = sub_14002A820;
    sub_1400092F0(a1, a1 + 1016);
    sub_140008590(a1, a1 + 1016, a2, 0x989680u);
  }
  if ( !(unsigned int)sub_14001B6FC(v4, v7, v5) )
  {
    sub_1400285D0(a1, a2);
    sub_140006F00(a1);
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    v18 = v30;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 12) & 8) == 0 )
    {
      v11 = *(_OWORD **)(a1 + 3928);
      v12 = *(_QWORD *)(a1 + 1104);
      v32 = v11;
      *(_QWORD *)(a1 + 3928) = 0LL;
      if ( v11 )
      {
        v31 = *(_QWORD *)(a1 + 3944);
        if ( v31 )
        {
          v13 = 4LL;
          do
          {
            *v11 = 0LL;
            v11[1] = 0LL;
            v11[2] = 0LL;
            v11[3] = 0LL;
            v11[4] = 0LL;
            v11[5] = 0LL;
            v11[6] = 0LL;
            v11 += 8;
            *(v11 - 1) = 0LL;
            --v13;
          }
          while ( v13 );
          if ( *(_BYTE *)(a1 + 1008) )
            *(_DWORD *)(a1 + 4056) |= 0x20000u;
          v14 = *(_QWORD *)(a1 + 1104);
          *(_BYTE *)(a1 + 1019) = 0;
          sub_140032C80(v14, 0LL, 4232LL);
          *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
          *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
          *(_BYTE *)(a1 + 1008) = 1;
          *(_BYTE *)(v12 + 4225) |= 3u;
          *(_WORD *)(v12 + 4212) = 0;
          v15 = *(_QWORD *)(a1 + 1560);
          *(_BYTE *)(v12 + 4136) = -63;
          v16 = *(_DWORD *)(v12 + 4136) & 0xF07F7FFF;
          *(_BYTE *)(v12 + 4096) = 2;
          *(_DWORD *)(v12 + 4100) = -1;
          *(_DWORD *)(v12 + 4136) = v16 | 0x7F0000;
          if ( (v31 & 0xFFF) == 0 )
          {
            *(_QWORD *)(v12 + 4120) = v31;
            *(_QWORD *)(v12 + 4128) = 0LL;
          }
          *(_WORD *)(v12 + 4142) = 0;
          if ( (*(_BYTE *)(v15 + 261) & 4) != 0 )
          {
            *(_DWORD *)(v12 + 4138) = 127;
            *(_QWORD *)(v12 + 4144) = 0LL;
          }
          *(_BYTE *)(v12 + 4225) |= 4u;
          *(_QWORD *)(v12 + 4160) = v32;
          *(_QWORD *)(v12 + 4168) = v31;
          *(_QWORD *)(v12 + 4192) = sub_140029830;
          *(_DWORD *)(v12 + 4208) = 512;
          sub_1400092F0(a1, a1 + 1016);
          sub_140008590(a1, a1 + 1016, a2, 0x989680u);
        }
      }
      else
      {
        sub_140006100(a1, 0x200u);
      }
    }
    v17 = *(_QWORD *)(a1 + 3928);
    if ( v17 && *(_DWORD *)(v17 + 4) )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 24), 0xCu) )
      {
        if ( (unsigned int)sub_140029900(a1) )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), 0xCu);
        else
          sub_14002510C(a1, sub_14001D2F0, 0LL);
      }
      *(_DWORD *)(a1 + 28) = 24;
      sub_14000D710(a1);
      StorPortExtendedFunction(0LL, a1, 528LL, 1701672526LL);
      if ( (*(_BYTE *)(a1 + 21) & 4) != 0 )
        StorPortExtendedFunction(86LL, a1, 0LL, 2LL);
    }
    v18 = v30;
    if ( (*(_BYTE *)(v30 + 261) & 0x48) == 0x48 && !*(_BYTE *)(a1 + 20) )
      sub_140006100(a1, 0x200u);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x40) != 0 )
    sub_14002DDDC(a1, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 525LL) & 1) != 0 )
  {
    v19 = *(_BYTE *)(a1 + 3956);
    if ( (v19 & 6) == 2 )
    {
      sub_140009580(a1, a1 + 1008);
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~4u;
      *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
      v20 = *(_QWORD *)(a1 + 1104);
      v21 = *(_DWORD *)(v20 + 4140);
      *(_BYTE *)(v20 + 4096) = 9;
      *(_BYTE *)(v20 + 4136) = 6;
      *(_DWORD *)(v20 + 4140) = v21 ^ ((unsigned __int8)v21 ^ v19) & 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = sub_1400203E0;
      sub_1400092F0(a1, a1 + 1016);
      LOBYTE(v22) = 1;
      sub_140008590(a1, a1 + 1016, v22, 0x989680u);
    }
  }
  sub_14000CB60(a1);
  if ( (*(_BYTE *)(v18 + 520) & 0x20) != 0 )
    sub_14001F138(a1);
  v27 = *(_DWORD *)(a1 + 24) & 0xFFDDFFFF;
  *(_DWORD *)(a1 + 28) = 0;
  v28 = *(_BYTE *)(a1 + 20) == 0;
  *(_DWORD *)(a1 + 24) = v27 | 0x201;
  if ( v28 )
    StorPortExtendedFunction(118LL, a1, sub_140019EA0, v26);
  if ( (unsigned int)sub_14001B6FC(v24, v23, v25) )
  {
    sub_1400285D0(a1, a2);
    sub_140006F00(a1);
  }
  return 1;
}
