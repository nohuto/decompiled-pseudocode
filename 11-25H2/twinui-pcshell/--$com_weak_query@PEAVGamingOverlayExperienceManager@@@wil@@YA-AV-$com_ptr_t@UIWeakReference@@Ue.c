/*
 * XREFs of ??$com_weak_query@PEAVGamingOverlayExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F524
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x1803443B0 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800BDC3C (-reset@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$GetWeakReference@VGamingOverlayExperienceManager@@@details@wil@@YAJPEAVGamingOverlayExperienceManager@@PEAPEAUIWeakReference@@@Z @ 0x18033C030 (--$GetWeakReference@VGamingOverlayExperienceManager@@@details@wil@@YAJPEAVGamingOverlayExperienc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query<GamingOverlayExperienceManager *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  *a1 = 0LL;
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<GamingOverlayExperienceManager>(v3, a1);
  if ( Weak < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x795,
      (int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)Weak,
      1);
  return a1;
}
