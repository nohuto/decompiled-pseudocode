/*
 * XREFs of ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x180688254
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x180685C1C (s_DrawThemeTextPPIAware.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x180688394 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___ @ 0x180688180 (DPIToPPIHelpers--DrawThemeTextExLambda__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___.c)
 */

__int64 __fastcall DPIToPPIHelpers::DrawThemeTextExPPI(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        HDC hdc,
        __int64 a6,
        int a7,
        LPCWSTR a8,
        int a9,
        DWORD a10,
        LPRECT a11,
        DTTOPTS *a12)
{
  HDC v12; // rdi
  const WCHAR *v13; // r14
  struct tagRECT *v14; // r15
  DTTOPTS *v16; // r12
  HGDIOBJ CurrentObject; // rbx
  int ObjectW; // eax
  __int64 v20; // r8
  int v22; // [rsp+58h] [rbp-A9h] BYREF
  __int64 v23[6]; // [rsp+68h] [rbp-99h] BYREF
  _DWORD pv[24]; // [rsp+98h] [rbp-69h] BYREF
  __int64 v25; // [rsp+148h] [rbp+47h] BYREF
  int v26; // [rsp+150h] [rbp+4Fh] BYREF
  __int64 v27; // [rsp+158h] [rbp+57h] BYREF

  v27 = a3;
  v26 = a2;
  v25 = a1;
  v12 = hdc;
  v13 = a8;
  v14 = a11;
  v16 = a12;
  CurrentObject = GetCurrentObject(hdc, 6u);
  if ( CurrentObject )
  {
    memset_0(pv, 0, 0x5CuLL);
    ObjectW = GetObjectW(CurrentObject, 92, pv);
    v22 = pv[0];
    if ( ObjectW > 0 )
    {
      v23[0] = (__int64)&v26;
      v23[1] = (__int64)&v22;
      v23[2] = (__int64)pv;
      v23[3] = (__int64)&v25;
      v23[4] = (__int64)&v27;
      return (unsigned int)DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___(
                             a4,
                             v12,
                             v20,
                             a7,
                             v13,
                             a9,
                             a10,
                             v14,
                             v16,
                             (LPARAM)v23);
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
