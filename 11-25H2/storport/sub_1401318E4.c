/*
 * XREFs of sub_1401318E4 @ 0x1401318E4
 * Callers:
 *     sub_140131E30 @ 0x140131E30 (sub_140131E30.c)
 * Callees:
 *     sub_140131AB4 @ 0x140131AB4 (sub_140131AB4.c)
 *     sub_140131B44 @ 0x140131B44 (sub_140131B44.c)
 *     sub_140131F2C @ 0x140131F2C (sub_140131F2C.c)
 */

char __fastcall sub_1401318E4(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  int v4; // ebp
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r11
  __int64 v9; // rax

  v3 = 0;
  v4 = a3;
  if ( a1 )
  {
    LOBYTE(a3) = 1;
    v7 = sub_140131B44(a2, *(unsigned __int16 *)(a1 + 4), a3);
    if ( v4 <= (int)a2 || *(_QWORD *)(a1 + 24) / 1024LL < v7 )
    {
      if ( v8 >= qword_140168500 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
        *(_QWORD *)(a1 + 40) = KeQueryUnbiasedInterruptTime();
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
        _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
      }
    }
    else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 12), 1u) )
    {
      return 1;
    }
    else
    {
      v9 = sub_140131AB4(a1);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 16) = 1;
        sub_140131F2C(a1, v9);
        v3 = 1;
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 224));
      }
    }
  }
  return v3;
}
