/*
 * XREFs of sub_14002BF4C @ 0x14002BF4C
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14002BF4C(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v7; // rcx
  LPVOID pv; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+28h] [rbp-48h]
  int v10; // [rsp+30h] [rbp-40h]
  __int128 v11; // [rsp+34h] [rbp-3Ch]
  _BYTE v12[36]; // [rsp+44h] [rbp-2Ch] BYREF

  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  pv = 0LL;
  if ( (int)sub_1400B6010(a3) >= 0 )
  {
    v10 = 56;
    v11 = xmmword_1400C69D0;
    MMDevAPI_29(*(_QWORD *)(a1 + 192), &pv);
    *(_QWORD *)&v12[4] = pv;
    *(_OWORD *)&v12[12] = *(_OWORD *)(a1 + 296);
    *(_QWORD *)&v12[28] = sub_140006470(v7);
    v5 = sub_1400B6010(a3);
    if ( v5 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 49LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::InitializeSilenceMonitorInterface", 3932LL, (unsigned int)v5);
    }
  }
  else
  {
    v5 = 0;
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v9 )
    sub_1400B6010(v9);
  return (unsigned int)v5;
}
