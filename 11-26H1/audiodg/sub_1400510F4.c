/*
 * XREFs of sub_1400510F4 @ 0x1400510F4
 * Callers:
 *     sub_140051200 @ 0x140051200 (sub_140051200.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400510F4(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a1 = &off_1400BB8E0;
  *(_QWORD *)(a1 + 8) = off_1400BB898;
  *(_QWORD *)(a1 + 16) = off_1400BB918;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v6 = v2;
  if ( *(_BYTE *)(a1 + 112) )
    sub_1400B6010(*(_QWORD *)(a1 + 48));
  sub_140018FF0(&v6);
  sub_140003238((__int64 *)(a1 + 128));
  v3 = *(_QWORD **)(a1 + 120);
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_140003238(v3 + 1);
      sub_1400453E4((__int64)v3, 0x10uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  DeleteCriticalSection(v2);
  sub_140003238((__int64 *)(a1 + 64));
  sub_140003238((__int64 *)(a1 + 56));
  sub_140003238((__int64 *)(a1 + 48));
  sub_140003238((__int64 *)(a1 + 40));
  return sub_140050010(a1);
}
