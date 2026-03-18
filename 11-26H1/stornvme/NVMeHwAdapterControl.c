/*
 * XREFs of NVMeHwAdapterControl @ 0x140007FB0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerPowerDown @ 0x140007400 (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1400075D0 (NVMeControllerPowerUp.c)
 *     NVMeCancelFStateIdleTimer @ 0x140008540 (NVMeCancelFStateIdleTimer.c)
 *     NVMeUpdateResumeLatencyTolerance @ 0x1400085A0 (NVMeUpdateResumeLatencyTolerance.c)
 *     NVMeSetFStateIdleTimer @ 0x140008620 (NVMeSetFStateIdleTimer.c)
 *     NVMePerfStateTransition @ 0x1400086C0 (NVMePerfStateTransition.c)
 *     NVMeSetPowerState @ 0x140008720 (NVMeSetPowerState.c)
 *     NVMeSetHostMemoryBuffer @ 0x14000DB20 (NVMeSetHostMemoryBuffer.c)
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     CalculateTimeDurationIn100ns @ 0x14000F5B0 (CalculateTimeDurationIn100ns.c)
 *     NVMePowerSettingChangeNotification @ 0x14000FC80 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x140011820 (NVMeSystemPowerHint.c)
 *     NVMeControllerCompleteAllIORequests @ 0x140016A30 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResourceRequirements @ 0x140016B24 (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerPreparePLDR @ 0x140017420 (NVMeControllerPreparePLDR.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerStop @ 0x140017BD4 (NVMeControllerStop.c)
 *     NVMeGetControllerSerialNumber @ 0x14001802C (NVMeGetControllerSerialNumber.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x1400184FC (NVMeInitializeProcessorIoQueueMapping.c)
 *     NVMeMaxOperationalPower @ 0x1400187EC (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x140018F58 (NVMePowerSetPerfState.c)
 *     NVMeStartAsyncEventCommandsForMFND @ 0x140019014 (NVMeStartAsyncEventCommandsForMFND.c)
 *     NVMeSyncHostTime @ 0x14002ADCC (NVMeSyncHostTime.c)
 *     NVMeSendControllerInternalData @ 0x14003090C (NVMeSendControllerInternalData.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  unsigned __int64 v9; // rdx
  char v10; // bp
  int v11; // r14d
  unsigned __int8 v12; // bp
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  char v22; // al
  char v23; // cl
  __int64 v24; // rdx
  int *v25; // r9
  __int64 v26; // rbx
  __int16 v27; // ax
  bool v28; // cf
  __int64 v29; // rdx
  __int64 v30; // rcx
  _OWORD *v31; // rax
  bool v32; // zf
  size_t Size; // [rsp+28h] [rbp-C0h]
  __int64 v34; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v35; // [rsp+108h] [rbp+20h] BYREF

  v5 = 0;
  if ( !a1 || (*(_DWORD *)(a1 + 4064) & 0x1000) == 0 )
  {
    if ( a2 == 8 )
    {
      *(_DWORD *)(a1 + 1600) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1600) ^ (unsigned __int8)(4 * *(_BYTE *)(a3 + 20))) & 4;
      if ( *(_BYTE *)(a3 + 20) )
      {
        NVMeCancelFStateIdleTimer(a1);
        StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1648), 0)
          && !(unsigned __int8)NVMePerfStateTransition(a1) )
        {
          *(_DWORD *)(a1 + 1648) &= ~1u;
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 4u) == 1 )
        {
          LOBYTE(v6) = 1;
          NVMeSyncHostTime(a1, v6);
        }
      }
      else if ( *(_BYTE *)(a1 + 1609) > 1u )
      {
        NVMeUpdateResumeLatencyTolerance(a1);
LABEL_12:
        NVMeSetFStateIdleTimer();
      }
      return v5;
    }
    v9 = 0x140000000uLL;
    switch ( a2 )
    {
      case 0:
        v20 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 )
          *(_BYTE *)(a3 + 4) = 1;
        if ( v20 > 1 )
          *(_BYTE *)(a3 + 5) = 1;
        if ( v20 > 2 )
          *(_BYTE *)(a3 + 6) = 1;
        if ( v20 > 6 )
          *(_BYTE *)(a3 + 10) = 1;
        if ( v20 > 8 )
          *(_BYTE *)(a3 + 12) = 1;
        if ( v20 > 9 )
          *(_BYTE *)(a3 + 13) = 1;
        if ( v20 > 0xC )
          *(_BYTE *)(a3 + 16) = 1;
        if ( v20 > 0xD )
          *(_BYTE *)(a3 + 17) = 1;
        if ( v20 > 0xE )
          *(_BYTE *)(a3 + 18) = 1;
        if ( v20 > 0xF )
          *(_BYTE *)(a3 + 19) = 1;
        if ( v20 > 0x10 )
        {
          *(_BYTE *)(a3 + 20) = 1;
LABEL_98:
          *(_BYTE *)(a3 + 9) = 1;
          if ( v20 > 0x11 )
            *(_BYTE *)(a3 + 21) = 1;
          if ( v20 > 0x13 )
            *(_BYTE *)(a3 + 23) = 1;
          if ( v20 > 0x14 )
            *(_BYTE *)(a3 + 24) = 1;
          if ( v20 > 0x15 )
            *(_BYTE *)(a3 + 25) = 1;
          if ( v20 > 0x16 )
            *(_BYTE *)(a3 + 26) = 1;
          if ( v20 > 0x17 )
            *(_BYTE *)(a3 + 27) = 1;
          if ( v20 > 0x18 )
            *(_BYTE *)(a3 + 28) = 1;
          if ( v20 > 0x19 )
            *(_BYTE *)(a3 + 29) = 1;
          if ( v20 > 0x1A )
            *(_BYTE *)(a3 + 30) = 1;
          if ( v20 > 0x1B )
            *(_BYTE *)(a3 + 31) = 1;
          return v5;
        }
        if ( v20 > 5 )
          goto LABEL_98;
        return v5;
      case 1:
        v19 = *(_DWORD *)(a1 + 24);
        if ( (v19 & 8) != 0 )
        {
          NVMeControllerRemove(a1);
        }
        else if ( (v19 & 2) != 0 )
        {
          NVMeControllerStop(a1);
        }
        return v5;
      case 2:
        return v5;
      case 5:
        NVMePowerSettingChangeNotification(a1, a3);
        return v5;
      case 6:
        v14 = *(_DWORD *)(a3 + 20);
        if ( v14 == 1 )
        {
          v34 = 0LL;
          v35 = 0LL;
          StorPortExtendedFunction(47LL, a1, &v35, &v34);
          v15 = v34;
          v5 = 2;
          if ( (unsigned int)NVMeControllerPowerUp(a1) != -1056964596 )
            v5 = 0;
          StorPortExtendedFunction(47LL, a1, &v35, &v34);
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            return v5;
        }
        else
        {
          if ( v14 != 4 )
            return v5;
          if ( (*(_DWORD *)(a1 + 24) & 0x40) != 0 && *(_DWORD *)(a3 + 16) == 3 )
          {
            _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 8u);
            return v5;
          }
          v34 = 0LL;
          v35 = 0LL;
          StorPortExtendedFunction(47LL, a1, &v35, &v34);
          v15 = v34;
          NVMeControllerPowerDown(a1, v16, v17, v18);
          StorPortExtendedFunction(47LL, a1, &v35, &v34);
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            return v5;
        }
        CalculateTimeDurationIn100ns(v34 - v15, v35);
        StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        return v5;
      case 9:
        if ( *(_DWORD *)(a3 + 4) >= 0x18u && *(_DWORD *)a3 )
        {
          v10 = *(_BYTE *)(a3 + 20);
          v11 = *(unsigned __int8 *)(a1 + 1610);
          *(_BYTE *)(a1 + 1610) = v10;
          v12 = *(_DWORD *)(a3 + 20) ? *(_BYTE *)(a1 + 1605) + v10 : *(_BYTE *)(a1 + 1607);
          if ( v12 <= 0x1Fu )
          {
            NVMeSetPowerState(a1, v12);
            *(_BYTE *)(a1 + 1604) = v12;
            if ( !*(_BYTE *)(a1 + 1610)
              && (*(_DWORD *)(a1 + 56) & 0x4000000) == 0
              && v11 == *(unsigned __int8 *)(a1 + 1609) - 1
              && (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x40) != 0 )
            {
              *(_DWORD *)(a1 + 3748) |= 0x10u;
            }
            v13 = *(unsigned __int8 *)(a1 + 1610);
            if ( (_BYTE)v13 )
            {
              if ( v13 < *(unsigned __int8 *)(a1 + 1609) - 1 && (unsigned __int8)NVMeUpdateResumeLatencyTolerance(a1) )
                goto LABEL_12;
            }
          }
        }
        return v5;
      case 12:
        NVMeSystemPowerHint(a1, a3);
        return v5;
      case 13:
        if ( !*(_DWORD *)a3 )
          return 1;
        NVMeControllerFilterResourceRequirements(a1, a3);
        return v5;
      case 14:
        NVMeMaxOperationalPower(a1, a3);
        return v5;
      case 15:
        NVMePowerSetPerfState(a1, a3);
        return v5;
      case 16:
        LOBYTE(v9) = 17;
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFF7DF6 | 0x8008;
        NVMeControllerCompleteAllIORequests(a1, v9);
        *(_DWORD *)(a1 + 24) &= ~0x10u;
        return v5;
      case 17:
        return (unsigned int)NVMeGetControllerSerialNumber(a1, a3);
      case 19:
        v26 = *(_QWORD *)(a1 + 1560);
        v5 = 1;
        if ( a3 && *(_DWORD *)(a3 + 4) >= 0x98u )
        {
          memset((void *)a3, 0, 0x98uLL);
          *(_DWORD *)a3 = 1;
          v5 = 0;
          *(_DWORD *)(a3 + 4) = 152;
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(v26 + 4);
          *(_DWORD *)(a3 + 32) = *(_DWORD *)(v26 + 20);
        }
        return v5;
      case 20:
        v5 = 1;
        if ( !a3 )
          return v5;
        v21 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == 1 )
        {
          v22 = *(_BYTE *)(a1 + 21);
          v23 = (v22 ^ (2 * *(_BYTE *)(a3 + 4))) & 2;
        }
        else if ( v21 == 2 )
        {
          v22 = *(_BYTE *)(a1 + 21);
          v23 = (v22 ^ (4 * *(_BYTE *)(a3 + 4))) & 4;
        }
        else if ( v21 )
        {
          if ( v21 != 3 )
            return 0;
          v22 = *(_BYTE *)(a1 + 21);
          v23 = (v22 ^ (16 * *(_BYTE *)(a3 + 4))) & 0x10;
        }
        else
        {
          v22 = *(_BYTE *)(a1 + 21);
          v23 = (v22 ^ (8 * *(_BYTE *)(a3 + 4))) & 8;
        }
        *(_BYTE *)(a1 + 21) = v22 ^ v23;
        return 0;
      case 21:
        v5 = 1;
        if ( a3 && *(_DWORD *)(a3 + 4) >= 0x20u && *(_DWORD *)(a3 + 16) == 1 )
          return (unsigned int)NVMeSendControllerInternalData(a1, *(_QWORD *)(a3 + 24));
        return v5;
      case 22:
        v5 = 1;
        if ( a3 && *(_DWORD *)a3 == 16 && *(_DWORD *)(a3 + 4) >= 0x10u )
          return (unsigned __int8)NVMeControllerReset(a1, 0LL) == 0;
        return v5;
      case 23:
        if ( a3 )
        {
          if ( *(_DWORD *)a3 != 1 )
            return 1;
          if ( *(_WORD *)(a3 + 4) == 1 && *(_WORD *)(a3 + 6) >= 0x10u )
          {
            v27 = *(_WORD *)(a3 + 8);
            *(_DWORD *)(a1 + 12) |= 4u;
            *(_WORD *)(a1 + 4054) = v27;
            NVMeStartAsyncEventCommandsForMFND(a1);
          }
        }
        else
        {
          return (unsigned int)NVMeInitializeProcessorIoQueueMapping(a1);
        }
        return v5;
      case 24:
        v28 = *(_DWORD *)(a3 + 8) < 0xA0u;
        v5 = 3;
        *(_DWORD *)(a3 + 4) = 160;
        if ( !v28 )
        {
          v29 = *(_QWORD *)(a3 + 16);
          v5 = 0;
          *(_DWORD *)v29 = 2;
          *(_DWORD *)(v29 + 4) = 152;
          v30 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 64LL);
          *(_OWORD *)(v29 + 8) = *(_OWORD *)v30;
          *(_OWORD *)(v29 + 24) = *(_OWORD *)(v30 + 16);
          *(_OWORD *)(v29 + 40) = *(_OWORD *)(v30 + 32);
          *(_OWORD *)(v29 + 56) = *(_OWORD *)(v30 + 48);
          *(_OWORD *)(v29 + 72) = *(_OWORD *)(v30 + 64);
          *(_OWORD *)(v29 + 88) = *(_OWORD *)(v30 + 80);
          *(_OWORD *)(v29 + 104) = *(_OWORD *)(v30 + 96);
          *(_OWORD *)(v29 + 120) = *(_OWORD *)(v30 + 112);
          *(_OWORD *)(v29 + 136) = *(_OWORD *)(v30 + 128);
          *(_QWORD *)(v29 + 152) = *(_QWORD *)(v30 + 144);
        }
        return v5;
      case 25:
        v24 = *(_QWORD *)(a3 + 8);
        if ( *(_DWORD *)(a3 + 4) < 0xA0u || (unsigned int)(*(_DWORD *)v24 - 1) > 1 )
          return 1;
        *(_DWORD *)(a3 + 32) = *(_DWORD *)(v24 + 4);
        if ( *(_DWORD *)(a3 + 16) >= *(_DWORD *)(v24 + 4) )
        {
          if ( *(_DWORD *)v24 == 2 )
          {
            memmove(*(void **)(a3 + 24), (const void *)(v24 + 8), *(unsigned int *)(v24 + 4));
          }
          else
          {
            if ( *(_DWORD *)v24 != 1 )
              return 1;
            v31 = *(_OWORD **)(a3 + 24);
            *v31 = *(_OWORD *)(v24 + 8);
            v31[1] = *(_OWORD *)(v24 + 24);
            v31[2] = *(_OWORD *)(v24 + 40);
            v31[3] = *(_OWORD *)(v24 + 56);
            v31[4] = *(_OWORD *)(v24 + 72);
            v31[5] = *(_OWORD *)(v24 + 88);
            v31[6] = *(_OWORD *)(v24 + 104);
            v31[7] = *(_OWORD *)(v24 + 120);
            v31[8] = *(_OWORD *)(v24 + 136);
            *(_DWORD *)(*(_QWORD *)(a3 + 24) + 148LL) = *(_DWORD *)(v24 + 152);
          }
        }
        else
        {
          return 3;
        }
        return v5;
      case 26:
        v25 = *(int **)(a1 + 3720);
        if ( v25 )
        {
          LODWORD(Size) = v25[1];
          NVMeSetHostMemoryBuffer(a1, 0, 0, *v25, v25 + 2, Size);
        }
        v32 = (*(_BYTE *)(a1 + 21) & 8) == 0;
        *(_DWORD *)(a1 + 24) |= 0x100000u;
        if ( !v32 )
          StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
        return v5;
      case 27:
        LOBYTE(v5) = (unsigned int)NVMeControllerPreparePLDR(a1) != 0;
        return v5;
      default:
        return 1;
    }
  }
  return 0LL;
}
