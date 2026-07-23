/*
 * XREFs of KeSetUserCetAppcompatOptions @ 0x1405FD3CC
 * Callers:
 *     KseUserCetBasicModeAllowRetTargetNotCetCompatHookDriverTargeted @ 0x140602540 (KseUserCetBasicModeAllowRetTargetNotCetCompatHookDriverTargeted.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void KeSetUserCetAppcompatOptions()
{
  int v0; // [rsp+30h] [rbp-68h] BYREF
  __int64 v1; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+40h] [rbp-58h] BYREF
  int *v3; // [rsp+60h] [rbp-38h]
  __int64 v4; // [rsp+68h] [rbp-30h]
  __int64 *v5; // [rsp+70h] [rbp-28h]
  __int64 v6; // [rsp+78h] [rbp-20h]

  if ( !_interlockedbittestandset(&KiUserCetAppcompatOptions, 0)
    && (unsigned int)dword_140E06F58 > 5
    && tlgKeywordOn((__int64)&dword_140E06F58, 0x400000000000LL) )
  {
    v0 = KiUserCetAppcompatOptions;
    v4 = 4LL;
    v3 = &v0;
    v1 = 0x1000000LL;
    v5 = &v1;
    v6 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06F58, (unsigned __int8 *)&dword_1400498CC, 0LL, 0LL, 4u, &v2);
  }
}
