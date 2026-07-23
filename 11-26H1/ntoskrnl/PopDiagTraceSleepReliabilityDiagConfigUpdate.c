/*
 * XREFs of PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x140778664
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopDiagTraceSleepReliabilityDiagConfigUpdate()
{
  char v0; // r8
  char v1; // [rsp+30h] [rbp-68h] BYREF
  __int64 v2; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  char *v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  __int64 *v6; // [rsp+70h] [rbp-28h]
  __int64 v7; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v1 = v0;
    v4 = &v1;
    v5 = 1LL;
    v6 = &v2;
    v2 = 0x1000000LL;
    v7 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004D170, 0LL, 0LL, 4u, &v3);
  }
}
