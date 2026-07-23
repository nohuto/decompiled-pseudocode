/*
 * XREFs of PnpTraceDmaGuardDevicePolicy @ 0x14096F0E8
 * Callers:
 *     PipDmgSaveDeviceDmarPolicy @ 0x14096F000 (PipDmgSaveDeviceDmarPolicy.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PnpTraceDmaGuardDevicePolicy(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  int v5; // [rsp+30h] [rbp-49h] BYREF
  __int64 v6; // [rsp+38h] [rbp-41h] BYREF
  __int64 v7; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v9; // [rsp+70h] [rbp-9h]
  __int64 v10; // [rsp+78h] [rbp-1h]
  _DWORD *v11; // [rsp+80h] [rbp+7h]
  __int64 v12; // [rsp+88h] [rbp+Fh]
  __int64 v13; // [rsp+90h] [rbp+17h]
  _DWORD v14[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v15; // [rsp+A0h] [rbp+27h]
  __int64 v16; // [rsp+A8h] [rbp+2Fh]
  __int64 *v17; // [rsp+B0h] [rbp+37h]
  __int64 v18; // [rsp+B8h] [rbp+3Fh]

  if ( a2 && (unsigned int)dword_140E06E48 > 5 && tlgKeywordOn((__int64)&dword_140E06E48, 0x400000000000LL) )
  {
    v6 = 1LL;
    v9 = &v6;
    v10 = 8LL;
    v11 = v14;
    v13 = *(_QWORD *)(v3 + 48);
    v14[0] = *(unsigned __int16 *)(v3 + 40);
    v15 = &v5;
    v17 = &v7;
    v12 = 2LL;
    v14[1] = v4;
    v5 = v2;
    v16 = 4LL;
    v7 = 2048LL;
    v18 = 8LL;
    tlgWriteAgg((__int64)&dword_140E06E48, (unsigned __int8 *)&word_1400488D2, v2, v4 + 7, &v8);
  }
}
