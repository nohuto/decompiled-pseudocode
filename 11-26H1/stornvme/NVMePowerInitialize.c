/*
 * XREFs of NVMePowerInitialize @ 0x1400188C4
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x140013020 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeGetPowerState @ 0x14000F320 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x140010190 (NVMePowerStateGetMaxPower.c)
 *     NVMeValidatePowerStates @ 0x1400192C8 (NVMeValidatePowerStates.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140025668 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x14002A63C (NVMeSetAutoPowerStateTransition.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r15
  int v3; // ecx
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r12
  __int64 v7; // rdx
  unsigned __int8 v8; // si
  unsigned __int16 *PowerState; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int8 v15; // r9
  __int64 v16; // rax
  char v17; // r9
  unsigned int v18; // r10d
  __int64 v19; // rdx
  int v20; // r11d
  __int64 v21; // rcx
  __int64 v22; // r9
  int v24; // eax
  unsigned __int8 v25; // r11
  __int64 v26; // rbx
  __int64 v27; // rsi
  _DWORD *v28; // r9
  unsigned __int16 *v29; // rax
  unsigned int MaxPower; // eax
  __int64 v31; // r9
  __int64 v32; // r10
  char v33; // r11
  __int64 v34; // r9
  unsigned __int8 v35; // [rsp+120h] [rbp+67h]

  v1 = *(_QWORD *)(a1 + 1560);
  v3 = *(_DWORD *)(a1 + 80);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v35 = 0;
  if ( v3 == 4 || (*(_DWORD *)(a1 + 3764) & 0x100) != 0 )
    return 1;
  if ( v3 == 3 )
  {
    NVMeGetAutoPowerStateTransition(a1);
    if ( (*(_DWORD *)(a1 + 1600) & 0x40) == 0 )
    {
      LOBYTE(v7) = 1;
LABEL_50:
      NVMeSetAutoPowerStateTransition(a1, v7);
      NVMeGetAutoPowerStateTransition(a1);
    }
  }
  else if ( (*(_DWORD *)(a1 + 1600) & 1) == 0 )
  {
    if ( (unsigned __int8)NVMeValidatePowerStates(a1) )
    {
      v8 = 0;
      if ( *(unsigned __int8 *)(v1 + 263) != -1 )
      {
        do
        {
          PowerState = (unsigned __int16 *)NVMeGetPowerState(a1, v8);
          NVMePowerStateGetMaxPower(PowerState);
          if ( (*(_BYTE *)(v10 + 3) & 2) != 0 )
          {
            ++v6;
          }
          else
          {
            ++v5;
            v35 = v8;
          }
          if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
            StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
          ++v8;
        }
        while ( v8 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
        v4 = v35;
      }
      v11 = 32 * (v6 + 3);
      if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v11, 1701672526LL) )
      {
        v12 = v11 >> 2;
        if ( v12 )
          memset(0LL, 0, 4LL * v12);
        MEMORY[0] = 3;
        MEMORY[4] = 24;
        MEMORY[8] = 1;
        MEMORY[0xC] |= 0x40u;
        MEMORY[0x18] = 2;
        MEMORY[0x1C] = 40;
        MEMORY[0x28] = xmmword_140039D40;
        if ( *(_DWORD *)(a1 + 80) == 5 )
        {
          MEMORY[0x20] = 1;
        }
        else
        {
          MEMORY[0x20] = v6 + 1;
          if ( (unsigned int)v6 + 1 > 1 )
            MEMORY[0xC] |= 0x100u;
        }
        if ( MEMORY[0x20] > 8u )
          MEMORY[0x20] = 8;
        MEMORY[0xC] |= 0x10u;
        MEMORY[0x10] = -1;
        v13 = *(_DWORD *)(a1 + 80);
        if ( v13 == 2 )
        {
          MEMORY[0xC] |= 4u;
          *(_DWORD *)(a1 + 1600) |= 0x10u;
        }
        else if ( v13 == 5 )
        {
          MEMORY[0xC] |= 4u;
          MEMORY[0x10] = *(_DWORD *)(a1 + 92);
        }
        v14 = *(_DWORD *)(a1 + 80);
        if ( v14 < 2 || v14 - 3 <= 1 )
          MEMORY[0xC] |= 2u;
        v15 = v4 + 1;
        MEMORY[0xC] |= 8u;
        MEMORY[0x40] = 1;
        MEMORY[0x44] = 32;
        MEMORY[0x48] = 0LL;
        MEMORY[0x50] = 0LL;
        MEMORY[0x3C] = MEMORY[0x20] - 1;
        MEMORY[0x58] = -1;
        if ( MEMORY[0x20] > 1u )
        {
          do
          {
            v16 = NVMeGetPowerState(a1, v15);
            v15 = v17 + 1;
            v19 = 32LL * v18;
            *(_DWORD *)(32 * (v18 + 2LL) + 0x18) = -1;
            *(_DWORD *)(v19 + 64) = 1;
            *(_DWORD *)(v19 + 68) = v20;
            v21 = (unsigned int)(*(_DWORD *)(v16 + 4) + *(_DWORD *)(v16 + 8));
            *(_QWORD *)(v19 + 80) = 0LL;
            *(_QWORD *)(v19 + 72) = 10 * v21;
          }
          while ( v18 + 1 < MEMORY[0x20] );
        }
        if ( (unsigned int)StorPortExtendedFunction(48LL, a1, 0LL, 0LL) )
        {
          StorPortExtendedFunction(1LL, a1, 0LL, v22);
          *(_DWORD *)(a1 + 1600) &= 0xFFFFFFFA;
          *(_QWORD *)(a1 + 1584) = 0LL;
        }
        else
        {
          *(_DWORD *)(a1 + 1600) = (*(_DWORD *)(a1 + 1600) | 5) ^ *(_DWORD *)(a1 + 1600) & 8;
          *(_BYTE *)(a1 + 1609) = MEMORY[0x20];
          *(_QWORD *)(a1 + 1584) = 0LL;
          *(_DWORD *)(a1 + 1624) = 15;
          *(_DWORD *)(a1 + 1616) = 15;
          v24 = *(_DWORD *)(a1 + 100);
          *(_BYTE *)(a1 + 1610) = 0;
          *(_WORD *)(a1 + 1606) = 0;
          *(_DWORD *)(a1 + 1612) = 0;
          *(_BYTE *)(a1 + 1605) = v4;
          *(_DWORD *)(a1 + 1628) = 200;
          *(_DWORD *)(a1 + 1636) = 2000;
          *(_DWORD *)(a1 + 1632) = 100;
          if ( v24 != -1 )
            *(_DWORD *)(a1 + 1616) = v24;
          if ( v6 )
          {
            StorPortExtendedFunction(32LL, a1, a1 + 1640, v22);
            StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
            StorPortExtendedFunction(52LL, a1, 0LL, 0LL);
          }
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v5 + 40, 1701672526LL) )
          {
            v25 = 0;
            MEMORY[0] = 1;
            MEMORY[4] = 40;
            MEMORY[0x14] = 0;
            MEMORY[0x10] = 3;
            MEMORY[0x18] = v5;
            MEMORY[0x1C] = 40;
            if ( v5 )
            {
              v26 = 0LL;
              v27 = 0LL;
              do
              {
                v28 = (_DWORD *)(v27 + MEMORY[0x1C]);
                *v28 = 1;
                v28[1] = 24;
                v29 = (unsigned __int16 *)NVMeGetPowerState(a1, v25);
                MaxPower = NVMePowerStateGetMaxPower(v29);
                *(_QWORD *)(v31 + v32 + 16) = v26;
                v25 = v33 + 1;
                ++v26;
                v27 += 24LL;
                *(_QWORD *)(v31 + v32 + 8) = MaxPower / 0x3E8;
              }
              while ( v25 < v5 );
            }
            if ( (unsigned int)StorPortExtendedFunction(65LL, a1, 0LL, 0LL) )
            {
              StorPortExtendedFunction(1LL, a1, 0LL, v34);
            }
            else
            {
              *(_DWORD *)(a1 + 1600) |= 2u;
              *(_QWORD *)(a1 + 1592) = 0LL;
              *(_BYTE *)(a1 + 1606) = v5;
              *(_BYTE *)(a1 + 1607) = 0;
            }
            NVMeGetAutoPowerStateTransition(a1);
            if ( (*(_DWORD *)(a1 + 1600) & 0x40) == 0 )
              return 1;
            v7 = 0LL;
            goto LABEL_50;
          }
        }
      }
    }
    return 0;
  }
  return 1;
}
