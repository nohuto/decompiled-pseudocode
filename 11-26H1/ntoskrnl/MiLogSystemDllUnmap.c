/*
 * XREFs of MiLogSystemDllUnmap @ 0x1406FCCA4
 * Callers:
 *     MiCheckSystemDllUnmap @ 0x1409E6908 (MiCheckSystemDllUnmap.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiLogSystemDllUnmap()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // r11d
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // [rsp+20h] [rbp-79h]
  int v6; // [rsp+28h] [rbp-71h]
  int v7; // [rsp+40h] [rbp-59h] BYREF
  int v8; // [rsp+44h] [rbp-55h] BYREF
  int v9; // [rsp+48h] [rbp-51h] BYREF
  __int64 v10; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-39h] BYREF
  int *v12; // [rsp+80h] [rbp-19h]
  __int64 v13; // [rsp+88h] [rbp-11h]
  _BYTE v14[16]; // [rsp+90h] [rbp-9h] BYREF
  int *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  _BYTE v17[16]; // [rsp+B0h] [rbp+17h] BYREF
  int *v18; // [rsp+C0h] [rbp+27h]
  __int64 v19; // [rsp+C8h] [rbp+2Fh]
  __int64 *v20; // [rsp+D0h] [rbp+37h]
  __int64 v21; // [rsp+D8h] [rbp+3Fh]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000004000LL) )
  {
    v7 = *(_DWORD *)(v0 + 464);
    v13 = 4LL;
    v12 = &v7;
    tlgCreate1Sz_char((__int64)v14, (const CHAR *)(v0 + 824));
    v8 = *(_DWORD *)(v1 + 464);
    v15 = &v8;
    v16 = 4LL;
    tlgCreate1Sz_char((__int64)v17, (const CHAR *)(v1 + 824));
    v9 = v2;
    v21 = 8LL;
    v18 = &v9;
    v19 = 4LL;
    v10 = 2164260864LL;
    v20 = &v10;
    tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&byte_1400590B7, v3, 1u, v5, v6, 8u, &v11);
  }
}
