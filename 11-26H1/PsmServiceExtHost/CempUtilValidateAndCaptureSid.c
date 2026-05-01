/*
 * XREFs of CempUtilValidateAndCaptureSid @ 0x18006E2D8
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007A570 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     CempUtilValidateSid @ 0x18003DBEC (CempUtilValidateSid.c)
 */

NTSTATUS __fastcall CempUtilValidateAndCaptureSid(PSID SourceSid, unsigned int a2, void *a3)
{
  if ( (int)CempUtilValidateSid(SourceSid, a2) >= 0 )
    return RtlCopySid(0x44u, a3, SourceSid);
  else
    return -1073741585;
}
