/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x140851464
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 * Callees:
 *     <none>
 */

__int64 CmpSetGlobalQuotaAllowed()
{
  __int64 result; // rax

  result = CmpGlobalQuota;
  *(_QWORD *)&ExpPlatformBinaryLock.Timer.Header.Lock = CmpGlobalQuota;
  return result;
}
