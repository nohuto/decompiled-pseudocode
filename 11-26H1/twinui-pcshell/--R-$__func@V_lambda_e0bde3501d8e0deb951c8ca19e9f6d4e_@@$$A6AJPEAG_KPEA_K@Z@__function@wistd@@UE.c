/*
 * XREFs of ??R?$__func@V_lambda_e0bde3501d8e0deb951c8ca19e9f6d4e_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x1802DE000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_e0bde3501d8e0deb951c8ca19e9f6d4e_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        WCHAR **a2,
        DWORD *a3,
        __int64 **a4)
{
  DWORD v4; // eax
  DWORD *v6; // rdx
  HANDLE *v7; // rcx
  __int64 *v8; // rdi
  WCHAR *v9; // r8
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwSize; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a3;
  v6 = *(DWORD **)(a1 + 16);
  v7 = *(HANDLE **)(a1 + 8);
  v8 = *a4;
  v9 = *a2;
  dwSize = v4;
  v10 = 0;
  if ( QueryFullProcessImageNameW(*v7, *v6, v9, &dwSize) )
  {
    v12 = dwSize + 1LL;
    goto LABEL_6;
  }
  if ( GetLastError() == 122 )
  {
    v12 = 2LL * dwSize;
LABEL_6:
    *v8 = v12;
    return v10;
  }
  return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)0x1AC,
                         (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
                         v11);
}
