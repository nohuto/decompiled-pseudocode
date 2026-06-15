/*
 * XREFs of sub_14001AF44 @ 0x14001AF44
 * Callers:
 *     sub_14001ACF0 @ 0x14001ACF0 (sub_14001ACF0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140016F3C @ 0x140016F3C (sub_140016F3C.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001AF44(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx

  *(_QWORD *)a1 = off_1400B8A28;
  *(_QWORD *)(a1 + 8) = off_1400B8A80;
  *(_QWORD *)(a1 + 16) = off_1400B8AA0;
  if ( *(_BYTE *)(a1 + 128) )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 64);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 64));
    sub_1400B6010(*(_QWORD *)(a1 + 104));
    sub_140019444((__int64 *)(a1 + 112));
    *(_BYTE *)(a1 + 128) = 0;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  sub_140019444((__int64 *)(a1 + 104));
  sub_140003238((__int64 *)(a1 + 112));
  sub_140003238((__int64 *)(a1 + 104));
  sub_140016F3C((__int64 *)(a1 + 80));
  WindowsDeleteString(*(HSTRING *)(a1 + 72));
  *(_QWORD *)(a1 + 72) = 0LL;
  return sub_14001B398(a1);
}
