/*
 * XREFs of sub_1401317F8 @ 0x1401317F8
 * Callers:
 *     sub_140131E30 @ 0x140131E30 (sub_140131E30.c)
 * Callees:
 *     sub_140131AB4 @ 0x140131AB4 (sub_140131AB4.c)
 *     sub_140131B44 @ 0x140131B44 (sub_140131B44.c)
 *     sub_140131F2C @ 0x140131F2C (sub_140131F2C.c)
 */

char __fastcall sub_1401317F8(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  unsigned __int64 v5; // r8
  int v6; // r11d
  __int64 v7; // rax

  v3 = 0;
  if ( a1 && a3 - *(_QWORD *)(a1 + 48) >= (unsigned __int64)qword_1401684F8 )
  {
    v5 = sub_140131B44(a2, *(unsigned __int16 *)(a1 + 4), 0LL);
    if ( v6 <= 1 || *(_QWORD *)(a1 + 32) / 1024LL > v5 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
      *(_QWORD *)(a1 + 48) = KeQueryUnbiasedInterruptTime();
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
      _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
    }
    else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 12), 1u) )
    {
      return 1;
    }
    else
    {
      v7 = sub_140131AB4(a1);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 16) = 2;
        sub_140131F2C(a1, v7);
        v3 = 1;
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 228));
      }
    }
  }
  return v3;
}
