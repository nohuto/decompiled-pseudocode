/*
 * XREFs of ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x18003BBAC
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 GrantExemptionForBCMStartupLatency(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 4;
  v0 = 1;
  v2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DisableExemptionForBCMStartupLatency",
          0x18u,
          0LL,
          &v2,
          &v3) )
    return v2 == 0;
  return v0;
}
