/*
 * XREFs of ??$com_weak_query@PEAVGamingOverlayExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F460
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x180347020 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180053738 (-reset@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VGamingOverlayExperienceManager@@@details@wil@@YAJPEAVGamingOverlayExperienceManager@@PEAPEAUIWeakReference@@@Z @ 0x18033BD24 (--$GetWeakReference@VGamingOverlayExperienceManager@@@details@wil@@YAJPEAVGamingOverlayExperienc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query<GamingOverlayExperienceManager *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<GamingOverlayExperienceManager>(v3, a1);
  if ( Weak < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x796,
      (int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)Weak,
      1);
  return a1;
}
