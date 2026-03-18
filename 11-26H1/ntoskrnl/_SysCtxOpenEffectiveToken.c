/*
 * XREFs of _SysCtxOpenEffectiveToken @ 0x140A2CBB4
 * Callers:
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2AEE0 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x1407239D0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1407239F0 (ZwOpenProcessTokenEx.c)
 */

NTSTATUS __fastcall SysCtxOpenEffectiveToken(__int64 a1, HANDLE *TokenHandle)
{
  NTSTATUS result; // eax

  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0x200u, TokenHandle);
  if ( result == -1073741700 )
    return ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, TokenHandle);
  return result;
}
