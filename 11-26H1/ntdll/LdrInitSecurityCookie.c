/*
 * XREFs of LdrInitSecurityCookie @ 0x180080840
 * Callers:
 *     InitSecurityCookie @ 0x1800DCC70 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrpGenSecurityCookie @ 0x180080A84 (LdrpGenSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrInitSecurityCookie(
        unsigned __int64 a1,
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
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 *v20; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v21[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  v6 = a2;
  v22 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
LABEL_2:
    v5 = 1;
    goto LABEL_3;
  }
  v21[0] = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, v21);
  Config = LdrImageDirectoryEntryToLoadConfigEx(a1);
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
    || (a3 = *(unsigned __int64 **)(Config + 88), (unsigned __int64)a3 <= a1)
    || (unsigned __int64)a3 >= a1 + v6 - 8 )
  {
    if ( *(_DWORD *)Config >= 4u )
      goto LABEL_34;
    goto LABEL_33;
  }
  v14 = (_DWORD)a3 - a1;
  v15 = (_DWORD *)(*(unsigned __int16 *)(v21[0] + 20LL) + v21[0] + 24LL);
  v16 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(v21[0] + 6LL); ++i )
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
    v20 = a3;
    v19 = 8LL;
    if ( (int)ZwProtectVirtualMemory(-1LL, &v20, &v19, 4LL, &v22) >= 0 )
    {
      *a3 = v11;
      ZwProtectVirtualMemory(-1LL, &v20, &v19, v22, &v22);
      return 1LL;
    }
  }
  return 0LL;
}
