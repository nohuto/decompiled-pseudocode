/*
 * XREFs of sub_14002BB98 @ 0x14002BB98
 * Callers:
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 * Callees:
 *     sub_14000A67C @ 0x14000A67C (sub_14000A67C.c)
 *     sub_1400326E0 @ 0x1400326E0 (sub_1400326E0.c)
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_14002BB98(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  int v4; // r14d
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  v3 = 0LL;
  v4 = 0;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 304), 0LL, 0LL) )
  {
    if ( (int)sub_1400326E0(a1) < 0 )
    {
      LeaveCriticalSection(v2);
      return v3;
    }
    ++v4;
    if ( v4 == 100 * (v4 / 100) )
      sub_14004E2C8(
        retaddr,
        299LL,
        "avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        2289827891LL,
        "Non-fatal. Will continue waiting for RT thread...");
  }
  *(_QWORD *)(a1 + 320) = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 312), 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 376) )
  {
    sub_14000A67C(a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL), a1 + 144LL * *(unsigned __int16 *)(a1 + 328));
    *(_BYTE *)(a1 + 376) = 0;
  }
  return a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL);
}
