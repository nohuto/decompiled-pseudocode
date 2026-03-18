/*
 * XREFs of LdrInitSecurityCookie @ 0x140B05D40
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140B0594C (MiProcessLoadConfigForDriver.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x14040C74C (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrInitSecurityCookie(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  _DWORD *Config; // rax
  _DWORD *v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  RtlImageNtHeaderEx(1, a1, 0LL, &v14);
  Config = LdrImageDirectoryEntryToLoadConfigEx(a1, v7);
  v9 = Config;
  if ( !Config )
    goto LABEL_13;
  if ( *Config < 0x70u )
  {
    if ( *Config >= 4u )
      goto LABEL_14;
LABEL_13:
    v9 = 0LL;
    goto LABEL_14;
  }
  v10 = *((_QWORD *)Config + 11);
  if ( v10 <= a1 || v10 >= a1 + v4 - 8 )
  {
LABEL_14:
    v10 = 0LL;
    if ( !v9 )
      return 0LL;
  }
  if ( *v9 >= 0x94u && (v9[36] & 0x800) != 0 )
    return 1LL;
  if ( v10 && *(_QWORD *)v10 == 0x2B992DDFA232LL )
  {
    v11 = __rdtsc();
    v12 = (v10 ^ (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) ^ HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16)) & 0xFFFFFFFFFFFFLL;
    if ( v12 == 0x2B992DDFA232LL || !v12 )
      v12 = 0x2B992DDFA233LL;
    *(_QWORD *)v10 = v12;
    return 1LL;
  }
  return 0LL;
}
