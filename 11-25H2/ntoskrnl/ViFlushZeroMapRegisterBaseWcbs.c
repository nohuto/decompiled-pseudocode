/*
 * XREFs of ViFlushZeroMapRegisterBaseWcbs @ 0x140604D5C
 * Callers:
 *     VfPutDmaAdapter @ 0x140B776B0 (VfPutDmaAdapter.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
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
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v6);
      break;
    }
  }
  KeReleaseSpinLock(v1, v3);
}
