/*
 * XREFs of sub_14001D774 @ 0x14001D774
 * Callers:
 *     sub_14001D71C @ 0x14001D71C (sub_14001D71C.c)
 *     sub_14004CC58 @ 0x14004CC58 (sub_14004CC58.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140006B48 @ 0x140006B48 (sub_140006B48.c)
 *     sub_14000EB88 @ 0x14000EB88 (sub_14000EB88.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14001D990 @ 0x14001D990 (sub_14001D990.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 */

void __fastcall sub_14001D774(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD v7[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v9; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]
  void *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  sub_14001D990();
  v3 = sub_140006470(v2);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    v7[0] = 184549376;
    v7[1] = 4;
    v8 = 1LL;
    v9 = *(unsigned __int16 **)(v3 + 8);
    v10 = *v9;
    v11 = 2;
    v12 = &unk_1400D1A5D;
    v13 = 22;
    v14 = 1;
    ((void (__fastcall *)(_QWORD, _DWORD *, __int64, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
      *(_QWORD *)(v3 + 32),
      v7,
      a1 + 344,
      0LL,
      2,
      &v9,
      (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
  }
  sub_140003238((__int64 *)(a1 + 392));
  sub_14001D96C(a1 + 384);
  sub_140003238((__int64 *)(a1 + 376));
  sub_140003238((__int64 *)(a1 + 360));
  sub_140003238((__int64 *)(a1 + 336));
  v4 = *(_QWORD *)(a1 + 312);
  if ( v4 )
  {
    _o_free(v4);
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 320);
  if ( v5 )
  {
    _o_free(v5);
    *(_QWORD *)(a1 + 320) = 0LL;
  }
  *(_DWORD *)(a1 + 328) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  sub_14000EB88(a1 + 168, v6);
  sub_140056130(a1 + 152);
  sub_140003238((__int64 *)(a1 + 144));
  sub_140006B48(a1 + 32);
}
