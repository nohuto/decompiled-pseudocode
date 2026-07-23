/*
 * XREFs of MiBuildPhysicalPageFreeChain @ 0x140705918
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MI_FLUSH_ENTIRE_TB @ 0x140251974 (MI_FLUSH_ENTIRE_TB.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140277040 (ExAcquireAutoExpandPushLockShared.c)
 *     MiFlushTbNowToAvoidOverflow @ 0x1402A2BB8 (MiFlushTbNowToAvoidOverflow.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiDecrementAweMapCount @ 0x1404799BC (MiDecrementAweMapCount.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x14050D428 (MiLockAweVadsShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     MiLockAwePagesExclusive @ 0x140706A18 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1407078BC (MiUnlockAwePagesExclusive.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 */

__int64 __fastcall MiBuildPhysicalPageFreeChain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r15
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v7; // rax
  size_t v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 *ProcessorFlushList; // rbx
  int v13; // edx
  unsigned __int8 CurrentIrql; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // edx
  unsigned __int8 v18; // cl
  unsigned int v19; // r15d
  BOOL v20; // edx
  __int64 result; // rax
  ULONG_PTR v22; // [rsp+30h] [rbp-68h]
  ULONG_PTR v23; // [rsp+38h] [rbp-60h]
  unsigned __int64 v24; // [rsp+40h] [rbp-58h]
  size_t v25; // [rsp+48h] [rbp-50h]
  BOOL v26; // [rsp+A0h] [rbp+8h]
  __int64 v28; // [rsp+B8h] [rbp+20h]

  v4 = (__int64 *)(a2 + 48);
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD *)(a2 + 48);
  v8 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v25 = v8;
  v9 = a2 + 48 + 8 * v8;
  v24 = v9;
  while ( v7 != (_QWORD *)v9 )
  {
    if ( !*v7 )
    {
      qsort(v4, v8, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
      break;
    }
    ++v7;
  }
  v10 = v4;
  v26 = 0;
  LODWORD(v11) = 0;
  v28 = 0LL;
  ProcessorFlushList = 0LL;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    v23 = 0LL;
    v22 = MiLockAweVadsShared((__int64)CurrentThread);
    MiLockAwePagesExclusive(a1, CurrentThread);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v22 = 0LL;
    v23 = ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v13);
  }
  while ( (unsigned __int64)v4 < v24 )
  {
    v15 = *v4;
    v16 = MiDecrementAweMapCount(a1, *v4, 1u, (unsigned __int64 **)a3);
    if ( v16 == -1 )
    {
      LODWORD(v11) = v28;
      v19 = -1073741800;
      goto LABEL_37;
    }
    if ( v16 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
        goto LABEL_22;
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
          *((_DWORD *)ProcessorFlushList + 3),
          8,
          1);
      }
      MiUnmapLegacyAwePage(a1, v15, ProcessorFlushList, a3);
      v26 = MiFlushTbNowToAvoidOverflow((__int64)ProcessorFlushList);
    }
    if ( v15 != -1 )
      *v10++ = v15;
LABEL_22:
    v11 = ++v28;
    if ( v26 || (v11 & 0x3F) == 0 && v11 != v25 && KeShouldYieldProcessor() )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v26 = 0;
      v18 = KeGetCurrentIrql();
      if ( v18 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = 2;
        KiRaiseIrqlProcessIrqlFlags(v18, v17);
      }
    }
    ++v4;
  }
  v19 = 0;
LABEL_37:
  if ( *(_BYTE *)(a3 + 20) )
  {
    v20 = (*(_DWORD *)(a1 + 8) & 1) == 0;
    MI_FLUSH_ENTIRE_TB((unsigned int)(v20 + 1), v20);
    if ( ProcessorFlushList )
    {
      *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
      *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
      *((_DWORD *)ProcessorFlushList + 7) = 0;
      ProcessorFlushList[4] = 0LL;
      goto LABEL_42;
    }
  }
  else if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
LABEL_42:
    MiReleaseProcessorFlushList();
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v22 )
  {
    MiUnlockAwePagesExclusive(a1, CurrentThread);
    MiUnlockAweVadsShared((__int64)CurrentThread, v22);
  }
  else
  {
    MiUnlockAweVadsShared((__int64)CurrentThread, v23);
  }
  *(_DWORD *)(a2 + 44) = v11;
  result = v19;
  *(_DWORD *)(a2 + 40) = ((__int64)v10 - a2 - 48) >> 3;
  return result;
}
