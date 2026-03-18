/*
 * XREFs of EtwTraceLeapSecondDataParseFailure @ 0x1408278B0
 * Callers:
 *     ExpReadLeapSecondData @ 0x140835F5C (ExpReadLeapSecondData.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall EtwTraceLeapSecondDataParseFailure(int a1)
{
  int v1; // r8d
  int v2; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+48h] [rbp-38h] BYREF
  int *v5; // [rsp+68h] [rbp-18h]
  __int64 v6; // [rsp+70h] [rbp-10h]
  int v7; // [rsp+90h] [rbp+10h] BYREF

  v7 = a1;
  if ( (unsigned int)dword_140E08F48 > 5 && tlgKeywordOn((__int64)&dword_140E08F48, 0x400000000000LL) )
  {
    v2 = v1;
    v5 = &v2;
    v6 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08F48, (unsigned __int8 *)&byte_1400542DF, 0LL, 0LL, 3u, &v4);
  }
  if ( EtwpSecurityLock.MutantListHead.Blink )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v7;
    EtwWrite((REGHANDLE)EtwpSecurityLock.MutantListHead.Blink, &KernelLeapSecondDataParseFailure, 0LL, 1u, &UserData);
  }
}
