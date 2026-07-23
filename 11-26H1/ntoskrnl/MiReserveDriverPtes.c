/*
 * XREFs of MiReserveDriverPtes @ 0x140B0C074
 * Callers:
 *     MmMapLockedRestartPages @ 0x14086AB50 (MmMapLockedRestartPages.c)
 *     MiSelectSystemImageAddress @ 0x140B0C034 (MiSelectSystemImageAddress.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x1402A428C (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiLockDriverMappings @ 0x1404EDB88 (MiLockDriverMappings.c)
 *     MiUnlockDriverMappings @ 0x1404F35B4 (MiUnlockDriverMappings.c)
 *     MiReserveExistingDriverPtes @ 0x140B0C144 (MiReserveExistingDriverPtes.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveDriverPtes(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbx
  char v11; // bl
  unsigned __int64 v12; // r13
  __int64 v13; // r12
  int CurrentProcessorColor; // eax
  char *PoolMm; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 PteAddress; // rax
  _RTL_BITMAP *v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  ULONG v27; // r8d

  if ( (a2 & 0xFFFFFFFFFFDFFFFFuLL) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (unsigned int)(a1 + 15) >> 4;
    v7 = 0LL;
    MiLockDriverMappings((__int64)CurrentThread, a2, a3, a4);
    if ( !a2 )
    {
      v9 = MiReserveExistingDriverPtes(v6);
      if ( v9 )
      {
LABEL_4:
        MiUnlockDriverMappings((__int64)CurrentThread);
        return v9;
      }
      v7 = (unsigned __int8)ExGenRandom(1, v8);
    }
    v11 = MiFlags;
    v12 = (16 * (v6 + (_DWORD)v7) + 511) & 0xFFFFFE00;
    v13 = ((16 * (v6 + (_DWORD)v7) + 511) & 0xFFFFFE00) >> 9;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (char *)ExAllocatePoolMm(
                       (v11 & 0x30) != 0 ? 256LL : 64LL,
                       (((v12 >> 7) + 63) & 0xFFFFFFFFFFFFFFF8uLL) + ((v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
                       1883532621,
                       CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
    {
      v9 = 0LL;
      goto LABEL_4;
    }
    v16 = MiObtainSystemVa((unsigned int)v13, 0xBu);
    v17 = v16;
    if ( v16 )
    {
      PteAddress = MiGetPteAddress(v16);
      v19 = (_RTL_BITMAP *)(PoolMm + 16);
      v20 = PteAddress;
      *((_QWORD *)PoolMm + 3) = PoolMm + 56;
      *((_DWORD *)PoolMm + 4) = v12 >> 4;
      *((_DWORD *)PoolMm + 10) = ((((16 * (v6 + (_DWORD)v7) + 511) & 0xFFFFFE00) >> 9) + 7) & 0xFFFFFFF8;
      *((_QWORD *)PoolMm + 6) = &PoolMm[(((unsigned __int64)((16 * (v6 + (_DWORD)v7) + 511) & 0xFFFFFE00) >> 7) + 63) & 0xFFFFFFFFFFFFFFF8uLL];
      if ( a2 )
      {
        v7 = 0LL;
        RtlSetAllBits(v19);
        v21 = 1;
      }
      else
      {
        RtlSetBits(v19, v7, v6);
        v21 = 0;
      }
      *((_DWORD *)PoolMm + 9) = v21;
      v22 = v6 + v7;
      *((_QWORD *)PoolMm + 1) = v20;
      v23 = v20 + (v7 << 7);
      *((_DWORD *)PoolMm + 8) = v22;
      v24 = 128LL * v6;
      if ( (unsigned int)MiMakeZeroedPageTables(v23, (int)v23 + (int)v24 - 8, 1, 11) )
      {
        MiGetPteAddress(v23);
        MiGetPteAddress(v23 + v24 - 8);
        v25 = MiGetPteAddress(v20);
        RtlSetBits((PRTL_BITMAP)(PoolMm + 40), (v26 - v25) >> 3, v27);
        v9 = v23;
        *(_QWORD *)PoolMm = stru_140E2D2D0.SchedulerApc.SystemArgument1;
        stru_140E2D2D0.SchedulerApc.SystemArgument1 = PoolMm;
        goto LABEL_4;
      }
      MiReturnSystemVa(v17, (__int64)((v20 << 25) + (v12 << 28)) >> 16);
    }
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(PoolMm, 0);
  }
  return 0LL;
}
