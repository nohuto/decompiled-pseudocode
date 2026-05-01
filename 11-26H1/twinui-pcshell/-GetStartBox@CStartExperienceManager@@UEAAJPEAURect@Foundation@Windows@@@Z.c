/*
 * XREFs of ?GetStartBox@CStartExperienceManager@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180389410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z @ 0x1801FF0C0 (-GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::GetStartBox(
        CStartExperienceManager *this,
        struct Windows::Foundation::Rect *a2)
{
  int WindowHandle; // eax
  unsigned int v4; // edi
  __int64 result; // rax
  __m128i v6; // xmm3
  __m128i v7; // xmm2
  unsigned int v8; // eax
  __m128i v9; // xmm1
  HWND hWnd; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  hWnd = 0LL;
  rc = 0LL;
  WindowHandle = CStartExperienceManager::GetWindowHandle(this, (unsigned __int64 *)&hWnd);
  v4 = WindowHandle;
  if ( WindowHandle >= 0 )
  {
    if ( GetWindowRgnBox(hWnd, &rc) )
    {
      v6 = _mm_cvtsi32_si128(rc.top);
      v7 = _mm_cvtsi32_si128(rc.right - rc.left);
      v8 = rc.bottom - rc.top;
      *(float *)a2 = (float)rc.left;
      v9 = _mm_cvtsi32_si128(v8);
      result = 0LL;
      *((_DWORD *)a2 + 1) = _mm_cvtepi32_ps(v6).m128_u32[0];
      *((_DWORD *)a2 + 2) = _mm_cvtepi32_ps(v7).m128_u32[0];
      *((_DWORD *)a2 + 3) = _mm_cvtepi32_ps(v9).m128_u32[0];
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)WindowHandle);
    return v4;
  }
  return result;
}
