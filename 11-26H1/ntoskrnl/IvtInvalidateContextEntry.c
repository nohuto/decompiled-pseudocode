/*
 * XREFs of IvtInvalidateContextEntry @ 0x1405A9A88
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404F9A90 (IvtUpdateContextEntry.c)
 *     IvtInvalidateScalableModeContextEntry @ 0x1405A9B18 (IvtInvalidateScalableModeContextEntry.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x140434918 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140434A6C (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall IvtInvalidateContextEntry(__int64 a1, _DWORD *a2, unsigned __int16 a3, __int64 a4, char a5)
{
  unsigned __int64 v6; // r9
  unsigned __int64 result; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  v6 = (unsigned __int16)*a2 | ((unsigned __int64)(a2[1] & 3) << 16);
  v8[1] = 0LL;
  v8[0] = ((a3 | (v6 << 16)) << 16) | 0x31;
  result = IvtIommuSendCommand(a1, v8, 1);
  if ( a5 )
    return IvtIommuWaitCommand(a1, 0, 1LL);
  return result;
}
