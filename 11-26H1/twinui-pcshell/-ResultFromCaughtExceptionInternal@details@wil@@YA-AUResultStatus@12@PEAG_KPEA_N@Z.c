/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x18004F850
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18004FCA4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::details::ResultFromCaughtExceptionInternal(int *a1, _WORD *a2, __int64 a3, _BYTE *a4)
{
  int v8; // eax
  int v9; // edx
  int *result; // rax
  int v11; // eax
  __int64 v12; // rdx
  const wil::ResultException *v13; // rbx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  int v16; // edx
  __int64 *v17; // rbp
  unsigned __int64 v18; // r8
  int v19; // eax
  int v20; // edx
  const wil::ResultException *v21; // rbx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r9
  int v24; // edx
  unsigned __int64 v25; // r9
  int v26; // edx
  __int64 *v27; // rdx
  __int64 v28; // [rsp+0h] [rbp-88h] BYREF
  const wil::ResultException *v29; // [rsp+20h] [rbp-68h] BYREF
  const std::bad_alloc *v30; // [rsp+28h] [rbp-60h] BYREF
  const wil::ResultException *v31; // [rsp+30h] [rbp-58h] BYREF
  const std::bad_alloc *v32; // [rsp+38h] [rbp-50h] BYREF
  std::exception *v33; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+48h] [rbp-40h]
  int v35; // [rsp+50h] [rbp-38h]
  int *v36; // [rsp+90h] [rbp+8h]
  _DWORD *v37; // [rsp+90h] [rbp+8h]
  const struct wil::ResultException *v38; // [rsp+98h] [rbp+10h]
  const struct std::exception *v39; // [rsp+98h] [rbp+10h]
  const struct wil::ResultException *v40; // [rsp+98h] [rbp+10h]
  const struct std::exception *v41; // [rsp+98h] [rbp+10h]
  const struct std::exception *v42; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v43; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v44; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v45; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v46; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v47; // [rsp+A0h] [rbp+18h]
  _BYTE *v48; // [rsp+A8h] [rbp+20h]
  _BYTE *v49; // [rsp+A8h] [rbp+20h]

  if ( a2 )
    *a2 = 0;
  *a4 = 0;
  if ( g_pfnResultFromCaughtException_CppWinRt )
  {
    v8 = g_pfnResultFromCaughtException_CppWinRt(a2, a3, a4);
    if ( v8 < 0 )
      goto LABEL_5;
  }
  if ( g_pfnResultFromCaughtException_WinRt )
  {
    v8 = g_pfnResultFromCaughtException_WinRt(a2, a3, a4);
LABEL_5:
    *a1 = v8;
    a1[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)v8, v9);
    a1[2] = 0;
    return a1;
  }
  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v29 )
    {
      *v48 = 1;
      v13 = v29;
      wil::details::MaybeGetExceptionString(v29, v38, v43, v14);
      v34 = *((_QWORD *)v13 + 4);
      v35 = (unsigned __int8)(*((_BYTE *)v13 + 28) & 8) >> 3;
      result = v36;
      *(_QWORD *)v36 = v34;
      v36[2] = v35;
      return result;
    }
    catch ( const std::bad_alloc *v30 )
    {
      wil::details::MaybeGetExceptionString(v30, v39, v44, v15);
      LODWORD(v34) = -2147024882;
      HIDWORD(v34) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL, v16);
      v35 = 0;
      result = v36;
      *(_QWORD *)v36 = v34;
      v36[2] = v35;
      return result;
    }
    catch ( ... )
    {
      v27 = &v28;
      v17 = v27;
      v19 = wil::details::RecognizeCaughtExceptionFromCallback(
              (wil::details *)v27[19],
              (unsigned __int16 *)v27[20],
              v18);
      if ( v19 < 0 )
      {
        *((_DWORD *)v17 + 18) = v19;
        *((_DWORD *)v17 + 19) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v19, v20);
        *((_DWORD *)v17 + 20) = 0;
        result = v36;
        *(_QWORD *)v36 = v34;
        v36[2] = v35;
        return result;
      }
      goto LABEL_10;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v31 )
  {
    *v49 = 1;
    v21 = v31;
    wil::details::MaybeGetExceptionString(v31, v40, v45, v22);
    v34 = *((_QWORD *)v21 + 4);
    v35 = (unsigned __int8)(*((_BYTE *)v21 + 28) & 8) >> 3;
    result = v36;
    *(_QWORD *)v36 = v34;
    v36[2] = v35;
    return result;
  }
  catch ( const std::bad_alloc *v32 )
  {
    wil::details::MaybeGetExceptionString(v32, v41, v46, v23);
    LODWORD(v34) = -2147024882;
    HIDWORD(v34) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL, v24);
    v35 = 0;
    result = v36;
    *(_QWORD *)v36 = v34;
    v36[2] = v35;
    return result;
  }
  catch ( std::exception *v33 )
  {
    wil::details::MaybeGetExceptionString(v33, v42, v47, v25);
    LODWORD(v34) = -2147024322;
    HIDWORD(v34) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL, v26);
    v35 = 0;
    result = v36;
    *(_QWORD *)v36 = v34;
    v36[2] = v35;
    return result;
  }
  catch ( ... )
  {
LABEL_10:
    *v37 = 0;
    v11 = wil::details::HrToNtStatus(0LL, (int)v37);
    *(_DWORD *)(v12 + 4) = v11;
    *(_DWORD *)(v12 + 8) = 0;
    return (int *)v12;
  }
  return result;
}
