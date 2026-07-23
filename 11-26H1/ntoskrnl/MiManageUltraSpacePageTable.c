/*
 * XREFs of MiManageUltraSpacePageTable @ 0x14048EB9C
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiReuseUltraPageTable @ 0x14029ECD4 (MiReuseUltraPageTable.c)
 *     MiDeleteUltraMapContext @ 0x14045E5A0 (MiDeleteUltraMapContext.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiSetPfnBlink @ 0x1402AA140 (MiSetPfnBlink.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiManageUltraSpacePageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // esi
  __int64 v4; // rbx
  __int64 *v5; // rdi
  volatile LONG *v6; // rcx
  __int64 v7; // r9
  int v8; // r15d
  __int64 v9; // r8
  unsigned int v10; // r14d
  unsigned int i; // ebp
  unsigned __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  volatile LONG *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdi
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+20h] [rbp-58h]
  KIRQL OldIrql; // [rsp+88h] [rbp+10h]
  int v39; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v35 = *(_QWORD *)(384 * ((a2 >> 9) & 0x3F) + qword_140E2D838 + 376);
  v4 = v35 + 712;
  v5 = (__int64 *)(v35 + 840);
  v39 = *(_DWORD *)(*(_QWORD *)&stru_140E37F48.WaitRegister.Flags + 4LL);
  v6 = (volatile LONG *)(v35 + 872);
  if ( KeGetCurrentIrql() == 2 )
  {
    OldIrql = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v6);
  }
  else
  {
    OldIrql = ExAcquireSpinLockExclusive(v6);
  }
  _InterlockedOr(v34, 0);
  v8 = KiTbFlushTimeStamp;
  v9 = 0x3FFFFFFFFFLL;
  v10 = KiTbFlushTimeStamp & 3;
  for ( i = 0; i < 4; ++i )
  {
    v12 = *(_QWORD *)(v4 + 16);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v4 + 24);
      if ( (unsigned int)(v8 - v13) <= 2 && ((v13 & 1) != 0 || (unsigned int)(v8 - v13) < 2) )
      {
        if ( v39 && !v3 && v12 >= 8 )
        {
          KeFlushTb((_KPROCESS *)2, (volatile _KAFFINITY_EX *)1, 0x3FFFFFFFFFuLL);
          --i;
          v3 = 1;
          v4 -= 32LL;
          v9 = 0x3FFFFFFFFFLL;
        }
      }
      else
      {
        v14 = v5[1];
        if ( v14 == 0x3FFFFFFFFFLL )
        {
          v5[2] = *(_QWORD *)(v4 + 16);
          *v5 = *(_QWORD *)v4;
          v5[1] = *(_QWORD *)(v4 + 8);
        }
        else
        {
          v15 = *(_QWORD *)v4;
          *(_QWORD *)(48 * v14 - 0x220000000000LL) = *(_QWORD *)v4 ^ (*(_QWORD *)v4 ^ *(_QWORD *)(48 * v14
                                                                                                - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
          MiSetPfnBlink(48 * v15 - 0x220000000000LL, v14, 0);
          v9 = 0x3FFFFFFFFFLL;
          v5[1] = *(_QWORD *)(v4 + 8);
          v5[2] += *(_QWORD *)(v4 + 16);
        }
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_QWORD *)v4 = 0x3FFFFFFFFFLL;
        *(_QWORD *)(v4 + 8) = 0x3FFFFFFFFFLL;
      }
    }
    v4 += 32LL;
  }
  v16 = 0LL;
  v17 = a1;
  v18 = v35;
  if ( !a3 )
  {
    if ( !v5[2] )
    {
      if ( (HvlEnlightenments & 4) != 0
        && ((HvlEnlightenments & 2) != 0
         || (HvlEnlightenments & 0x800000) != 0 && !KiFlushPcid
         || (_DWORD)KeNumberProcessors_0 != 1) )
      {
        LOBYTE(v7) = 1;
        LOBYTE(v9) = 1;
        KiFlushAddressSpaceTb(0LL, 0LL, v9, v7);
      }
      else
      {
        KxFlushEntireTb(1LL, 0x2AAAAAAAAAAAAAABLL, 0x3FFFFFFFFFLL);
      }
      if ( ExTbFlushActive )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v19) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v19, 15LL);
        }
        guard_dispatch_icall_no_overrides((_ULARGE_INTEGER)ExSaPageGroupDescriptorArrayLock.Timer.DueTime.QuadPart, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      goto LABEL_35;
    }
    goto LABEL_41;
  }
  if ( (a3 & 2) == 0 )
  {
LABEL_41:
    v24 = v35 + 32LL * v10 + 712;
    if ( !*(_QWORD *)(v24 + 16) )
      *(_DWORD *)(v24 + 24) = v8;
    goto LABEL_43;
  }
  v24 = (__int64)v5;
LABEL_43:
  MiSimpleInsertPage(v24, (a1 + 0x220000000000LL) / 48, 2);
  a1 = 0LL;
  v17 = 0LL;
  if ( !a3 )
  {
    v25 = *v5;
    if ( *v5 != 0x3FFFFFFFFFLL )
    {
      MiSimpleUnlinkPageEx((__int64)v5, *v5);
      v17 = 48 * v25 - 0x220000000000LL;
      a1 = v17;
      MiSetPfnBlink(v17, 0LL, 0);
    }
  }
LABEL_35:
  v21 = 0LL;
  if ( (unsigned __int64)v5[2] > 0x100 && a3 )
  {
    v22 = *v5;
    v16 = v5[2];
    if ( v39 )
    {
      v23 = 48 * v22;
      v5[2] = 0LL;
      *v5 = 0x3FFFFFFFFFLL;
      v5[1] = 0x3FFFFFFFFFLL;
    }
    else
    {
      v16 -= 256LL;
      v26 = 256LL;
      do
      {
        v27 = v22;
        v28 = 6 * v22;
        v22 = *(_QWORD *)(48 * v22 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
        --v26;
      }
      while ( v26 );
      *(_QWORD *)(8 * v28 - 0x220000000000LL) = *(_QWORD *)(8 * v28 - 0x220000000000LL) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
      v5[1] = v27;
      v5[2] = 256LL;
      v23 = 48 * v22;
    }
    v21 = (_QWORD *)(v23 - 0x220000000000LL);
  }
  v29 = (volatile LONG *)(v18 + 872);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v29);
  else
    ExReleaseSpinLockExclusive(v29, OldIrql);
  if ( v21 )
  {
    while ( 1 )
    {
      v32 = *v21 & 0xFFFFFFFFFFLL;
      if ( (MiFlags & 0x80u) != 0LL
        && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero((__int64)(v21 + 0x44000000000LL) / 48);
      }
      if ( OldIrql == 2 )
        MiReleaseFreshPageAtDpc((__int64)v21, v30, v31);
      else
        MiReleaseFreshPage((__int64)v21, v30, v31);
      if ( v32 == 0x3FFFFFFFFFLL )
        break;
      v21 = (_QWORD *)(48 * v32 - 0x220000000000LL);
    }
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, v16);
    v17 = a1;
  }
  if ( v17 )
    return (v17 + 0x220000000000LL) / 48;
  else
    return -1LL;
}
