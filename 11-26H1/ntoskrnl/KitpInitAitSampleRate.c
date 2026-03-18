/*
 * XREFs of KitpInitAitSampleRate @ 0x140CE6D90
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     strstr @ 0x140535B20 (strstr.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetSystemInformation @ 0x140726B90 (ZwSetSystemInformation.c)
 *     KitpOpenRegKey @ 0x140841560 (KitpOpenRegKey.c)
 *     KitpReadUlongFromKey @ 0x1408415B4 (KitpReadUlongFromKey.c)
 */

NTSTATUS __fastcall KitpInitAitSampleRate(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  __int64 v3; // rdx
  NTSTATUS result; // eax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  Handle = 0LL;
  if ( a1 )
  {
    v2 = *(const char **)(a1 + 216);
    if ( (!v2 || !strstr(v2, "SAFEBOOT:"))
      && KitpOpenRegKey((__int64)v2, a2, &Handle) >= 0
      && KitpReadUlongFromKey(Handle, v3, &v5) < 0 )
    {
      v5 = 0;
    }
  }
  result = ZwSetSystemInformation(111LL, (__int64)&v5);
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
