/*
 * XREFs of PoTtmInitiatePowerStateTransition @ 0x1407DB808
 * Callers:
 *     TtmpInitiateModernStandbyTransition @ 0x1407E703C (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopTriggerMonitorPowerEvent @ 0x140A3EF18 (PopTriggerMonitorPowerEvent.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PoTtmInitiatePowerStateTransition(char a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v12; // [rsp+28h] [rbp-39h]
  _DWORD v13[4]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v14[2]; // [rsp+48h] [rbp-19h] BYREF
  __int128 v15; // [rsp+50h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-1h]
  _BYTE v17[80]; // [rsp+68h] [rbp+7h] BYREF

  memset_0(v17, 0, 0x4CuLL);
  PopAcquirePolicyLock(v5, v4);
  PopFilterCapabilities(&stru_140F10828.WaitBlockFill11[24], v17);
  v10 = 0;
  if ( v17[20] )
  {
    LOBYTE(v7) = a1 == 0;
    v10 = PopTriggerMonitorPowerEvent(v7, a2);
  }
  else if ( v17[3] || v17[4] || v17[5] )
  {
    v13[2] = 0;
    v16 = 0LL;
    v15 = 0LL;
    if ( a1 )
    {
      if ( !LOBYTE(stru_140F110C0.QuantumTarget) )
      {
        v14[0] = 5;
        v14[1] = 128;
        v13[0] = 2;
        v13[1] = 1;
        PopExecutePowerAction((unsigned int)v14, 0, (unsigned int)v13, 4, 1);
      }
    }
    else if ( LOBYTE(stru_140F110C0.QuantumTarget) )
    {
      byte_140F11080 = 1;
      v10 = 259;
    }
  }
  PopReleasePolicyLock(v7, v6, v8, v9, v12);
  return v10;
}
