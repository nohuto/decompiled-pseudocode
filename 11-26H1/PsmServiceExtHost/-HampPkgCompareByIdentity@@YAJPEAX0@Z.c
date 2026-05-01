/*
 * XREFs of ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180038D00
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800371B8 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180037EF0 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x1800383C0 (-HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 */

int __fastcall HampPkgCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  const wchar_t *v2; // rbx
  int result; // eax
  unsigned int v5; // eax
  const void *v6; // rsi
  ULONG v7; // ebx
  ULONG v8; // eax

  v2 = a2;
  if ( !a2 )
    v2 = 0LL;
  result = _wcsicmp(a1, v2 + 48);
  if ( !result )
  {
    v5 = *((_DWORD *)v2 + 74);
    if ( *((_DWORD *)a1 + 50) > v5 )
    {
      return 1;
    }
    else if ( *((_DWORD *)a1 + 50) < v5 )
    {
      return -1;
    }
    else
    {
      v6 = v2 + 114;
      v7 = RtlLengthSid((PSID)(v2 + 114));
      v8 = RtlLengthSid((PSID)(a1 + 66));
      if ( v8 < v7 )
      {
        return -1;
      }
      else if ( v8 > v7 )
      {
        return 1;
      }
      else
      {
        return memcmp_0(a1 + 66, v6, v8);
      }
    }
  }
  return result;
}
