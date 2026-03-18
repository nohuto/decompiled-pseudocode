/*
 * XREFs of SepAdtInitializeBounds @ 0x140817DC8
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x140817FB0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SepRegQueryValue @ 0x140AB2E7C (SepRegQueryValue.c)
 */

void SepAdtInitializeBounds()
{
  unsigned int v0; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v1; // [rsp+34h] [rbp-14h]

  if ( SepAdtRegNotifyHandle
    && (int)SepRegQueryValue(SepAdtRegNotifyHandle, &v0) >= 0
    && v1 < v0
    && v1 >= 0x10
    && v0 - v1 >= 0x10 )
  {
    SepAdtMinListLength = v1;
    SepAdtMaxListLength = v0;
  }
}
