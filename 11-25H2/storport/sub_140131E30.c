/*
 * XREFs of sub_140131E30 @ 0x140131E30
 * Callers:
 *     sub_14005CFC0 @ 0x14005CFC0 (sub_14005CFC0.c)
 * Callees:
 *     sub_1401317F8 @ 0x1401317F8 (sub_1401317F8.c)
 *     sub_1401318E4 @ 0x1401318E4 (sub_1401318E4.c)
 *     sub_140131AB4 @ 0x140131AB4 (sub_140131AB4.c)
 *     sub_140131F2C @ 0x140131F2C (sub_140131F2C.c)
 */

void __fastcall sub_140131E30(__int64 a1, unsigned int a2)
{
  ULONGLONG UnbiasedInterruptTime; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // edi
  __int64 v7; // rax

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 && (*(_DWORD *)(a1 + 12) & 2) == 0 )
    {
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
      v5 = *(_DWORD *)(a1 + 8);
      v6 = *(_DWORD *)(a1 + 60);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 24), a2);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 32), a2);
      if ( !sub_1401318E4(a1, v5, v6)
        && !sub_1401317F8(a1, v5, UnbiasedInterruptTime)
        && UnbiasedInterruptTime - *(_QWORD *)(a1 + 168) >= 0x165A0BC00LL )
      {
        v7 = sub_140131AB4(a1);
        if ( v7 )
        {
          *(_DWORD *)(v7 + 16) = 6;
          sub_140131F2C(a1, v7);
        }
      }
    }
  }
}
