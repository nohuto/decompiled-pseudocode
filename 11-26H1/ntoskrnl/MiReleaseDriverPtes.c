/*
 * XREFs of MiReleaseDriverPtes @ 0x140A85EA8
 * Callers:
 *     MmUnmapLockedRestartPages @ 0x14086AC10 (MmUnmapLockedRestartPages.c)
 *     MiReturnSystemImageAddress @ 0x140A85E84 (MiReturnSystemImageAddress.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiDecommitSystemPageTables @ 0x1402A3C08 (MiDecommitSystemPageTables.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetPdeAddress @ 0x140442F90 (MiGetPdeAddress.c)
 *     RtlAreBitsSet @ 0x14046FAA0 (RtlAreBitsSet.c)
 *     RtlAreBitsClear @ 0x140471FA0 (RtlAreBitsClear.c)
 *     MiLockDriverMappings @ 0x1404EDB88 (MiLockDriverMappings.c)
 *     MiUnlockDriverMappings @ 0x1404F35B4 (MiUnlockDriverMappings.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned __int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v6; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v8; // r15
  char *SystemArgument1; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // r12d
  ULONG v15; // ebx
  int v16; // ebp
  unsigned int v17; // ebp
  ULONG v18; // r15d
  unsigned __int64 v19; // rbx
  __int64 PteAddress; // rax
  __int64 v21; // rdx
  ULONG v22; // r8d
  int v23; // ebx
  unsigned __int64 NumberToClear; // [rsp+70h] [rbp+8h]
  int v25; // [rsp+80h] [rbp+18h]

  v6 = (__int64)(a1 << 25) >> 16;
  if ( (_WORD)a1 << 9 )
    KeBugCheckEx(0x1Au, 0x101AuLL, (__int64)(a1 << 25) >> 16, a2 << 12, 0LL);
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread, a2, a3, a4);
  SystemArgument1 = (char *)stru_140E2D2D0.SchedulerApc.SystemArgument1;
  if ( !stru_140E2D2D0.SchedulerApc.SystemArgument1 )
    goto LABEL_3;
  do
  {
    v10 = *((_QWORD *)SystemArgument1 + 1);
    if ( a1 >= v10 && a1 < v10 + 8LL * (unsigned int)(16 * *((_DWORD *)SystemArgument1 + 4)) )
      break;
    v8 = SystemArgument1;
    SystemArgument1 = *(char **)SystemArgument1;
  }
  while ( SystemArgument1 );
  if ( !SystemArgument1 )
LABEL_3:
    KeBugCheckEx(0x1Au, 0x1017uLL, v6, a2 << 12, 0LL);
  v11 = ((__int64)(a1 - *((_QWORD *)SystemArgument1 + 1)) >> 3) / 16;
  v25 = v11;
  NumberToClear = (unsigned __int64)(a2 + 15) >> 4;
  if ( !RtlAreBitsSet((PRTL_BITMAP)SystemArgument1 + 1, v11, NumberToClear) )
    KeBugCheckEx(0x1Au, 0x1018uLL, v6, a2 << 12, 0LL);
  v12 = *((_DWORD *)SystemArgument1 + 9);
  v13 = (__int64)(*((_QWORD *)SystemArgument1 + 1) << 25) >> 16;
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 2) != 0 )
    {
LABEL_17:
      MiUnlockDriverMappings((__int64)CurrentThread);
      return;
    }
    RtlClearBits((PRTL_BITMAP)SystemArgument1 + 1, v11, NumberToClear);
    if ( RtlNumberOfSetBits((PRTL_BITMAP)SystemArgument1 + 1) )
    {
      if ( *((_QWORD *)SystemArgument1 + 6) )
      {
        v14 = NumberToClear + v11;
        v15 = v11 & 0xFFFFFFE0;
        v16 = NumberToClear + v11 + 31;
        if ( !RtlAreBitsClear((PRTL_BITMAP)SystemArgument1 + 1, v15, 0x20u) )
          v15 = (v25 + 31) & 0xFFFFFFE0;
        if ( !RtlAreBitsClear((PRTL_BITMAP)SystemArgument1 + 1, ((v14 + 31) & 0xFFFFFFE0) - 32, 0x20u) )
          v16 = v14;
        v17 = v16 & 0xFFFFFFE0;
        v18 = v17 - v15;
        if ( v15 < v17 )
        {
          if ( RtlAreBitsClear((PRTL_BITMAP)SystemArgument1 + 1, v15, v18) )
          {
            v19 = v13 + (v15 << 16);
            MiGetPdeAddress(v19);
            PteAddress = MiGetPteAddress(*((_QWORD *)SystemArgument1 + 1));
            RtlClearBits((PRTL_BITMAP)(SystemArgument1 + 40), (v21 - PteAddress) >> 3, v22);
            MiDecommitSystemPageTables(v19, v19 + (v18 << 16), 11);
          }
        }
      }
      goto LABEL_17;
    }
  }
  v23 = *((_DWORD *)SystemArgument1 + 4);
  if ( v8 )
    *v8 = *(_QWORD *)SystemArgument1;
  else
    stru_140E2D2D0.SchedulerApc.SystemArgument1 = *(PVOID *)SystemArgument1;
  MiUnlockDriverMappings((__int64)CurrentThread);
  MiReturnSystemVa(v13, v13 + (unsigned int)(v23 << 16));
  ExFreePoolWithTag(SystemArgument1, 0);
}
