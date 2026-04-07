/*
 * XREFs of ?ResultFromCaughtException_CppWinRt@details@wil@@YAJPEAG_KPEA_N@Z @ 0x1800925F0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_CppWinRt(
        wil::details *this,
        unsigned __int16 *a2,
        __int64 a3,
        bool *a4)
{
  __int64 *v4; // rbp
  int v5; // eax
  __int64 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  const winrt::hresult_error *v8; // [rsp+20h] [rbp-68h] BYREF
  const winrt::hresult_error *v9; // [rsp+28h] [rbp-60h] BYREF
  const wil::ResultException *v10; // [rsp+30h] [rbp-58h] BYREF
  const stdext::bad_alloc *v11; // [rsp+38h] [rbp-50h] BYREF
  const std::out_of_range *v12; // [rsp+40h] [rbp-48h] BYREF
  const std::invalid_argument *v13; // [rsp+48h] [rbp-40h] BYREF
  const wil::ResultException *v14; // [rsp+50h] [rbp-38h] BYREF
  const stdext::bad_alloc *v15; // [rsp+58h] [rbp-30h] BYREF
  const std::out_of_range *v16; // [rsp+60h] [rbp-28h] BYREF
  const std::invalid_argument *v17; // [rsp+68h] [rbp-20h] BYREF
  const stdext::exception *v18; // [rsp+70h] [rbp-18h] BYREF
  const struct wil::ResultException *v19; // [rsp+90h] [rbp+8h]
  const struct winrt::hresult_error *v20; // [rsp+90h] [rbp+8h]
  const struct stdext::exception *v21; // [rsp+90h] [rbp+8h]
  const struct stdext::exception *v22; // [rsp+90h] [rbp+8h]
  const struct stdext::exception *v23; // [rsp+90h] [rbp+8h]
  const struct wil::ResultException *v24; // [rsp+90h] [rbp+8h]
  const struct winrt::hresult_error *v25; // [rsp+90h] [rbp+8h]
  const struct stdext::exception *v26; // [rsp+90h] [rbp+8h]
  const struct stdext::exception *v27; // [rsp+90h] [rbp+8h]
  const struct stdext::exception *v28; // [rsp+90h] [rbp+8h]
  const struct stdext::exception *v29; // [rsp+90h] [rbp+8h]
  unsigned __int16 *v30; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v31; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v32; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v33; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v34; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v35; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v36; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v37; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v38; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v39; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v40; // [rsp+98h] [rbp+10h]
  _BYTE *v41; // [rsp+A0h] [rbp+18h]
  _BYTE *v42; // [rsp+A0h] [rbp+18h]
  int v43; // [rsp+A8h] [rbp+20h] BYREF

  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v10 )
    {
      *v41 = 1;
      wil::details::MaybeGetExceptionString(v10, v19, v30);
      return;
    }
    catch ( const winrt::hresult_error *v8 )
    {
      wil::details::MaybeGetExceptionString(v8, v20, v31);
      winrt::hresult_error::to_abi(v8, &v43);
      return;
    }
    catch ( const stdext::bad_alloc *v11 )
    {
      wil::details::MaybeGetExceptionString(v11, v21, v32);
      return;
    }
    catch ( const std::out_of_range *v12 )
    {
      wil::details::MaybeGetExceptionString(v12, v22, v33);
      return;
    }
    catch ( const std::invalid_argument *v13 )
    {
      wil::details::MaybeGetExceptionString(v13, v23, v34);
      return;
    }
    catch ( ... )
    {
      v6 = &v7;
      v4 = v6;
      v5 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v6[18], (unsigned __int16 *)v6[19]);
      *((_DWORD *)v4 + 42) = v5;
      if ( v5 < 0 )
        return;
      return;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v14 )
  {
    *v42 = 1;
    wil::details::MaybeGetExceptionString(v14, v24, v35);
    return;
  }
  catch ( const winrt::hresult_error *v9 )
  {
    wil::details::MaybeGetExceptionString(v9, v25, v36);
    winrt::hresult_error::to_abi(v9, &v43);
    return;
  }
  catch ( const stdext::bad_alloc *v15 )
  {
    wil::details::MaybeGetExceptionString(v15, v26, v37);
    return;
  }
  catch ( const std::out_of_range *v16 )
  {
    wil::details::MaybeGetExceptionString(v16, v27, v38);
    return;
  }
  catch ( const std::invalid_argument *v17 )
  {
    wil::details::MaybeGetExceptionString(v17, v28, v39);
    return;
  }
  catch ( const stdext::exception *v18 )
  {
    wil::details::MaybeGetExceptionString(v18, v29, v40);
    return;
  }
  catch ( ... )
  {
    return;
  }
}
