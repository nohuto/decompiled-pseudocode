/*
 * XREFs of sub_180029D50 @ 0x180029D50
 * Callers:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_180029734 @ 0x180029734 (sub_180029734.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 *     sub_180029BAC @ 0x180029BAC (sub_180029BAC.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 * Callees:
 *     sub_18000D77C @ 0x18000D77C (sub_18000D77C.c)
 */

_QWORD *sub_180029D50()
{
  __int64 v0; // rdx
  _QWORD *v1; // rbx
  int v2; // eax

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v1 = (_QWORD *)(v0 + 312);
  v2 = *(_DWORD *)(v0 + 304);
  if ( (v2 & 1) == 0 )
  {
    *(_DWORD *)(v0 + 304) = v2 | 1;
    *v1 = 0LL;
    *(_QWORD *)(v0 + 320) = 0LL;
    *(_QWORD *)(v0 + 328) = 0LL;
    sub_18000D77C((__int64)sub_1800E58E0);
  }
  return v1;
}
