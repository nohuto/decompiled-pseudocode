/*
 * XREFs of RtlpGetTargetRvaFlag @ 0x1800C49B4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800C48A4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x1800C497C (RtlGuardIsExportSuppressedAddress.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     bsearch_s @ 0x180129E70 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall RtlpGetTargetRvaFlag(PVOID BaseAddress, _BYTE *a2)
{
  int v4; // ebx
  _DWORD *Config; // rax
  unsigned int v6; // ecx
  rsize_t v7; // r8
  const void *v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  char v11; // cl
  char result; // al
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int128 Key; // [rsp+48h] [rbp-20h] BYREF

  *(_OWORD *)BaseOfImage = 0LL;
  v14 = 0LL;
  Key = 0LL;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         BaseOfImage,
         0x18uLL,
         0LL) < 0 )
    return 0;
  v4 = (int)BaseOfImage[0];
  if ( !BaseOfImage[0] )
    return 0;
  if ( (v14 & 2) != 0 )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( BaseAddress < BaseOfImage[0] )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfigEx(BaseOfImage[0]);
  if ( !Config )
    return 0;
  if ( *Config < 0x94u )
    return 0;
  v6 = Config[36];
  v7 = (unsigned int)Config[34];
  if ( (v6 & 0x400) == 0 )
    return 0;
  v8 = (const void *)*((_QWORD *)Config + 16);
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key) = (_DWORD)BaseAddress - v4;
  v10 = bsearch_s(&Key, v8, v7, v9, RtlpTargetCompare, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
