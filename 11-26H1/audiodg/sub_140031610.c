/*
 * XREFs of sub_140031610 @ 0x140031610
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140031778 @ 0x140031778 (sub_140031778.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140031610(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *(_OWORD *)(a1 - 56);
  EtwEventActivityIdControl(4LL, &v6);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
  if ( (unsigned __int8)sub_1400B6010(a2) )
    sub_1400B6010(a1);
  --*(_DWORD *)(a1 + 40);
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 28LL, &unk_1400C6808);
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v4 = sub_140031778(a1 - 160, 0LL);
      if ( v4 < 0 )
        sub_140007934(
          (int)retaddr,
          713,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
          v4);
    }
  }
  if ( a1 != 120 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
  EtwEventActivityIdControl(4LL, &v6);
  return 0LL;
}
