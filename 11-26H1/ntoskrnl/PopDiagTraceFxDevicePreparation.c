/*
 * XREFs of PopDiagTraceFxDevicePreparation @ 0x140B085EC
 * Callers:
 *     PoFxPrepareDevice @ 0x14049B394 (PoFxPrepareDevice.c)
 *     PoFxAbandonDevice @ 0x140B083E4 (PoFxAbandonDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDevicePreparation(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4)
{
  _UNKNOWN **v4; // rax
  int v6; // edi
  unsigned __int16 v7; // ax
  __int16 v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int16 *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  int *v19; // [rsp+88h] [rbp+37h]
  __int64 v20; // [rsp+90h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v22; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+6Fh] BYREF

  v4 = &retaddr;
  v23 = a2;
  v22 = a1;
  v6 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_PREPARATION);
    if ( (_BYTE)v4 )
    {
      v7 = *a3;
      v17 = *a3;
      v9 = v7 >> 1;
      UserData.Ptr = (ULONGLONG)&v22;
      v12 = &v23;
      v14 = &v9;
      v16 = *((_QWORD *)a3 + 1);
      v19 = &v10;
      v10 = v6;
      *(_QWORD *)&UserData.Size = 8LL;
      v13 = 8LL;
      v15 = 2LL;
      v18 = 0;
      v20 = 4LL;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_PREPARATION, 0LL, 5u, &UserData);
    }
  }
  return (char)v4;
}
