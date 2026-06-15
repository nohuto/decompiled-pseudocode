/*
 * XREFs of sub_14006FD90 @ 0x14006FD90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006EBF4 @ 0x14006EBF4 (sub_14006EBF4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006FD90(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int128 v7; // [rsp+48h] [rbp-30h] BYREF

  v7 = *(_OWORD *)(a1 + 88);
  EtwEventActivityIdControl(4LL, &v7);
  *a3 = 0LL;
  v5 = sub_1400B6010(*(_QWORD *)(a1 + 72));
  if ( v5 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14006EBF4(
        *((_QWORD *)off_1400E73D8 + 2),
        0xCu,
        (__int64)&unk_1400CA5E0,
        v5,
        (__int64)"CSystemAudioDeviceExclusive::GetProtectedOutputController");
    }
    sub_14005A470("CSystemAudioDeviceExclusive::GetProtectedOutputController", 228, v5);
  }
  else
  {
    v5 = sub_1400B6010(0LL);
    sub_1400B6010(0LL);
  }
  EtwEventActivityIdControl(4LL, &v7);
  return (unsigned int)v5;
}
