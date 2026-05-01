/*
 * XREFs of ?CreateRumbleEffect@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x180362378
 * Callers:
 *     ?OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x1803629D0 (-OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamepadButtonTracker::CreateRumbleEffect(__int64 a1, __int64 a2, DWORD a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 136);
  if ( v5 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v5 + 80LL))(v5, &si128);
    Sleep(a3);
    v6 = *(_QWORD *)(a1 + 136);
    si128 = 0LL;
    return (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v6 + 80LL))(v6, &si128);
  }
  return result;
}
