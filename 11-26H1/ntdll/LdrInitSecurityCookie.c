/*
 * XREFs of LdrInitSecurityCookie @ 0x180077BE0
 * Callers:
 *     InitSecurityCookie @ 0x1800D9BE0 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpGenSecurityCookie @ 0x180077E24 (LdrpGenSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrInitSecurityCookie(
        unsigned __int64 *BaseOfImage,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  int v5; // esi
  __int64 v6; // r14
  _DWORD *v10; // r8
  unsigned __int64 v11; // rdi
  __int64 Config; // rax
  unsigned int v14; // r10d
  _DWORD *v15; // r9
  char v16; // di
  unsigned int i; // edx
  unsigned int v18; // ecx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-30h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-28h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  v6 = a2;
  NewProtect = 0;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
LABEL_2:
    v5 = 1;
    goto LABEL_3;
  }
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfigEx(BaseOfImage);
  v10 = (_DWORD *)Config;
  if ( !Config )
  {
LABEL_33:
    v10 = 0LL;
LABEL_34:
    a3 = 0LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)Config < 0x70u
    || (a3 = *(unsigned __int64 **)(Config + 88), a3 <= BaseOfImage)
    || a3 >= (unsigned __int64 *)((char *)BaseOfImage + v6 - 8) )
  {
    if ( *(_DWORD *)Config >= 4u )
      goto LABEL_34;
    goto LABEL_33;
  }
  v14 = (_DWORD)a3 - (_DWORD)BaseOfImage;
  v15 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
  v16 = 0;
  for ( i = 0; i < OutHeaders->FileHeader.NumberOfSections; ++i )
  {
    v18 = v15[3];
    if ( v14 >= v18 && v14 < v15[4] + v18 )
    {
      v16 = 1;
      break;
    }
    v15 += 10;
  }
  if ( !v16 )
    v15 = 0LL;
  if ( v15 && (int)v15[9] >= 0 )
    goto LABEL_2;
LABEL_3:
  if ( a5 )
    *a5 = v10;
  if ( v10 && *v10 >= 0x94u && (v10[36] & 0x800) != 0 )
    return 1LL;
  if ( a3 && *a3 == 0x2B992DDFA232LL )
  {
    v11 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ LdrpGenSecurityCookie(a3)) & 0xFFFFFFFFFFFFLL;
    if ( v11 == 0x2B992DDFA232LL || !v11 )
      v11 = 0x2B992DDFA233LL;
    if ( !v5 )
    {
      *a3 = v11;
      return 1LL;
    }
    BaseAddress = a3;
    RegionSize = 8LL;
    if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect) >= 0 )
    {
      *a3 = v11;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
      return 1LL;
    }
  }
  return 0LL;
}
