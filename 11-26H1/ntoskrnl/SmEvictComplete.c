/*
 * XREFs of SmEvictComplete @ 0x140468D14
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 */

void __fastcall SmEvictComplete(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // rsi
  volatile LONG *v7; // rdi
  KIRQL v8; // al
  KIRQL v9; // cl
  unsigned int v10; // ebp
  _BYTE *v11; // r14
  __int64 v12; // rcx
  char v13; // dl
  KIRQL v14; // [rsp+60h] [rbp+18h]

  v3 = 0;
  v4 = *a2;
  v5 = a3;
  v6 = *(_QWORD *)(**(_QWORD **)(a1 + 2208) + 8LL * *(unsigned int *)(**(_QWORD **)(a1 + 2208) + 1300LL) + 22304);
  v7 = (volatile LONG *)(v6 + 200);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 200));
  v14 = v8;
  v9 = v8;
  v10 = v5;
  if ( (_DWORD)v5 )
  {
    v11 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 80) + 16LL) + ((unsigned __int64)v4 >> 3));
    v12 = v4 & 7;
    if ( (unsigned int)(v12 + v5) > 8 )
    {
      if ( (v4 & 7) != 0 )
      {
        v10 = v12 + v5 - 8;
        *v11++ &= byte_1400327C0[v12];
      }
      if ( v10 > 8 )
      {
        RtlSetVolatileMemory(v11, 0, (unsigned __int64)v10 >> 3);
        v11 += (unsigned __int64)v10 >> 3;
        v10 &= 7u;
        v7 = (volatile LONG *)(v6 + 200);
      }
      v9 = v14;
      if ( v10 )
        *v11 &= byte_140018470[v10];
    }
    else
    {
      v13 = byte_1400327C0[v5] << v12;
      v9 = v8;
      *v11 &= ~v13;
    }
  }
  if ( *(_DWORD *)(v6 + 88) > v4 )
    *(_DWORD *)(v6 + 88) = v4;
  if ( !*(_DWORD *)(v6 + 12) && (*(_BYTE *)(v6 + 174) & 1) != 0 )
    v3 = 1;
  *(_DWORD *)(v6 + 12) += v5;
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, v9);
  if ( v3 )
    KeSetEvent((PRKEVENT)(*(_QWORD *)(v6 + 224) + 1008LL), 0, 0);
}
