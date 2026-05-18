/*
 * XREFs of sub_1800D543C @ 0x1800D543C
 * Callers:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 * Callees:
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 */

int __fastcall sub_1800D543C(__int64 *a1)
{
  __int64 v1; // rbx
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_18002AEFC((__int64)v3, *a1);
  while ( *(_BYTE *)(v1 + 228) )
    Cnd_wait((_Cnd_t)(v1 + 152), v3[0]);
  *(_BYTE *)(v1 + 228) = 1;
  while ( *(_DWORD *)(v1 + 224) )
    Cnd_wait((_Cnd_t)(v1 + 80), v3[0]);
  return sub_18002B3C4((__int64)v3);
}
