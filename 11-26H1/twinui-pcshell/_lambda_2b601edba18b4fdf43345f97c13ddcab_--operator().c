/*
 * XREFs of _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x1804A01B4
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A1120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1804A0010 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void (__fastcall *v6)(__int64); // rax
  void (__fastcall **v8)(__int64); // [rsp+50h] [rbp+8h]

  v8 = (void (__fastcall **)(__int64))operator new(0xA0uLL);
  v8[17] = a1;
  v6 = *(void (__fastcall **)(__int64))a3;
  *(_QWORD *)a3 = 0LL;
  v8[18] = v6;
  *v8 = lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator();
  *((_DWORD *)v8 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v8 + 128) = 0;
  lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator()((__int64)v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
