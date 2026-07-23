/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x1409C0A18
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x1407CC310 (PopUpdateUpgradeInProgress.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x1409C0A9C (PopLogDisabledSleepReason.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x1409C0A64 (PopGetReasonListByReasonCode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopRemoveReasonRecordByReasonCode(__int64 a1)
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode(a1);
  if ( ReasonListByReasonCode )
  {
    v2 = *ReasonListByReasonCode;
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (v3 = (_QWORD *)ReasonListByReasonCode[1], (_QWORD *)*v3 != ReasonListByReasonCode) )
    {
      __fastfail(3u);
    }
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
