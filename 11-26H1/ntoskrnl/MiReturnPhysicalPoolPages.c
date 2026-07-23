/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x140520550
 * Callers:
 *     MiFreeNonPagedPoolPages @ 0x140365080 (MiFreeNonPagedPoolPages.c)
 *     MiReturnExcessPoolCommit @ 0x140367634 (MiReturnExcessPoolCommit.c)
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiReturnPoolCharges @ 0x14036EFB8 (MiReturnPoolCharges.c)
 *     MiAppendPageChain @ 0x14044F110 (MiAppendPageChain.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiReturnPhysicalPoolPages(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  BOOL v4; // r15d
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 DemandZeroPte; // rdi
  ULONG_PTR v10; // r13
  unsigned __int8 CurrentIrql; // r14
  __int64 *v12; // rsi
  __int64 v13; // r15
  unsigned __int64 v14; // rcx
  ULONG_PTR v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rdi
  volatile LONG *v21; // rbx
  KIRQL v22; // si
  __int64 v23; // [rsp+20h] [rbp-60h]
  __int128 v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h]
  __int128 v26; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF
  BOOL v31; // [rsp+D0h] [rbp+50h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp+58h]

  v30 = a2;
  v29 = 0LL;
  v3 = *(_QWORD *)(a2 + 16);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( v3 )
  {
    LOBYTE(v4) = 0;
    v31 = 0;
    if ( a1 )
    {
      v4 = MiGetSystemRegionType(a1) == 14;
      v31 = v4;
    }
    v24 = 0LL;
    v25 = 0LL;
    v5 = 0xFFFFFFFFLL;
    v23 = 0LL;
    v6 = 0LL;
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v10 = 0LL;
    BugCheckParameter2 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 2;
      LOBYTE(v8) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v8, v7);
    }
    v12 = MiUnlinkPageChainHead(a2);
    if ( v12 )
    {
      v13 = v30;
      while ( 1 )
      {
        LODWORD(v30) = 0;
        BugCheckParameter2 = (__int64)(v12 + 0x44000000000LL) / 48;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 6, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v30);
          while ( v12[3] < 0 );
        }
        if ( (unsigned __int16)*((_DWORD *)v12 + 8) == 1 )
        {
          *((_DWORD *)v12 + 8) &= 0xFFFF0000;
          if ( (*((_BYTE *)v12 + 35) & 0x10) == 0 )
          {
            v14 = v12[1] << 25 >> 16;
            if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
            {
LABEL_20:
              ++v6;
              goto LABEL_21;
            }
            ++v10;
          }
        }
        else if ( (*((_BYTE *)v12 + 35) & 0x10) == 0 )
        {
          goto LABEL_20;
        }
LABEL_21:
        v15 = BugCheckParameter2;
        v12[3] &= 0xC000000000000000uLL;
        if ( (*((_BYTE *)v12 + 35) & 0x10) != 0 )
        {
          *((_DWORD *)v12 + 8) = v12[4] & 0xFFF8FFFF | 0x50000;
          v12[1] = -8LL;
          v12[2] = DemandZeroPte;
          v16 = MiPageToNode(v15);
          if ( (_DWORD)v5 == -1 )
            v5 = v16;
          MiInsertPageChainHead((__int64 *)&v24, v12);
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(v15);
        }
        _InterlockedAnd64(v12 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (++v23 & 0x1F8) == 0 && *(_QWORD *)(v13 + 16) && CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          v18 = KeGetCurrentIrql();
          if ( (_BYTE)v18 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v17) = 2;
            KiRaiseIrqlProcessIrqlFlags(v18, v17);
          }
        }
        v12 = MiUnlinkPageChainHead(v13);
        if ( !v12 )
        {
          LOBYTE(v4) = v31;
          BugCheckParameter2 = v10;
          break;
        }
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v25 )
    {
      v19 = qword_140E2D838;
      v20 = 384 * v5;
      v21 = (volatile LONG *)(384 * v5 + qword_140E2D838 + 72);
      if ( CurrentIrql == 2 )
      {
        v22 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v21);
      }
      else
      {
        v22 = ExAcquireSpinLockExclusive(v21);
      }
      MiAppendPageChain(v20 + v19 + 80, &v24);
      if ( v22 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v21);
      else
        ExReleaseSpinLockExclusive(v21, v22);
      v10 = BugCheckParameter2;
    }
    if ( v6 )
    {
      *(_QWORD *)&v26 = v6;
      *((_QWORD *)&v27 + 1) = v6;
      MiReturnPoolCharges(&v26, 0, v4);
    }
    if ( v10 )
    {
      *(_QWORD *)&v26 = v10;
      *((_QWORD *)&v27 + 1) = v10;
      MiReturnPoolCharges(&v26, 2, v4);
    }
  }
}
