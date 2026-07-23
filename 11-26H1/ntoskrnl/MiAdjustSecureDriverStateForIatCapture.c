/*
 * XREFs of MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3E5DC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     VslExemptSecurePteRange @ 0x1404D76E0 (VslExemptSecurePteRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiAdjustSecureDriverStateForIatCapture(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _DWORD *v4; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // r12
  __int64 v12; // rdx
  __int64 *ProcessorFlushList; // rbx
  unsigned __int64 PteShadow; // rsi
  __int64 v15; // rsi
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 48);
  v4 = (_DWORD *)(a1 + 64);
  v17 = 0LL;
  if ( a2 )
  {
    *(_QWORD *)&stru_140E2D2D0.AbWaitEntryCount = v3 + (unsigned int)*v4;
    stru_140E2D2D0.MutantListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 48);
  }
  LOBYTE(a3) = a2 != 0;
  VslExemptSecurePteRange(v3, (unsigned int)*v4, a3);
  v7 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *v4 >> 12;
  v9 = 0LL;
  v10 = v7 + 8LL * ((unsigned int)v8 + ((*v4 & 0xFFF) != 0));
  v18 = v10;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, v6);
  }
  MiLockWorkingSetSharedAtDpc((__int64)&unk_140E36F80);
  if ( a2 )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList(
      (__int64)ProcessorFlushList,
      (__int64)&unk_140E36F80,
      *((_DWORD *)ProcessorFlushList + 3),
      0,
      1);
  }
  else
  {
    ProcessorFlushList = 0LL;
  }
  while ( v7 < v10 )
  {
    if ( !v9 )
      goto LABEL_31;
    if ( (v7 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
        MiFlushTbList((__int64)ProcessorFlushList);
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v9);
LABEL_31:
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((signed __int64)&unk_140E36F80, v9, 0);
    }
    PteShadow = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v7, *(_QWORD *)v7);
    if ( (PteShadow & 1) != 0 )
    {
      v15 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
      if ( *(__int64 *)(48 * v15 - 0x220000000000LL + 40) < 0
        && (MiGetPagePrivilege((_QWORD *)(48 * v15 - 0x220000000000LL), 2LL, (unsigned __int64)&v17) & 1) != 0 )
      {
        if ( a2 )
        {
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v3, 1LL, 0);
        }
        else
        {
          v16 = KeSetPagePrivilege(v15, v3, (__int64)&v17, 0x200u);
          if ( v16 < 0 )
            KeBugCheckEx(0x1Au, 0x51510uLL, 48 * v15 - 0x220000000000LL, v16, 0LL);
        }
      }
    }
    v10 = v18;
    v7 += 8LL;
    v3 += 4096LL;
  }
  if ( ProcessorFlushList )
    MiFlushTbList((__int64)ProcessorFlushList);
  if ( v9 )
    MiUnlockPageTableInternal((__int64)&unk_140E36F80, v9);
  if ( ProcessorFlushList )
    MiReleaseProcessorFlushList();
  LOBYTE(v12) = CurrentIrql;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v12);
  if ( !a2 )
  {
    *(_OWORD *)&stru_140E2D2D0.MutantListHead.Blink = 0LL;
    VslExemptSecurePteRange(0LL, 0LL, 0LL);
  }
}
