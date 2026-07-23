/*
 * XREFs of BiOpenEffectiveToken @ 0x1409A2F70
 * Callers:
 *     BiAdjustPrivilege @ 0x1409A2E58 (BiAdjustPrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x1407285A0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1407285C0 (ZwOpenProcessTokenEx.c)
 */

int __fastcall BiOpenEffectiveToken(PHANDLE TokenHandle)
{
  int result; // eax

  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) == 0 )
    return ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, TokenHandle);
  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 1u, 0x200u, TokenHandle);
  if ( result < 0 )
    return ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 0, 0x200u, TokenHandle);
  return result;
}
