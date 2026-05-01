/*
 * XREFs of ??$make_shared@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802C4E50
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18062FC2C (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ??0RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C4EC4 (--0RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection,>(
        _QWORD *a1)
{
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x58uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection>::`vftable';
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::RemoteDesktopCollection((winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection *)(v3 + 4));
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
