/*
 * XREFs of PopPowerAdapterPublishRecState @ 0x1407DD4A0
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExSystemTimeToLocalTime @ 0x1402153C0 (ExSystemTimeToLocalTime.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopPowerAdapterPublishRecState(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int HighPart; // r14d
  unsigned int updated; // ebx
  __int64 v5; // rbx
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rcx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // r8
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v15; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  char Buffer; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v19; // [rsp+61h] [rbp-9Fh]
  char v20; // [rsp+63h] [rbp-9Dh]
  int v21; // [rsp+64h] [rbp-9Ch]
  LARGE_INTEGER v22; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER v23; // [rsp+70h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v26[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v27[16]; // [rsp+C0h] [rbp-40h] BYREF
  LARGE_INTEGER *p_SystemTime; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER *p_LocalTime; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  LARGE_INTEGER *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]

  HighPart = a2->HighPart;
  v15.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  updated = 0;
  v19 = 0;
  v20 = 0;
  if ( (HighPart & 4) != 0 )
  {
    return (unsigned int)-1073741101;
  }
  else if ( ((*(_DWORD *)(a1 + 4) >> 1) & 3) != ((HighPart >> 1) & 3)
         || *(_QWORD *)(a1 + 24) != a2[3].QuadPart
         || *(_QWORD *)(a1 + 32) != a2[4].QuadPart )
  {
    if ( (HighPart & 2) != 0 )
    {
      v5 = MEMORY[0xFFFFF78000000014];
      SystemTime.QuadPart = MEMORY[0xFFFFF78000000014] + 10000000 * a2[3].QuadPart;
      ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
      v6 = a2[4];
      v7.QuadPart = -1LL;
      if ( v6.QuadPart != -1 )
      {
        SystemTime.QuadPart = v5 + 10000000 * v6.QuadPart;
        ExSystemTimeToLocalTime(&SystemTime, &v15);
        v7 = v15;
      }
      v8 = LocalTime;
    }
    else
    {
      v7.QuadPart = -1LL;
      v8.QuadPart = -1LL;
    }
    v22 = v8;
    v19 = 0;
    v20 = 0;
    Buffer = 0;
    v21 = (HighPart >> 1) & 3;
    v23 = v7;
    updated = ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_STATUS, &Buffer, 0x18u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
    {
      v9 = "Power Adapter Online";
      if ( (HighPart & 1) == 0 )
        v9 = "Power Adapter Offline";
      tlgCreate1Sz_char((__int64)v25, v9);
      v10 = "REC Engaged";
      if ( (HighPart & 2) == 0 )
        v10 = "-";
      tlgCreate1Sz_char((__int64)v26, v10);
      tlgCreate1Sz_char((__int64)v27, v11);
      v12 = a2[3];
      p_SystemTime = &SystemTime;
      LocalTime = a2[4];
      SystemTime = v12;
      p_LocalTime = &LocalTime;
      v29 = 8LL;
      v32 = &v15;
      v34 = &v17;
      v31 = 8LL;
      v15.LowPart = updated;
      v33 = 4LL;
      v17 = 0x1000000LL;
      v35 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)byte_14004EA45,
        0LL,
        0LL,
        9u,
        &v24);
    }
  }
  return updated;
}
