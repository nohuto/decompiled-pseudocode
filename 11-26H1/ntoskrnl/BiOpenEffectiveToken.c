/*
 * XREFs of BiOpenEffectiveToken @ 0x1409D1F90
 * Callers:
 *     BiAdjustPrivilege @ 0x1409D1E78 (BiAdjustPrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x1407239D0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1407239F0 (ZwOpenProcessTokenEx.c)
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
