/*
 * XREFs of TtmiLogSessionDeviceAssignmentPolicySet @ 0x1407EFEE4
 * Callers:
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1407EDCE0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmInitCurrentSession @ 0x1409F5CD4 (TtmInitCurrentSession.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

void __fastcall TtmiLogSessionDeviceAssignmentPolicySet(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // [rsp+30h] [rbp-68h] BYREF
  int SessionId; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  int *p_SessionId; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  char *v10; // [rsp+70h] [rbp-28h]
  __int64 v11; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140FD68B8 > 5 && tlgKeywordOn((__int64)&dword_140FD68B8, 1LL) )
  {
    SessionId = TtmiGetSessionId(v3, v2, v4);
    v5 = a1;
    v9 = 4LL;
    p_SessionId = &SessionId;
    v11 = 1LL;
    v10 = &v5;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)&qword_1400533D0, 0LL, 0LL, 4u, &v7);
  }
}
