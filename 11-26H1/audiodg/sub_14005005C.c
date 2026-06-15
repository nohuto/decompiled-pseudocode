/*
 * XREFs of sub_14005005C @ 0x14005005C
 * Callers:
 *     sub_140050230 @ 0x140050230 (sub_140050230.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005005C(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a1 = off_1400B9628;
  *(_QWORD *)(a1 + 8) = off_1400B95E8;
  *(_QWORD *)(a1 + 16) = off_1400B9608;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v10 = v2;
  if ( *(_BYTE *)(a1 + 136) )
    sub_1400B6010(*(_QWORD *)(a1 + 144));
  sub_140018FF0(&v10);
  sub_140003238((__int64 *)(a1 + 184));
  sub_140003238((__int64 *)(a1 + 176));
  sub_140003238((__int64 *)(a1 + 168));
  v3 = *(_QWORD **)(a1 + 160);
  *(_QWORD *)(a1 + 160) = 0LL;
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
  v5 = *(_QWORD **)(a1 + 152);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      sub_140003238(v5 + 1);
      sub_1400453E4((__int64)v5, 0x10uLL);
      v5 = v6;
    }
    while ( v6 );
  }
  sub_140003238((__int64 *)(a1 + 144));
  DeleteCriticalSection(v2);
  v7 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      sub_140003238(v7 + 1);
      sub_1400453E4((__int64)v7, 0x10uLL);
      v7 = v8;
    }
    while ( v8 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  sub_140003238((__int64 *)(a1 + 40));
  return sub_140050010(a1);
}
