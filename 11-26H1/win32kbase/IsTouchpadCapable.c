/*
 * XREFs of IsTouchpadCapable @ 0x140199460
 * Callers:
 *     IsPointerDeviceAccessible @ 0x14016E3D0 (IsPointerDeviceAccessible.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall IsTouchpadCapable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = 0x2000002000LL;
  if ( (*(_QWORD *)(a1 + 1360) & 0x2000002000LL) != 0 || *(_WORD *)(a1 + 1266) )
    return 1LL;
  result = 0LL;
  if ( a2 )
  {
    LOBYTE(v3) = 1;
    v5 = HMValidateHandleNoSecure(a2, v3);
    result = 0LL;
    if ( v5 )
      return (*(_DWORD *)(v5 + 380) >> 11) & 1;
  }
  return result;
}
