/*
 * XREFs of ?EnsureTileCollectionAsync@JointResize@@AEAA?AU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@XZ @ 0x180515C84
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x1805176A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     JointResize::EnsureTileCollectionAsync$_InitCoro$2 @ 0x180515880 (JointResize--EnsureTileCollectionAsync$_InitCoro$2.c)
 */

__int64 *__fastcall JointResize::EnsureTileCollectionAsync(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+188h] [rbp+10h] BYREF

  v4 = operator new(0x150uLL);
  v6 = 0;
  JointResize::EnsureTileCollectionAsync__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
