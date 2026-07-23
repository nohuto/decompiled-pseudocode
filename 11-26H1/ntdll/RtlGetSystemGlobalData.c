/*
 * XREFs of RtlGetSystemGlobalData @ 0x1800BA050
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 */

DWORD __cdecl RtlGetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  DWORD result; // eax
  __int64 v5; // rdx
  __int64 i; // [rsp+48h] [rbp+20h]

  if ( DataId == GlobalDataIdRngSeedVersion )
  {
    if ( Size == 8 )
    {
      *(_QWORD *)Buffer = MEMORY[0x7FFE0250];
      return 0;
    }
    else
    {
      return -1073741306;
    }
  }
  else
  {
    switch ( DataId )
    {
      case GlobalDataIdInterruptTime:
        if ( Size != 8 )
          return -1073741306;
        for ( i = MEMORY[0x7FFE0008]; MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010]; i = MEMORY[0x7FFE0008] )
          _mm_pause();
        goto LABEL_19;
      case GlobalDataIdTimeZoneBias:
        if ( Size != 8 )
          return -1073741306;
        if ( RtlGetCurrentServiceSessionId() )
          v5 = (__int64)NtCurrentPeb()->SharedData + 592;
        else
          v5 = 2147352608LL;
        i = *(_QWORD *)v5;
        if ( HIDWORD(*(_QWORD *)v5) == *(_DWORD *)(v5 + 8) )
        {
LABEL_19:
          *(_QWORD *)Buffer = i;
          result = 0;
        }
        else
        {
          do
            _mm_pause();
          while ( HIDWORD(*(_QWORD *)v5) != *(_DWORD *)(v5 + 8) );
          *(_QWORD *)Buffer = *(_QWORD *)v5;
          result = 0;
        }
        break;
      case GlobalDataIdImageNumberLow:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE002C];
        result = 0;
        break;
      case GlobalDataIdImageNumberHigh:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE002E];
        result = 0;
        break;
      case GlobalDataIdTimeZoneId:
        if ( Size != 4 )
          return -1073741306;
        if ( RtlGetCurrentServiceSessionId() )
          *(_DWORD *)Buffer = *((_DWORD *)NtCurrentPeb()->SharedData + 146);
        else
          *(_DWORD *)Buffer = MEMORY[0x7FFE0240];
        result = 0;
        break;
      case GlobalDataIdNtMajorVersion:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE026C];
        result = 0;
        break;
      case GlobalDataIdNtMinorVersion:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE0270];
        result = 0;
        break;
      case GlobalDataIdSystemExpirationDate:
        if ( Size != 8 )
          return -1073741306;
        *(_QWORD *)Buffer = MEMORY[0x7FFE02C8];
        result = 0;
        break;
      case GlobalDataIdKdDebuggerEnabled:
        if ( Size != 1 )
          return -1073741306;
        *(_BYTE *)Buffer = MEMORY[0x7FFE02D4];
        result = 0;
        break;
      case GlobalDataIdCyclesPerYield:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE02D6];
        result = 0;
        break;
      case GlobalDataIdSafeBootMode:
        if ( Size != 1 )
          return -1073741306;
        *(_BYTE *)Buffer = MEMORY[0x7FFE02EC];
        result = 0;
        break;
      case GlobalDataIdLastSystemRITEventTickCount:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE02E4];
        result = 0;
        break;
      case GlobalDataIdConsoleSharedDataFlags:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE02F0];
        result = 0;
        break;
      case GlobalDataIdQpcShift:
        if ( Size != 1 )
          return -1073741306;
        *(_BYTE *)Buffer = MEMORY[0x7FFE03C6];
        result = 0;
        break;
      case GlobalDataIdQpcBypassEnabled:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE03C6];
        result = 0;
        break;
      case GlobalDataIdQpcData:
        if ( Size != 8 )
          return -1073741306;
        *(_QWORD *)Buffer = MEMORY[0x7FFE03B8];
        result = 0;
        break;
      default:
        result = -1073741811;
        break;
    }
  }
  return result;
}
