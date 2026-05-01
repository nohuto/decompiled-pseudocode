/*
 * XREFs of CrmLogSrvActivityWindowClosedReasonUnsubscribeStart @ 0x18002D928
 * Callers:
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18002D748 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void CrmLogSrvActivityWindowClosedReasonUnsubscribeStart()
{
  __int64 v0; // rcx
  _BYTE v1[32]; // [rsp+30h] [rbp-48h] BYREF
  UUID *v2; // [rsp+50h] [rbp-28h]
  __int64 v3; // [rsp+58h] [rbp-20h]

  if ( (unsigned int)dword_1800E12E8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800E12E8, 1LL) )
    {
      v3 = 16LL;
      v2 = &Uuid;
      tlgWriteTransfer_EventWriteTransfer(v0, &unk_1800CC39A, 0LL, 0LL, 3, v1);
    }
  }
}
