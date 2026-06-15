/*
 * XREFs of sub_140072170 @ 0x140072170
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140072170(__int64 a1, int *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF

  v9 = *(_OWORD *)(a1 + 104);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v4 = *(_QWORD *)(a1 + 184);
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  v5 = sub_1400B6010(v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x12u, (__int64)&unk_1400C6808, v5);
    }
    sub_14005A470("CSystemAudioDeviceSharedBase::GetEndpointBufferSize", 265, v6);
  }
  else if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
         && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
         && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x11u, (__int64)&unk_1400C6808, *a2);
  }
  sub_140018FF0(&v8);
  EtwEventActivityIdControl(4LL, &v10);
  return v6;
}
