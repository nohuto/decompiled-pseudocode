/*
 * XREFs of _lambda_d3e0cbfb3a0db2b18ab77775bcbdb9f6_::operator() @ 0x1800221CC
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800220D0 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_d3e0cbfb3a0db2b18ab77775bcbdb9f6_::operator()(_BYTE **a1)
{
  __int64 v2; // rax
  const wchar_t *v3; // rbx
  __int64 v4; // rbx
  SIZE_T v5; // rsi
  char *v6; // rax
  char *v7; // rdi
  size_t v8; // rbx
  _QWORD *v9; // rbx
  void *v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = 0x7FFFFFFFLL;
  v3 = L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = v3 - L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown";
  v5 = 2 * v4 + 2;
  v6 = (char *)CoTaskMemAlloc(v5);
  v7 = v6;
  if ( v6 )
  {
    v8 = 2 * v4;
    if ( v8 )
    {
      if ( v5 < v8 )
      {
        memset_0(v6, 0, v5);
        *(_DWORD *)_o__errno(v13, v12) = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v6, L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown", v8);
      }
    }
    *(_WORD *)&v7[v8] = 0;
  }
  if ( v7 )
  {
    v9 = *a1;
    v10 = (void *)*((_QWORD *)*a1 + 1);
    if ( v10 )
      CoTaskMemFree(v10);
    v9[1] = v7;
    v9[3] = -1LL;
    v9[2] = -1LL;
    *a1[1] = 1;
  }
  return 0LL;
}
