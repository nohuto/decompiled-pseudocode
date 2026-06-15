/*
 * XREFs of sub_140072510 @ 0x140072510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140072510(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int128 v7; // [rsp+38h] [rbp-30h] BYREF

  v7 = *(_OWORD *)(a1 + 88);
  EtwEventActivityIdControl(4LL, &v7);
  *a3 = 0LL;
  v5 = sub_1400B6010(*(_QWORD *)(a1 + 168));
  if ( v5 < 0 || (v5 = sub_1400B6010(0LL), sub_1400B6010(0LL), v5 < 0) )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x15u, (__int64)&unk_1400C6808, v5);
    }
    sub_14005A470("CSystemAudioDeviceSharedBase::GetProtectedOutputController", 405, v5);
  }
  EtwEventActivityIdControl(4LL, &v7);
  return (unsigned int)v5;
}
