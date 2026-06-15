/*
 * XREFs of sub_140020C88 @ 0x140020C88
 * Callers:
 *     sub_140020B8C @ 0x140020B8C (sub_140020B8C.c)
 * Callees:
 *     sub_140020D50 @ 0x140020D50 (sub_140020D50.c)
 *     sub_140047D48 @ 0x140047D48 (sub_140047D48.c)
 */

__int64 __fastcall sub_140020C88(__int64 a1)
{
  __int64 result; // rax

  sub_140047D48();
  *(_QWORD *)a1 = off_1400B9628;
  *(_QWORD *)(a1 + 8) = off_1400B95E8;
  *(_QWORD *)(a1 + 16) = off_1400B9608;
  *(_QWORD *)(a1 + 40) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 48), 0, 0);
  sub_140020D50(a1 + 88);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 96), 0, 0);
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  sub_140020D50(a1 + 152);
  sub_140020D50(a1 + 160);
  *(_QWORD *)(a1 + 168) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  return result;
}
