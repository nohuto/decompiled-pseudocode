/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$26 @ 0x1806BD4BC
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_26(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 328) = *(_QWORD *)(a2 + 56) + 688LL;
  *(_QWORD *)(a2 + 336) = **(_QWORD **)(a2 + 328);
  operator delete(*(void **)(a2 + 336));
}
