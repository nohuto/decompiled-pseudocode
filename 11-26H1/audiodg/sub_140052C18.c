/*
 * XREFs of sub_140052C18 @ 0x140052C18
 * Callers:
 *     sub_140053030 @ 0x140053030 (sub_140053030.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_1400529A4 @ 0x1400529A4 (sub_1400529A4.c)
 *     sub_140052A00 @ 0x140052A00 (sub_140052A00.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140052C18(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1400B9E58;
  *(_QWORD *)(a1 + 8) = off_1400B9E18;
  if ( *(_BYTE *)(a1 + 72) )
    sub_1400B6010(*(_QWORD *)(a1 + 24));
  sub_140052A00((__int64 *)(a1 + 456));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 416));
  sub_140052A00((__int64 *)(a1 + 352));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 312));
  sub_140003238((__int64 *)(a1 + 296));
  v2 = *(_QWORD **)(a1 + 288);
  *(_QWORD *)(a1 + 288) = 0LL;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_140003238(v2 + 1);
      sub_1400453E4((__int64)v2, 0x10uLL);
      v2 = v3;
    }
    while ( v3 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  sub_1400529A4((__int64 *)(a1 + 184));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  sub_140052A00((__int64 *)(a1 + 80));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  result = sub_140003238((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 20) = -1073741823;
  return result;
}
