/*
 * XREFs of ViFlushZeroMapRegisterBaseWcbs @ 0x140644D1C
 * Callers:
 *     VfPutDmaAdapter @ 0x140C2B6A0 (VfPutDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C28D8C (SUBTRACT_MAP_REGISTERS.c)
 */

void __fastcall ViFlushZeroMapRegisterBaseWcbs(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax

  v1 = (KSPIN_LOCK *)(a1 + 176);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v4 = *(_QWORD **)(a1 + 160);
  while ( 1 )
  {
    v5 = v4;
    if ( v4 == (_QWORD *)(a1 + 160) )
      break;
    v6 = v4 - 9;
    v4 = (_QWORD *)*v4;
    if ( !v6[11] && !v6[12] && *((_DWORD *)v6 + 13) == 3 )
    {
      if ( (_QWORD *)v4[1] != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v4;
      v4[1] = v7;
      SUBTRACT_MAP_REGISTERS(a1, *((unsigned int *)v6 + 12));
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v6);
      break;
    }
  }
  KeReleaseSpinLock(v1, v3);
}
