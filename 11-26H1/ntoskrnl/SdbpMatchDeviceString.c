/*
 * XREFs of SdbpMatchDeviceString @ 0x14088B45C
 * Callers:
 *     SdbpMatchAcpi @ 0x14088B19C (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x14088B278 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14088B310 (SdbpMatchCpu.c)
 *     SdbpMatchOem @ 0x14088B72C (SdbpMatchOem.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v8, v9);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
