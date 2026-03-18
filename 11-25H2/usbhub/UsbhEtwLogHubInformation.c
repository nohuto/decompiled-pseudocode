/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1400319A4
 * Callers:
 *     UsbhEtwRundown @ 0x14002FFDC (UsbhEtwRundown.c)
 *     UsbhSetFdoPnpState @ 0x1400512E4 (UsbhSetFdoPnpState.c)
 * Callees:
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x14002ABB0 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UsbhEtwLogHubInformation(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // r9
  __int64 v3; // rcx
  PCEVENT_DESCRIPTOR v4; // r10
  _DWORD v5[2]; // [rsp+60h] [rbp+7h] BYREF
  int v6; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v7; // [rsp+6Ch] [rbp+13h]
  __int16 v8; // [rsp+6Eh] [rbp+15h]
  __int16 v9; // [rsp+70h] [rbp+17h]
  __int16 v10; // [rsp+72h] [rbp+19h]
  _OWORD v11[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int v12; // [rsp+98h] [rbp+3Fh]

  result = 0;
  v12 = 0;
  memset(v11, 0, sizeof(v11));
  if ( dword_14006F690 )
  {
    v6 = *(_DWORD *)(a1 + 5192);
    v7 = *(_WORD *)(a1 + 5196);
    v8 = *(_DWORD *)(a1 + 5200);
    v9 = *(_WORD *)(a1 + 5228);
    v10 = *(_WORD *)(a1 + 5230);
    UsbhEtwGetHubInfo(a1, (__int64)v11);
    LODWORD(v3) = *(_DWORD *)(v3 + 4208);
    v5[1] = *(_DWORD *)(v2 + 3124);
    v5[0] = v3;
    return UsbhEtwWrite(v4, 0LL, &v6, 12LL, v11, 36LL, v5, 8LL, v2 + 2936, 71LL, 0LL);
  }
  return result;
}
