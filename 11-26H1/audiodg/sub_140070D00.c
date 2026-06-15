/*
 * XREFs of sub_140070D00 @ 0x140070D00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140070D00(__int64 a1)
{
  int v2; // ebx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_OWORD *)(a1 - 120);
  EtwEventActivityIdControl(4LL, &v4);
  v2 = sub_1400B6010(*(_QWORD *)(a1 + 80));
  if ( v2 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xDu, (__int64)&unk_1400CA7E8, v2);
    }
    sub_14005A470("CSystemAudioDeviceOffloadGraph::GetVolumeChannelCount", 257, v2);
  }
  EtwEventActivityIdControl(4LL, &v4);
  return (unsigned int)v2;
}
