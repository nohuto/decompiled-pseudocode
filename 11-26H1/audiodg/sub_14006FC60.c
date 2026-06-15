/*
 * XREFs of sub_14006FC60 @ 0x14006FC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140016530 @ 0x140016530 (sub_140016530.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006EBF4 @ 0x14006EBF4 (sub_14006EBF4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006FC60(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+48h] [rbp-20h] BYREF

  v6 = *(_OWORD *)(a1 + 104);
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 88);
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  v3 = sub_1400B6010(v2);
  sub_140016530(&v5, 0LL);
  if ( v3 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14006EBF4(
        *((_QWORD *)off_1400E73D8 + 2),
        0xBu,
        (__int64)&unk_1400CA5E0,
        v3,
        (__int64)"CSystemAudioDeviceExclusive::GetLatency");
    }
    sub_14005A470("CSystemAudioDeviceExclusive::GetLatency", 182, v3);
  }
  sub_140018FF0(&v5);
  EtwEventActivityIdControl(4LL, &v7);
  return (unsigned int)v3;
}
