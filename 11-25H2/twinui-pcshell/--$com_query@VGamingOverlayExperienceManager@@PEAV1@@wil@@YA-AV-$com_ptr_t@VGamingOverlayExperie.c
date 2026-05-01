/*
 * XREFs of ??$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA?AV?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F4D0
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x18034EAD0 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x180350E40 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 *__fastcall wil::com_query<GamingOverlayExperienceManager,GamingOverlayExperienceManager *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 *v3; // r8
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  v2 = *a2;
  v3 = a1;
  *a1 = *a2;
  v4 = *(_QWORD *)(v2 + 216);
  while ( v4 >= 0 )
  {
    if ( (_DWORD)v4 != 0x7FFFFFFF )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 216), v4 + 1, v4);
      if ( v5 != v4 )
        continue;
    }
    return v3;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference(
    (Microsoft::WRL::Details *)(2 * v4 + 16),
    (volatile int *)((unsigned __int64)v4 >> 63));
  return v3;
}
