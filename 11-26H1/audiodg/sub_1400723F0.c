/*
 * XREFs of sub_1400723F0 @ 0x1400723F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400723F0(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+28h] [rbp-40h]
  __int128 v7; // [rsp+38h] [rbp-30h] BYREF

  v6 = *(_OWORD *)(a1 + 104);
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 184);
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  v3 = sub_1400B6010(v2);
  if ( v3 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x13u, (__int64)&unk_1400C6808, v3);
    }
    sub_14005A470("CSystemAudioDeviceSharedBase::GetLatency", 322, v3);
  }
  sub_140018FF0(&v5);
  EtwEventActivityIdControl(4LL, &v7);
  return (unsigned int)v3;
}
