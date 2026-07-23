/*
 * XREFs of ViCheckAdapterBuffers @ 0x140C2C464
 * Callers:
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C2B4C0 (VfMapTransferEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViCheckTag @ 0x140C2C728 (ViCheckTag.c)
 */

void __fastcall ViCheckAdapterBuffers(__int64 a1)
{
  __int16 v1; // bx
  _QWORD *v2; // rdi
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // bp
  __int64 v5; // r14
  __int64 v6; // rdx
  __int16 v7; // r9
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax

  v1 = 0;
  v2 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v2 != v2 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 128);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
    v5 = *v2 - 48LL;
    if ( v2 != (_QWORD *)*v2 )
    {
      do
      {
        v6 = *(unsigned int *)(v5 + 8);
        v7 = v1 | 1;
        v8 = *(_QWORD *)(v5 + 24) - *(_QWORD *)(v5 + 16);
        if ( v8 < 8 )
          v7 = v1;
        v1 = v7 | 2;
        if ( v6 + v8 + 8 > *(unsigned int *)(v5 + 4) )
          v1 = v7;
        ViCheckTag(*(_QWORD *)(v5 + 24), v6);
        v9 = *(_QWORD **)(v5 + 48);
        v5 = (__int64)(v9 - 6);
      }
      while ( v2 != v9 );
    }
    KeReleaseSpinLock(v3, v4);
  }
}
