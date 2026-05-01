/*
 * XREFs of ?_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D238C
 * Callers:
 *     ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D14C0 (-GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall AccessibleElementBase::_GetRuntimeIdArray(
        AccessibleElementBase *this,
        __int64 a2,
        struct tagSAFEARRAY **a3)
{
  SAFEARRAY *Vector; // rbx
  LONG i; // eax
  HRESULT v7; // eax
  unsigned int v8; // edi
  LONG rgIndices; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v10[1] = HIDWORD(a2);
  v10[2] = a2;
  v10[0] = 3;
  Vector = SafeArrayCreateVector(3u, 0, 3u);
  if ( Vector )
  {
    rgIndices = 0;
    for ( i = 0; (unsigned __int64)i < 3; i = ++rgIndices )
    {
      v7 = SafeArrayPutElement(Vector, &rgIndices, &v10[i]);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CA,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v7);
        SafeArrayDestroy(Vector);
        return v8;
      }
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
