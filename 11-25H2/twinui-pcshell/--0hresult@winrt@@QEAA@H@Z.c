/*
 * XREFs of ??0hresult@winrt@@QEAA@H@Z @ 0x1801EF0E0
 * Callers:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802E097C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180353FA4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805917CC (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 * Callees:
 *     <none>
 */

winrt::hresult *__fastcall winrt::hresult::hresult(winrt::hresult *this, int a2)
{
  *(_DWORD *)this = a2;
  return this;
}
