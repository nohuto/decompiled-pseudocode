/*
 * XREFs of CrmLogGlobalsPeriodicNotifier @ 0x18007577C
 * Callers:
 *     CrmGlobalsPeriodicNotifier @ 0x180069650 (CrmGlobalsPeriodicNotifier.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void CrmLogGlobalsPeriodicNotifier()
{
  __int64 v0; // r8
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-9h] BYREF
  UUID *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  __int64 *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  __int64 *v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1800E12E8 > 5 && tlgKeywordOn((__int64)&dword_1800E12E8, 1LL) )
  {
    v6 = 16LL;
    v5 = &Uuid;
    v1 = *(_QWORD *)(*(_QWORD *)(v0 + 48) + 16LL);
    v7 = &v2;
    v3 = *(_QWORD *)(v0 + 56);
    v9 = &v3;
    v2 = v1;
    v8 = 8LL;
    v10 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E12E8, byte_1800CC05C, 0LL, 0LL, 5u, &v4);
  }
}
