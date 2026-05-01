/*
 * XREFs of ??R?$__func@V_lambda_9add42f29847e4cf93cc02d1f4af8ace_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x1802916A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_9add42f29847e4cf93cc02d1f4af8ace_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        WCHAR **a2,
        DWORD *a3,
        __int64 **a4)
{
  DWORD v4; // eax
  WCHAR *v5; // r8
  DWORD *v6; // rdx
  HANDLE *v7; // rcx
  __int64 *v8; // rdi
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwSize; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a3;
  v5 = *a2;
  v6 = *(DWORD **)(a1 + 16);
  v7 = *(HANDLE **)(a1 + 8);
  v8 = *a4;
  dwSize = v4;
  v9 = 0;
  if ( QueryFullProcessImageNameW(*v7, *v6, v5, &dwSize) )
  {
    v11 = dwSize + 1LL;
    goto LABEL_6;
  }
  if ( GetLastError() == 122 )
  {
    v11 = 2LL * dwSize;
LABEL_6:
    *v8 = v11;
    return v9;
  }
  return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)0x1AF,
                         (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
                         v10);
}
