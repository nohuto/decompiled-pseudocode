/*
 * XREFs of ??R?$__func@V_lambda_0e39b4e02d07fc3330b16054b36d48cc_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x1806CB510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_0e39b4e02d07fc3330b16054b36d48cc_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        _QWORD **a4)
{
  _QWORD *v4; // rdi
  unsigned int v5; // ebx
  unsigned int PersistedRegistryLocationW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *a4;
  v5 = 0;
  PersistedRegistryLocationW = GetPersistedRegistryLocationW(
                                 **(_QWORD **)(a1 + 8),
                                 **(_QWORD **)(a1 + 16),
                                 *a2,
                                 (unsigned int)(2 * *a3));
  if ( !PersistedRegistryLocationW || PersistedRegistryLocationW == 234 )
    *v4 = 0LL;
  else
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           (void *)0x12,
                           (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
                           (const char *)PersistedRegistryLocationW);
  return v5;
}
