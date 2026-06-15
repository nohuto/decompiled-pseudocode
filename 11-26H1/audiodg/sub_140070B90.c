/*
 * XREFs of sub_140070B90 @ 0x140070B90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140070B90(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v12 = *(_OWORD *)(a1 - 136);
  EtwEventActivityIdControl(4LL, &v12);
  v6 = 4 * v4;
  v7 = (unsigned int)v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v6 = -1LL;
  v8 = sub_1400499B8(v6, (__int64)&unk_1400C75FC);
  if ( v8 )
  {
    v9 = sub_1400B6010(*(_QWORD *)(a1 + 80));
    if ( v9 >= 0 && (_DWORD)v4 )
    {
      v10 = v8 - (_QWORD)a2;
      do
      {
        *a2 = *(_DWORD *)((char *)a2 + v10);
        ++a2;
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    v9 = -2147024882;
  }
  j_j__o_free(v8);
  if ( v9 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x10u, (__int64)&unk_1400CA7E8, v9);
    }
    sub_14005A470("CSystemAudioDeviceOffloadGraph::GetMeteringData", 400, v9);
  }
  EtwEventActivityIdControl(4LL, &v12);
  return (unsigned int)v9;
}
