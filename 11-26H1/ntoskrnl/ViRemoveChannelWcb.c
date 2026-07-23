/*
 * XREFs of ViRemoveChannelWcb @ 0x140644E44
 * Callers:
 *     VfCancelAdapterChannel @ 0x140C29F90 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140C2A440 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140C2A790 (VfFreeMapRegisters.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r14
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // al
  __int64 i; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  v6 = 0;
  if ( a2 && a3 )
    return 0LL;
  v8 = (KSPIN_LOCK *)(a1 + 176);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  for ( i = *(_QWORD *)(a1 + 160); ; i = *(_QWORD *)(v11 + 72) )
  {
    v11 = i - 72;
    if ( a1 == v11 - 88 )
      break;
    if ( a2 && (*(_QWORD *)(v11 + 96) == a2 || *(_QWORD *)(v11 + 88) == a2)
      || a3 && *(_QWORD *)(v11 + 40) == a3
      || *(_DWORD *)(v11 + 52) < 2u )
    {
      v12 = *(_QWORD *)(v11 + 72);
      if ( *(_QWORD *)(v12 + 8) != v11 + 72 || (v13 = *(_QWORD **)(v11 + 80), *v13 != v11 + 72) )
        __fastfail(3u);
      *v13 = v12;
      v6 = 1;
      *(_QWORD *)(v12 + 8) = v13;
      break;
    }
  }
  KeReleaseSpinLock(v8, v9);
  if ( v6 != 1 )
    return 0LL;
  return v11;
}
