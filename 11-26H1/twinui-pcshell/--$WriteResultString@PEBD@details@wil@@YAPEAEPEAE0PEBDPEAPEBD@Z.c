/*
 * XREFs of ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180178060
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180178104 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1802D728C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 * Callees:
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180178388 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(char *a1, const char *a2, wil::details *a3, char **a4)
{
  size_t v6; // rax
  const void *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  size_t v10; // rdx
  size_t v11; // rsi

  if ( a1 != a2
    && a3
    && *(_BYTE *)a3
    && (v6 = wil::details::ResultStringSize(a3, a2), v10 = v9 - (_QWORD)a1, v11 = v6, v10 >= v6) )
  {
    if ( v6 )
    {
      if ( a1 )
      {
        memcpy_0(a1, v7, v6);
      }
      else
      {
        *(_DWORD *)_o__errno(v7, v10, v8) = 22;
        invalid_parameter_noinfo();
      }
    }
    if ( a4 )
      *a4 = a1;
    return &a1[v11];
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
