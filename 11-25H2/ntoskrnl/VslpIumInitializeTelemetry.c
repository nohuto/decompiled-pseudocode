/*
 * XREFs of VslpIumInitializeTelemetry @ 0x140C08BD4
 * Callers:
 *     VslpIumPhase4Initialize @ 0x14058B400 (VslpIumPhase4Initialize.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 */

char VslpIumInitializeTelemetry()
{
  char result; // al
  __int64 v1; // r9
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // edx
  int *v6; // rcx
  __int64 v7; // rdx
  int v8; // ecx
  REGHANDLE v9; // rcx
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  int v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  int *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh] BYREF
  int v20; // [rsp+8Ch] [rbp+23h]
  int *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]
  int *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+ACh] [rbp+43h]

  result = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06D30, 0LL, 0LL);
  v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  if ( (*(_DWORD *)(v1 + 264) & 1) != 0 )
  {
    if ( (unsigned int)dword_140E06D30 <= 5 )
      goto LABEL_8;
    result = tlgKeywordOn((__int64)&dword_140E06D30, 0x400000000000LL);
    if ( result )
    {
      v4 = *(_QWORD *)(v3 + 240);
      v5 = *(unsigned __int16 *)(v4 + 2784);
      v6 = *(int **)(v4 + 2792);
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = (__int64 *)&v19;
      v21 = &v10;
      v18 = v6;
      v19 = v5;
      v10 = (v2 >> 2) & 1;
      v16 = 2;
      v22 = 4;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E06D30,
                 (unsigned __int8 *)byte_140044BA3,
                 0LL,
                 0LL,
                 5u,
                 v14);
    }
  }
  if ( (unsigned int)dword_140E06D30 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06D30, 0x400000000000LL);
    if ( result )
    {
      v7 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v17 = 0;
      v20 = 0;
      v15 = &v13;
      v10 = (unsigned __int8)VslVsmEnabled;
      v18 = &v10;
      v13 = 0x1000000LL;
      v16 = 8;
      v19 = 4;
      v8 = *(_DWORD *)(*(_QWORD *)(v7 + 240) + 2888LL);
      v23 = 0;
      v21 = &v11;
      v11 = v8;
      v22 = 4;
      LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(v7 + 240) + 2892LL);
      v26 = 0;
      v24 = &v12;
      v12 = v7;
      v25 = 4;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E06D30,
                 (unsigned __int8 *)&dword_140044B54,
                 0LL,
                 0LL,
                 6u,
                 v14);
    }
  }
LABEL_8:
  if ( !VslVsmEnabled )
  {
    v9 = qword_140E06D50;
    qword_140E06D50 = 0LL;
    dword_140E06D30 = 0;
    return EtwUnregister(v9);
  }
  return result;
}
