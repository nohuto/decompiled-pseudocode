/*
 * XREFs of PopPowerAdapterRecOverrideWnfCallback @ 0x1407DD720
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopPowerAdapterRecOverrideWnfCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  char v6; // [rsp+30h] [rbp-39h] BYREF
  char v7; // [rsp+31h] [rbp-38h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  int v9; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-19h] BYREF
  char *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  int *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]

  v9 = a4;
  v8 = 1;
  v4 = ExQueryWnfStateData(a1, &v9, &v6, &v8);
  if ( v4 >= 0 )
  {
    PopPowerAdapterRecOverride = v6;
    PopBatteryQueueWork(0x80u);
  }
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v7 = PopPowerAdapterRecOverride;
    v14 = 1LL;
    v13 = &v7;
    v10 = v4;
    v15 = &v10;
    v16 = 4LL;
    v17 = &v11;
    v11 = 0x1000000LL;
    v18 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)word_14004E9DA, 0LL, 0LL, 5u, &v12);
  }
  return (unsigned int)v4;
}
