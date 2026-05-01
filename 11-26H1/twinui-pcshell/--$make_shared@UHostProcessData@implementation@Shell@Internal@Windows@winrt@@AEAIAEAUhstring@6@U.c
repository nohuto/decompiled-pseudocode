/*
 * XREFs of ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U76@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180647290
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F9B8 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBIAEBUhstring@5@10AEB_N22222@Z @ 0x18066757C (--0HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBIAEBUhstring@5@10AEB_N22.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int &,winrt::hstring &,winrt::hstring,unsigned int &,bool &,bool &,bool &,bool &,bool &,bool &>(
        _QWORD *a1,
        const unsigned int *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4,
        unsigned int *a5,
        bool *a6,
        bool *a7,
        bool *a8,
        bool *a9,
        bool *a10,
        bool *a11)
{
  _DWORD *v16; // [rsp+90h] [rbp+8h]

  v16 = operator new(0x38uLL);
  *(_OWORD *)v16 = 0LL;
  v16[2] = 1;
  v16[3] = 1;
  *(_QWORD *)v16 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::`vftable';
  winrt::Windows::Internal::Shell::implementation::HostProcessData::HostProcessData(
    (winrt::Windows::Internal::Shell::implementation::HostProcessData *)(v16 + 4),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11);
  *a1 = v16 + 4;
  a1[1] = v16;
  return a1;
}
