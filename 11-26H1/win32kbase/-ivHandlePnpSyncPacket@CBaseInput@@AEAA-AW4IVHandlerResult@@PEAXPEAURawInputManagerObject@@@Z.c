/*
 * XREFs of ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021F140
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsRimObjectUnregistered @ 0x14021FBF4 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpSyncPacket(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 j; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 i; // rdi
  int v10; // ecx

  if ( *a2 != 1 )
  {
    if ( *a2 != 2 || *(_BYTE *)(a3 + 81) )
      return 1LL;
    v8 = a3 + 104;
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      RIMUnlockExclusive(v8);
      return 2LL;
    }
    for ( i = *(_QWORD *)(a3 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      v10 = *(_DWORD *)(i + 168);
      if ( (v10 & 0x40) != 0 && (*(_DWORD *)(i + 172) & 1) == 0 )
      {
        if ( (v10 & 0x2000) != 0 )
          RIMIDERemoveInjectionDevice(*(_QWORD *)(i + 32));
        else
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1210);
      }
    }
    v7 = v8;
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(a3 + 81) )
  {
    v4 = a3 + 104;
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      RIMUnlockExclusive(v4);
      return 2LL;
    }
    for ( j = *(_QWORD *)(a3 + 424); j; j = *(_QWORD *)(j + 40) )
      *(_DWORD *)(j + 172) &= ~1u;
    v7 = v4;
LABEL_22:
    RIMUnlockExclusive(v7);
  }
  return 1LL;
}
