/*
 * XREFs of ??0hresult@winrt@@QEAA@H@Z @ 0x1801E5028
 * Callers:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802D9744 (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x18035A874 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B575C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 * Callees:
 *     <none>
 */

winrt::hresult *__fastcall winrt::hresult::hresult(winrt::hresult *this, int a2)
{
  *(_DWORD *)this = a2;
  return this;
}
