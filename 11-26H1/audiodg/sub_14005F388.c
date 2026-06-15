/*
 * XREFs of sub_14005F388 @ 0x14005F388
 * Callers:
 *     sub_140053070 @ 0x140053070 (sub_140053070.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140021A88 @ 0x140021A88 (sub_140021A88.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005F388(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a1 = off_1400B9590;
  *(_QWORD *)(a1 + 8) = off_1400B95C8;
  *(_QWORD *)(a1 + 16) = off_1400B9570;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v6 = v2;
  if ( *(_BYTE *)(a1 + 136) )
    sub_1400B6010(*(_QWORD *)(a1 + 144));
  sub_140018FF0(&v6);
  sub_140003238((__int64 *)(a1 + 184));
  v3 = *(_QWORD **)(a1 + 176);
  *(_QWORD *)(a1 + 176) = 0LL;
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
  sub_140003238((__int64 *)(a1 + 168));
  sub_140003238((__int64 *)(a1 + 160));
  sub_140003238((__int64 *)(a1 + 152));
  sub_140003238((__int64 *)(a1 + 144));
  DeleteCriticalSection(v2);
  sub_140003238((__int64 *)(a1 + 88));
  sub_140021A88((_QWORD *)(a1 + 56));
  return sub_140050010(a1);
}
