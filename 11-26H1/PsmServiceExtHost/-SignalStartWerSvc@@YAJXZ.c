/*
 * XREFs of ?SignalStartWerSvc@@YAJXZ @ 0x180068F3C
 * Callers:
 *     ?WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z @ 0x1800689B4 (-WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 SignalStartWerSvc(void)
{
  unsigned int v0; // ebx
  BOOL v1; // edi
  int v2; // eax
  int v3; // ecx
  int v5; // [rsp+40h] [rbp-28h] BYREF
  __int128 v6; // [rsp+48h] [rbp-20h] BYREF

  v0 = 0;
  v5 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, 1LL, 0LL, &v5, 4) >= 0 && v5 )
    v1 = (int)ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0LL, 0LL, 0LL, 0, 0) >= 0;
  v6 = 0LL;
  v2 = EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &v6, 0LL, 0LL);
  v3 = v1 + 1;
  if ( v2 )
    v3 = v1;
  if ( !v3 )
    return (unsigned int)-1073741696;
  return v0;
}
