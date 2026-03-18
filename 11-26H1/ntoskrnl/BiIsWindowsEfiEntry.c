/*
 * XREFs of BiIsWindowsEfiEntry @ 0x1409D4368
 * Callers:
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409D4220 (BiGetObjectReferenceFromEfiEntry.c)
 * Callees:
 *     wcsnlen @ 0x140538260 (wcsnlen.c)
 *     strncmp @ 0x14073D360 (strncmp.c)
 */

bool __fastcall BiIsWindowsEfiEntry(__int64 a1)
{
  bool result; // al
  unsigned int v3; // ebx

  result = 0;
  if ( *(_DWORD *)(a1 + 4) >= 0x1Cu
    && *(_DWORD *)(a1 + 24) >= 0x14u
    && !strncmp((const char *)(a1 + 28), "WINDOWS", 7uLL) )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( v3 >= 0x14 && *(_DWORD *)(a1 + 36) && (unsigned int)wcsnlen((const wchar_t *)(a1 + 48), v3 - 20) != v3 - 20 )
      return 1;
  }
  return result;
}
