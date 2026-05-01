/*
 * XREFs of ?open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z @ 0x1802B7080
 * Callers:
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800A9BD4 (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x1803B4A90 (-GetUserTokenHandle@UserHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_p.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x18064B254 (CapabilityHelper--CreateSecurityAttributesForUWPCapability_0.c)
 * Callees:
 *     <none>
 */

signed int __fastcall wil::open_current_access_token_nothrow(void **a1, __int64 a2, int a3)
{
  BOOL v4; // ebx
  HANDLE CurrentThread; // rax
  signed int result; // eax
  HANDLE CurrentProcess; // rax

  v4 = a3 == 1;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, v4, a1) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  if ( result == -2147023888 )
  {
    CurrentProcess = GetCurrentProcess();
    if ( OpenProcessToken(CurrentProcess, 8u, a1) )
      return 0;
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
