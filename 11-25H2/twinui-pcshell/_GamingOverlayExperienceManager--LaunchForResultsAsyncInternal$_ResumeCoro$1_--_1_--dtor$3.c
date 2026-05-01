/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806BD123
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1802D0768 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 56) + 672LL;
  *(_DWORD *)(a2 + 232) = **(_DWORD **)(a2 + 224);
  if ( (*(_DWORD *)(a2 + 232) & 1) != 0 )
  {
    *(_QWORD *)(a2 + 240) = *(_QWORD *)(a2 + 56) + 672LL;
    *(_QWORD *)(a2 + 248) = *(_QWORD *)(a2 + 56) + 672LL;
    *(_DWORD *)(a2 + 232) = **(_DWORD **)(a2 + 248);
    *(_DWORD *)(a2 + 256) = *(_DWORD *)(a2 + 232) & 0xFFFFFFFE;
    **(_DWORD **)(a2 + 240) = *(_DWORD *)(a2 + 256);
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a2 + 56) + 80LL;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference(*(Microsoft::WRL::Wrappers::HStringReference **)(a2 + 264));
  }
}
