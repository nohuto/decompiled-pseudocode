/*
 * XREFs of sub_14003B23C @ 0x14003B23C
 * Callers:
 *     sub_14003B200 @ 0x14003B200 (sub_14003B200.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14003B23C(_QWORD *a1)
{
  _QWORD *v1; // rsi
  bool v2; // zf
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 4;
  v2 = a1[4] == 0LL;
  v7 = *(_OWORD *)(a1[1] - 16LL);
  if ( !v2 )
    __fastfail(5u);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v4 = ((__int64 (__fastcall *)(__int128 *, void (__fastcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *), _QWORD *, _QWORD *))EtwEventRegister)(
         &v7,
         EnableCallback,
         a1,
         a1 + 4);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(*v1, 2LL, a1[1], *(unsigned __int16 *)a1[1], v7, *((_QWORD *)&v7 + 1));
  }
  return v5;
}
