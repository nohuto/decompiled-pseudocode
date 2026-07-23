/*
 * XREFs of PpmEventThermalCapChange @ 0x14044656C
 * Callers:
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PpmFireWmiEvent @ 0x14060FA28 (PpmFireWmiEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventThermalCapChange(__int64 a1, int a2)
{
  __int64 v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  char v5; // al
  int *v6; // rax
  int v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v10[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v11; // [rsp+60h] [rbp+17h] BYREF
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  v9 = a2;
  LODWORD(v12) = 0;
  v11 = 0LL;
  v8 = 0;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v12 = *(_QWORD *)(a1 - 35064);
    LODWORD(v11) = a2;
    if ( (xmmword_140FC0C10 & 0x8000) != 0 )
    {
      v10[1] = 16LL;
      v10[0] = &v11;
      EtwTraceKernelEvent((int)v10, 1, 0x80008000, 4662, 5249026);
    }
    if ( WmiThermalEventEnabled )
      PpmFireWmiEvent(a1 - 136, &PPM_THERMALCONSTRAINT_GUID, 16LL, &v11);
  }
  if ( *(_BYTE *)(a1 + 68) )
  {
    LOWORD(v8) = *(unsigned __int8 *)(a1 - 35056);
    v5 = *(_BYTE *)(a1 - 35055);
    v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_THERMAL_CAP_CHANGE;
    BYTE2(v8) = v5;
    *(_QWORD *)&UserData.Size = 3LL;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = &PPM_ETW_THERMAL_CAP_CHANGE_HV;
    v8 = *(_DWORD *)(v3 + 20);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  v6 = &v8;
  UserData.Ptr = (ULONGLONG)&v8;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v6) = EtwEventEnabled(PpmEtwHandle, v4);
    if ( (_BYTE)v6 )
    {
      v14 = &v9;
      v15 = 4LL;
      LOBYTE(v6) = EtwWriteEx(PpmEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v6;
}
