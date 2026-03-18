/*
 * XREFs of CmpLogUnsupportedOperation @ 0x140B5C1B8
 * Callers:
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14085EFBC (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

void __fastcall CmpLogUnsupportedOperation(int a1)
{
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  __int64 v5; // [rsp+60h] [rbp-18h]

  if ( _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]) == 0x7FFFFFFF
    && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
  {
    CmpSendUnsupportedOperationTelemetryEvent();
  }
  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    v2 = a1;
    v4 = &v2;
    v5 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)&byte_140056FCF, 0LL, 0LL, 3u, &v3);
  }
}
