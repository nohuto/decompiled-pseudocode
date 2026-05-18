/*
 * XREFs of sub_180038B3C @ 0x180038B3C
 * Callers:
 *     sub_18006F058 @ 0x18006F058 (sub_18006F058.c)
 *     sub_1800CC1C0 @ 0x1800CC1C0 (sub_1800CC1C0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180038B3C(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
