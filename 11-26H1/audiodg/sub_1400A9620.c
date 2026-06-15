/*
 * XREFs of sub_1400A9620 @ 0x1400A9620
 * Callers:
 *     sub_1400AB180 @ 0x1400AB180 (sub_1400AB180.c)
 * Callees:
 *     sub_1400ABD2C @ 0x1400ABD2C (sub_1400ABD2C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1400A9620(__int64 a1, unsigned __int32 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  signed __int64 v5; // rdx
  unsigned __int32 v6; // eax
  __int64 v7; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 744) & -(__int64)TryEnterCriticalSection((LPCRITICAL_SECTION)(a1 + 744)));
  if ( v4 )
  {
    if ( (_InterlockedCompareExchange(
            (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 1312LL) + 64LL),
            0,
            0) & 0x40) != 0 )
    {
      v5 = _InterlockedCompareExchange64(*(volatile signed __int64 **)(a1 + 1312), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1312) + 8LL), 0LL, 0LL) <= v5 )
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 1312) + 16LL), 0, 0);
        if ( a2 >= v6 )
        {
          _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 1312) + 20LL), v6);
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 1312LL) + 64LL), 0xFFFFFFBF);
          sub_1400ABD2C(a1 + 792, v6);
          v7 = *(_QWORD *)(a1 + 784);
          if ( v7 )
            sub_1400B6010(v7);
        }
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
