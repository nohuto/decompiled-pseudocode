/*
 * XREFs of VslpIumInitializeTelemetry @ 0x140CBFAF4
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1405C6E54 (VslpIumPhase4Initialize.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

char VslpIumInitializeTelemetry()
{
  char result; // al
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned int v4; // edx
  int *v5; // rcx
  int v6; // ecx
  int v7; // edx
  REGHANDLE v8; // rcx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  int *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh] BYREF
  int *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  int *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  result = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06C30, 0LL, 0LL);
  if ( (*(_DWORD *)(KeLoaderBlock_0 + 264) & 1) != 0 )
  {
    if ( (unsigned int)dword_140E06C30 <= 5 )
      goto LABEL_8;
    result = tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL);
    if ( result )
    {
      v3 = *(_QWORD *)(v2 + 240);
      v4 = *(unsigned __int16 *)(v3 + 2784);
      v5 = *(int **)(v3 + 2792);
      v14 = &v17;
      v18 = &v9;
      v16 = v5;
      v17 = v4;
      v9 = (v1 >> 2) & 1;
      v15 = 2LL;
      v19 = 4LL;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E06C30,
                 (unsigned __int8 *)&byte_140047087,
                 0LL,
                 0LL,
                 5u,
                 v13);
    }
  }
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL);
    if ( result )
    {
      v14 = &v12;
      v9 = (unsigned __int8)VslVsmEnabled;
      v16 = &v9;
      v12 = 0x1000000LL;
      v15 = 8LL;
      v17 = 4LL;
      v6 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2888LL);
      v18 = &v10;
      v10 = v6;
      v19 = 4LL;
      v7 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2892LL);
      v20 = &v11;
      v11 = v7;
      v21 = 4LL;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E06C30,
                 (unsigned __int8 *)byte_1400470C3,
                 0LL,
                 0LL,
                 6u,
                 v13);
    }
  }
LABEL_8:
  if ( !VslVsmEnabled )
  {
    v8 = qword_140E06C50;
    qword_140E06C50 = 0LL;
    dword_140E06C30 = 0;
    return EtwUnregister(v8);
  }
  return result;
}
