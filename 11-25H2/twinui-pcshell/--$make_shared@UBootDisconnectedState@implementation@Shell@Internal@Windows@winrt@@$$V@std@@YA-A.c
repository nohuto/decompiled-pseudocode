/*
 * XREFs of ??$make_shared@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180643E30
 * Callers:
 *     ??0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C4FBC (--0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::BootDisconnectedState,>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x18uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectingState>::`vftable';
  *((_QWORD *)v3 + 2) = &winrt::Windows::Internal::Shell::implementation::BootDisconnectedState::`vftable';
  a1[1] = v3;
  result = a1;
  *a1 = v3 + 4;
  return result;
}
