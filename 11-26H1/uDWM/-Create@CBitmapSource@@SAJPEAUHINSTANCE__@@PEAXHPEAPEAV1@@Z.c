/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18009A87C
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18009A928 (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(HINSTANCE a1, void *a2, __int64 a3, struct CBitmapSource **a4)
{
  HRESULT ThemeStream; // ebx
  __int64 v6; // rdx
  void *v8; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0LL;
  v10 = 0;
  ThemeStream = GetThemeStream(a2, 0, 0, 213, &v8, &v10, a1);
  if ( ThemeStream < 0 )
  {
    v6 = 61LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)ThemeStream);
    return (unsigned int)ThemeStream;
  }
  ThemeStream = CBitmapSource::Create(v8, v10, a4);
  if ( ThemeStream < 0 )
  {
    v6 = 64LL;
    goto LABEL_3;
  }
  return 0LL;
}
