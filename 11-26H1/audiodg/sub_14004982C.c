/*
 * XREFs of sub_14004982C @ 0x14004982C
 * Callers:
 *     sub_14002A170 @ 0x14002A170 (sub_14002A170.c)
 *     sub_140033AE4 @ 0x140033AE4 (sub_140033AE4.c)
 *     sub_140039760 @ 0x140039760 (sub_140039760.c)
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004982C(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_1400E7CE8);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_1400E7AC0;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = dword_1400E7AC0;
  LeaveCriticalSection(&stru_1400E7CE8);
  return sub_140049900();
}
