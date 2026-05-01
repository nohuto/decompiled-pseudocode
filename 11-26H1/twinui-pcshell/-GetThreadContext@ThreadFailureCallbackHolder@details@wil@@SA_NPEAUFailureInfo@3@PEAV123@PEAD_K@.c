/*
 * XREFs of ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180143074
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800CAB20 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180143074 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 * Callees:
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180143074 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

bool __fastcall wil::details::ThreadFailureCallbackHolder::GetThreadContext(
        struct wil::FailureInfo *a1,
        struct wil::details::ThreadFailureCallbackHolder **a2,
        char *a3,
        unsigned __int64 a4)
{
  bool result; // al
  __int64 v9; // rcx
  __int64 v10; // r8
  struct wil::details::ThreadFailureCallbackHolder *v11; // rdx
  char *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  char *v15; // rbx
  _BYTE *v16; // rbx
  __int64 v17; // rbp
  size_t v18; // rdi
  size_t v19; // rsi

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = wil::details::ThreadFailureCallbackHolder::GetThreadContext(a1, a2[2], a3, a4);
    v11 = a2[4];
    if ( v11 )
    {
      if ( !*(_DWORD *)v11 )
        *(_DWORD *)v11 = _InterlockedIncrement(&wil::details::ThreadFailureCallbackHolder::s_telemetryId);
      if ( !*((_DWORD *)a1 + 20) )
      {
        *((_OWORD *)a1 + 5) = *(_OWORD *)v11;
        *((_QWORD *)a1 + 12) = *((_QWORD *)v11 + 2);
      }
      v12 = &a3[a4];
      *(_OWORD *)((char *)a1 + 104) = *(_OWORD *)v11;
      *((_QWORD *)a1 + 15) = *((_QWORD *)v11 + 2);
      v13 = -1LL;
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
      v15 = &a3[v14];
      if ( v12 - v15 <= 2 )
        return 1;
      *v15 = 92;
      v16 = v15 + 1;
      v17 = *((_QWORD *)v11 + 1);
      do
        ++v13;
      while ( *(_BYTE *)(v13 + v17) );
      v18 = v13 + 1;
      v19 = v12 - v16;
      if ( v18 >= v19 )
        v18 = v19;
      if ( v18 )
      {
        if ( !v16 )
          goto LABEL_22;
        if ( v17 && v19 >= v18 )
        {
          memcpy_0(v16, *((const void **)v11 + 1), v18);
          goto LABEL_19;
        }
        memset_0(v16, 0, v19);
        if ( v17 )
        {
          if ( v19 >= v18 )
            goto LABEL_19;
          *(_DWORD *)_o__errno(v9, v11, v10) = 34;
        }
        else
        {
LABEL_22:
          *(_DWORD *)_o__errno(v9, v11, v10) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_19:
      v16[v18 - 1] = 0;
      return 1;
    }
  }
  return result;
}
