/*
 * XREFs of SiIsValidWindowsBootEntry @ 0x14089B8B0
 * Callers:
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     wcsnlen @ 0x14053A6E0 (wcsnlen.c)
 */

bool __fastcall SiIsValidWindowsBootEntry(_DWORD *a1, __int64 a2)
{
  const wchar_t *v4; // rcx

  if ( !a1[5] )
    return 0;
  if ( (a1[3] & 4) != 0 && a1[6] >= 0x18u )
    return 1;
  v4 = (const wchar_t *)(a2
                       + 14
                       + 2 * wcsnlen((const wchar_t *)(a2 + 12), (unsigned __int64)*(unsigned int *)(a2 + 4) >> 1));
  return (unsigned __int64)v4 < a2 + (unsigned __int64)*(unsigned int *)(a2 + 4) + 12
      && wcsicmp(v4, L"\\EFI\\Microsoft\\Boot\\bootmgfw.efi") == 0;
}
