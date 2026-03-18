/*
 * XREFs of bQueryFntCacheReg @ 0x14010C8D0
 * Callers:
 *     bFntCacheDisabled @ 0x14010C9A4 (bFntCacheDisabled.c)
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x14010D098 (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0x14010ECF0 (vGetLastBootTimeStatus.c)
 *     ?vGetJpn98FixPitch@@YAXXZ @ 0x14026D714 (-vGetJpn98FixPitch@@YAXXZ.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 */

__int64 __fastcall bQueryFntCacheReg(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  ValueName = 0LL;
  v6 = 0;
  RtlInitUnicodeString(&ValueName, a2);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  Length = 2 * v7 + 30;
  v8 = (unsigned int *)PALLOCMEM(Length, 1128682580LL);
  v9 = v8;
  if ( v8 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v8, Length, &Length) >= 0 )
    {
      v6 = 1;
      *a3 = *(unsigned int *)((char *)v9 + v9[2]);
    }
    Win32FreePool(v9);
  }
  return v6;
}
