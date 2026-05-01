/*
 * XREFs of _anonymous_namespace_::GetRegistrySettingString @ 0x1805D2898
 * Callers:
 *     _anonymous_namespace_::GetDashboardPackageFamilyName @ 0x1805D22E0 (_anonymous_namespace_--GetDashboardPackageFamilyName.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1801CA860 (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1802C2604 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::GetRegistrySettingString(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        _QWORD *a4,
        DWORD pdwType)
{
  const WCHAR *v6; // rdi
  const WCHAR *v9; // rdx
  const WCHAR *v10; // rcx
  void *pvData[3]; // [rsp+48h] [rbp-18h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+28h] BYREF

  v6 = a3;
  pdwType = 1;
  pcbData = 0;
  v9 = a3;
  if ( *((_QWORD *)a3 + 3) > 7uLL )
    v9 = *(const WCHAR **)a3;
  v10 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v10 = *(const WCHAR **)a2;
  if ( SHRegGetUSValueW(v10, v9, &pdwType, 0LL, &pcbData, 0, 0LL, 0) || pdwType != 1 )
    goto LABEL_15;
  std::vector<unsigned short>::vector<unsigned short>((__int64 *)pvData, pcbData);
  if ( *((_QWORD *)v6 + 3) > 7uLL )
    v6 = *(const WCHAR **)v6;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    a2 = *(const WCHAR **)a2;
  if ( SHRegGetUSValueW(a2, v6, &pdwType, pvData[0], &pcbData, 0, 0LL, 0) || pdwType != 1 )
  {
    std::vector<unsigned short>::_Tidy((__int64)pvData);
LABEL_15:
    std::wstring::wstring(a1, a4);
    return a1;
  }
  std::wstring::wstring(a1, (__int64)pvData[0]);
  std::vector<unsigned short>::_Tidy((__int64)pvData);
  return a1;
}
