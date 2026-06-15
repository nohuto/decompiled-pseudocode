/*
 * XREFs of sub_14006FEC0 @ 0x14006FEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140016530 @ 0x140016530 (sub_140016530.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140027AE0 @ 0x140027AE0 (sub_140027AE0.c)
 *     sub_140043B74 @ 0x140043B74 (sub_140043B74.c)
 *     sub_140043F48 @ 0x140043F48 (sub_140043F48.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006EBF4 @ 0x14006EBF4 (sub_14006EBF4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006FEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int128 v5; // xmm0
  int v8; // ebx
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-30h]
  __int128 v13; // [rsp+48h] [rbp-20h] BYREF

  v5 = *(_OWORD *)(a2 + 148);
  *(_OWORD *)(a1 + 104) = v5;
  v12 = v5;
  v13 = v5;
  EtwEventActivityIdControl(4LL, &v13);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  *(_DWORD *)(a1 + 80) = a5;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 136);
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  v8 = sub_140043B74(a1, a2);
  if ( v8 < 0 )
    goto LABEL_4;
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 72);
  v9 = sub_140027AE0(*(_QWORD *)(a2 + 56), a1);
  *(_DWORD *)(a1 + 236) = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
LABEL_4:
    sub_1400B6010(a1);
    goto LABEL_5;
  }
  v8 = sub_140043F48(a1, a2, 0);
LABEL_5:
  sub_140016530(&v11, 0LL);
  if ( v8 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14006EBF4(
        *((_QWORD *)off_1400E73D8 + 2),
        0xAu,
        (__int64)&unk_1400CA5E0,
        v8,
        (__int64)"CSystemAudioDeviceExclusive::Initialize");
    }
    sub_14005A470("CSystemAudioDeviceExclusive::Initialize", 130, v8);
  }
  sub_140018FF0(&v11);
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v8;
}
