/*
 * XREFs of ExpInitExpCheckTestSigningInfo @ 0x1406CFE50
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 */

_BOOL8 __fastcall ExpInitExpCheckTestSigningInfo(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 8LL;
  v6 = 0;
  v3 = ZwQuerySystemInformation(103LL, &v5, 8LL, &v6);
  if ( v3 >= 0 && (v5 & 0x200000000LL) != 0 )
    LOBYTE(ExSaPageGroupDescriptorArrayLock.InGlobalForegroundList) = 1;
  return v3 >= 0;
}
