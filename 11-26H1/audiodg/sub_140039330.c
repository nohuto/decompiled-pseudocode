/*
 * XREFs of sub_140039330 @ 0x140039330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 */

__int64 __fastcall sub_140039330(__int64 a1)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_OWORD *)(a1 - 56);
  EtwEventActivityIdControl(4LL, &v3);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
  ++*(_DWORD *)(a1 + 40);
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 23LL, &unk_1400C6808);
  }
  if ( a1 != 120 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
  EtwEventActivityIdControl(4LL, &v3);
  return 0LL;
}
