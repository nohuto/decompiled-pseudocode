/*
 * XREFs of PpmEventHiddenProcessorBiosCapChange @ 0x140611418
 * Callers:
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventHiddenProcessorBiosCapChange(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  __int16 v6; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v8; // [rsp+68h] [rbp+17h]
  __int64 v9; // [rsp+70h] [rbp+1Fh]
  int *v10; // [rsp+78h] [rbp+27h]
  __int64 v11; // [rsp+80h] [rbp+2Fh]
  int *v12; // [rsp+88h] [rbp+37h]
  __int64 v13; // [rsp+90h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v15; // [rsp+C0h] [rbp+6Fh] BYREF
  int v16; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v16 = a3;
  v15 = a2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_BIOS_CAP_CHANGE);
    if ( (_BYTE)v3 )
    {
      v6 = *(unsigned __int8 *)(a1 + 208);
      v11 = 4LL;
      UserData.Ptr = (ULONGLONG)&v6;
      v13 = 4LL;
      v8 = a1 + 209;
      *(_QWORD *)&UserData.Size = 2LL;
      v10 = &v15;
      v12 = &v16;
      v9 = 1LL;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_BIOS_CAP_CHANGE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
