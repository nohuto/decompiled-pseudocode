/*
 * XREFs of PopEstimateChargeTime @ 0x140B26BD8
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopBatteryEstimatesSpoiled @ 0x140B26DC0 (PopBatteryEstimatesSpoiled.c)
 */

unsigned __int64 PopEstimateChargeTime()
{
  unsigned __int64 v0; // r15
  __int64 v1; // r14
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rsi
  int v4; // edi
  char v5; // bl
  __int64 i; // rcx
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  char v12; // [rsp+48h] [rbp-79h] BYREF
  int v13; // [rsp+4Ch] [rbp-75h] BYREF
  __int64 v14; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-69h] BYREF
  __int64 v16; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+98h] [rbp-29h]
  __int64 v20; // [rsp+A0h] [rbp-21h]
  unsigned __int64 *v21; // [rsp+A8h] [rbp-19h]
  __int64 v22; // [rsp+B0h] [rbp-11h]
  __int64 *v23; // [rsp+B8h] [rbp-9h]
  __int64 v24; // [rsp+C0h] [rbp-1h]
  char *v25; // [rsp+C8h] [rbp+7h]
  __int64 v26; // [rsp+D0h] [rbp+Fh]
  unsigned __int64 *v27; // [rsp+D8h] [rbp+17h]
  __int64 v28; // [rsp+E0h] [rbp+1Fh]
  int *v29; // [rsp+E8h] [rbp+27h]
  __int64 v30; // [rsp+F0h] [rbp+2Fh]

  v0 = -1LL;
  v1 = 0LL;
  v2 = -1LL;
  v3 = 0LL;
  v4 = 0;
  if ( (unsigned __int8)PopBatteryEstimatesSpoiled() )
  {
    v5 = 83;
  }
  else
  {
    for ( i = qword_140F10650; (__int64 *)i != &qword_140F10650; i = *(_QWORD *)i )
    {
      v9 = *(_DWORD *)(i + 64);
      if ( v9 != -1 )
      {
        v10 = *(_DWORD *)(i + 88);
        if ( v10 != -1 && v10 < v9 )
          v1 += v9 - v10;
      }
      v11 = *(int *)(i + 96);
      if ( (_DWORD)v11 != 0x80000000 && (int)v11 > 0 )
        v3 += v11;
      v4 |= *(_DWORD *)(i + 84);
    }
    v4 &= 7u;
    if ( v4 == 5 )
    {
      v8 = PopMaxChargeRate;
      if ( PopMaxChargeRate < v3 )
      {
        v8 = v3;
        PopMaxChargeRate = v3;
      }
      if ( v1 && v8 )
      {
        v2 = 4000 * v1 / v8;
        if ( v2 > 0x5460 )
        {
          v5 = 76;
        }
        else
        {
          v0 = 4000 * v1 / v8;
          v5 = 79;
        }
      }
      else
      {
        v5 = 90;
      }
    }
    else
    {
      v5 = 80;
    }
  }
  DbgPrintEx(0x92u, 3u, "Charge time: Rate=%lld CapToChg=%lld MaxRate=%lld Est=%lld\n", v3, v1, PopMaxChargeRate, v0);
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    v14 = v1;
    v20 = 8LL;
    v19 = &v14;
    v22 = 8LL;
    v21 = &v15;
    v16 = PopMaxChargeRate;
    v23 = &v16;
    v25 = &v12;
    v27 = &v17;
    v29 = &v13;
    v24 = 8LL;
    v28 = 8LL;
    v15 = v2;
    v12 = v5;
    v26 = 1LL;
    v17 = v3;
    v13 = v4;
    v30 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004E42B, 0LL, 0LL, 8u, &v18);
  }
  return v0;
}
