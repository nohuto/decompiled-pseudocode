/*
 * XREFs of ?_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z @ 0x1804C0448
 * Callers:
 *     ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804BF570 (-GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall AccessibleElementBase::_GetRuntimeIdArray(
        AccessibleElementBase *this,
        __int64 a2,
        struct tagSAFEARRAY **a3)
{
  SAFEARRAY *Vector; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  HRESULT v8; // eax
  unsigned int v9; // edi
  LONG rgIndices; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v11[1] = HIDWORD(a2);
  v11[2] = a2;
  v11[0] = 3;
  Vector = SafeArrayCreateVector(3u, 0, 3u);
  if ( Vector )
  {
    rgIndices = 0;
    v6 = 0;
    v7 = 0;
    while ( v6 < 3 )
    {
      v8 = SafeArrayPutElement(Vector, &rgIndices, &v11[v7]);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CA,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v8);
        SafeArrayDestroy(Vector);
        return v9;
      }
      v6 = rgIndices + 1;
      rgIndices = v6;
      v7 = v6;
    }
    *a3 = Vector;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
