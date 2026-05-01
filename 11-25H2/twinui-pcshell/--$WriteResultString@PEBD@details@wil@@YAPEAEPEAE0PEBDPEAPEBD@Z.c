/*
 * XREFs of ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1801825D0
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180182360 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1802DE588 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 * Callees:
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180182670 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(char *a1, const char *a2, wil::details *a3, char **a4)
{
  size_t v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  const void *v9; // r9
  __int64 v10; // rdx
  size_t v11; // rdx
  size_t v12; // rsi

  if ( a1 != a2
    && a3
    && *(_BYTE *)a3
    && (v6 = wil::details::ResultStringSize(a3, a2), v11 = v10 - (_QWORD)a1, v12 = v6, v11 >= v6) )
  {
    if ( v6 )
    {
      if ( a1 )
      {
        memcpy_0(a1, v9, v6);
      }
      else
      {
        *(_DWORD *)_o__errno(v7, v11, v8) = 22;
        invalid_parameter_noinfo();
      }
    }
    if ( a4 )
      *a4 = a1;
    return &a1[v12];
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
