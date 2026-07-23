/*
 * XREFs of LdrInitSecurityCookie @ 0x140B07DD4
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140B079E0 (MiProcessLoadConfigForDriver.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x140429E94 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrInitSecurityCookie(PVOID BaseOfImage, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *Config; // rax
  _DWORD *v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfigEx((unsigned int *)BaseOfImage);
  v8 = Config;
  if ( !Config )
    goto LABEL_13;
  if ( *Config < 0x70u )
  {
    if ( *Config >= 4u )
      goto LABEL_14;
LABEL_13:
    v8 = 0LL;
    goto LABEL_14;
  }
  v9 = *((_QWORD *)Config + 11);
  if ( v9 <= (unsigned __int64)BaseOfImage || v9 >= (unsigned __int64)BaseOfImage + v4 - 8 )
  {
LABEL_14:
    v9 = 0LL;
    if ( !v8 )
      return 0LL;
  }
  if ( *v8 >= 0x94u && (v8[36] & 0x800) != 0 )
    return 1LL;
  if ( v9 && *(_QWORD *)v9 == 0x2B992DDFA232LL )
  {
    v10 = __rdtsc();
    v11 = (v9 ^ (((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) ^ HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16)) & 0xFFFFFFFFFFFFLL;
    if ( v11 == 0x2B992DDFA232LL || !v11 )
      v11 = 0x2B992DDFA233LL;
    *(_QWORD *)v9 = v11;
    return 1LL;
  }
  return 0LL;
}
