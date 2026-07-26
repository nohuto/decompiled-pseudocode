/*
 * XREFs of EthFilterDprIndicateReceiveComplete @ 0x14007D320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall EthFilterDprIndicateReceiveComplete(_QWORD *a1)
{
  unsigned int Number; // r12d
  __int64 v3; // rsi
  KIRQL v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  if ( a1 )
  {
    v3 = a1[36];
    v4 = KfRaiseIrql(2u);
    v5 = (_QWORD *)(*(_QWORD *)(v3 + 32) + (KeGetPcr()->Prcb.Number << 12));
    ++*v5;
    _InterlockedOr(v13, 0);
    if ( *(_QWORD *)(v3 + 16) && *v5 <= 1uLL && *(struct _KTHREAD **)(v3 + 24) != KeGetCurrentThread() )
    {
      *v5 = 0LL;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 16));
      *v5 = 1LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 16));
    }
    v6 = *a1;
    v7 = a1;
    if ( !*a1 )
      goto LABEL_11;
    do
    {
      v8 = Number << 12;
      do
      {
        v9 = *(_QWORD *)(v6 + 720);
        v10 = *(_QWORD *)(v6 + 424);
        if ( *(_BYTE *)(v9 + v8) )
        {
          *(_BYTE *)(v9 + v8) = 0;
          (*(void (__fastcall **)(_QWORD))(v6 + 136))(*(_QWORD *)(v6 + 32));
        }
        v6 = v10;
      }
      while ( v10 );
LABEL_11:
      v11 = 0LL;
      if ( v7 != a1 + 1 )
        v11 = v7;
      v7 = v11;
      if ( v11 == a1 + 2 )
        v7 = a1 + 1;
      if ( v7 == a1 )
        v7 = a1 + 2;
      if ( !v7 )
        break;
      v6 = *v7;
    }
    while ( *v7 );
    v12 = KeGetPcr()->Prcb.Number << 12;
    --*(_QWORD *)(v12 + *(_QWORD *)(a1[36] + 32LL));
    if ( v4 != 2 )
      KeLowerIrql(v4);
  }
}
