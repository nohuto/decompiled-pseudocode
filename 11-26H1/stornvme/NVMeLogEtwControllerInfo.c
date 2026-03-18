/*
 * XREFs of NVMeLogEtwControllerInfo @ 0x1400131FC
 * Callers:
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x140013020 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     FillControllerConfiguration @ 0x140012268 (FillControllerConfiguration.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[172]; // [rsp+D0h] [rbp-2C8h] BYREF

  memset(v3, 0, sizeof(v3));
  result = (__int64)FillControllerConfiguration(a1, v3);
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    result = StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 3752) )
  {
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      return StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return result;
}
