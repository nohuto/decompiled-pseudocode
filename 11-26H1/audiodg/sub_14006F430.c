/*
 * XREFs of sub_14006F430 @ 0x14006F430
 * Callers:
 *     sub_14006F158 @ 0x14006F158 (sub_14006F158.c)
 * Callees:
 *     sub_1400115CC @ 0x1400115CC (sub_1400115CC.c)
 *     sub_140027854 @ 0x140027854 (sub_140027854.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006F430(__int64 a1)
{
  void *v2; // rcx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v4);
  if ( *(_DWORD *)(a1 + 236) )
    sub_140027854(a1);
  sub_1400115CC((_QWORD *)(a1 + 88));
  v2 = *(void **)(a1 + 208);
  if ( v2 && v2 != (void *)-1LL )
  {
    CloseHandle(v2);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return EtwEventActivityIdControl(4LL, &v4);
}
