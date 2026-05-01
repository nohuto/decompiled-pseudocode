/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$36 @ 0x1806E4AEB
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_36(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 344) = *(_QWORD *)(a2 + 64) + 800LL;
  *(_QWORD *)(a2 + 72) = **(_QWORD **)(a2 + 344);
  operator delete(*(void **)(a2 + 72));
}
