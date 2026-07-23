/*
 * XREFs of MiConfirmFaultClusterDescriptor @ 0x1402CEDB0
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiLockAndConfirmFaultClusterDescriptor @ 0x1403A14FC (MiLockAndConfirmFaultClusterDescriptor.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiIsPteDecommittedPage @ 0x140314040 (MiIsPteDecommittedPage.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiSetFaultClusterContextBlockEntryState @ 0x140467AA4 (MiSetFaultClusterContextBlockEntryState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_BOOL8 __fastcall MiConfirmFaultClusterDescriptor(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  int v8; // eax
  BOOL v9; // ecx
  __int64 v10; // r11
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  __int64 *v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 ProcessorFlushList; // rax
  __int64 *v22; // r15
  __int64 *v23; // r14
  char v24; // al
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  BOOL v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+8Ch] [rbp-74h]
  unsigned int v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+94h] [rbp-6Ch]
  bool v41; // [rsp+98h] [rbp-68h]
  __int16 v42; // [rsp+99h] [rbp-67h]
  char v43; // [rsp+9Bh] [rbp-65h]
  unsigned int v44; // [rsp+9Ch] [rbp-64h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h] BYREF
  char v47[128]; // [rsp+B0h] [rbp-50h] BYREF

  v43 = 0;
  memset_0(v47, 0, 0x78uLL);
  v6 = *(_QWORD *)(a1 + 56);
  v7 = ((*a3 >> 6) & 0x3F) - (*a3 & 0x3F);
  if ( !v7 )
    return 1LL;
  v38 = 16;
  v40 = 1;
  v39 = 2;
  v36 = v6;
  v41 = (*(_DWORD *)(v6 + 184) & 0x40) != 0;
  if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v8 = v39;
    v9 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
  }
  else
  {
    v8 = 11;
    v9 = 0;
  }
  v37 = v9;
  v39 = v8 & 0xFFFFFFDB;
  v10 = 0LL;
  v11 = 0LL;
  v12 = *a3;
  v42 = 0;
  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v13 = *(unsigned __int16 *)(v6 + 174);
  v14 = ((v12 & 0x3F) + (v12 >> 16)) << 16;
  v27 = 0LL;
  v15 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v13);
  v29 = 0LL;
  v28 = 0;
  v31 = v15;
  v16 = (__int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v17 = (v7 << 7) + ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v33 = v17;
  while ( 1 )
  {
    v18 = *v16;
    if ( (*v16 & 1) != 0 )
    {
      if ( (v18 & 0x20) == 0 )
      {
        if ( (unsigned __int8)((MiGetWsleContents(v13, v14) & 0xF) - 6) <= 1u )
        {
          MiInsertTbFlushEntry(&v36, v14, 1LL);
          v10 = v27;
          v29 = ++v11;
        }
        v15 = v31;
      }
    }
    else
    {
      if ( !v18 || (unsigned int)MiIsPteDecommittedPage(*v16) )
        goto LABEL_17;
      if ( qword_140E2D8C0 )
      {
        v24 = v18;
        v13 = qword_140E2D8C8 & v18;
        v18 &= ~0x10uLL;
        if ( (v24 & 0x10) == 0 )
          v18 = v13;
      }
      if ( (v18 & 0x400) != 0 || (v18 & 0x800) != 0 || (v18 & 8) != 0 )
        v28 = 1;
      else
LABEL_17:
        v29 = ++v11;
    }
    ++v16;
    v14 += 4096LL;
    if ( !(_WORD)v14 )
    {
      v20 = v44;
      if ( v44 )
      {
        if ( v44 <= 2 )
        {
          if ( *(_QWORD *)(v15 + 18400) <= 0x4E20uLL || (*(_QWORD *)(v15 + 18400) & 0xFFFFFFFFFFFFFFFEuLL) <= 0x4E20 )
          {
            v26 = 10000LL;
          }
          else
          {
            if ( *(_QWORD *)(v15 + 18400) <= 0x4E20uLL )
              v25 = 20000LL;
            else
              v25 = *(_QWORD *)(v15 + 18400);
            v26 = v25 >> 1;
          }
          if ( (unsigned int)MiSufficientAvailablePages(v15, v26) )
          {
LABEL_26:
            v39 &= 0xFFFFFFDB;
            v42 = 0;
            v44 = 0;
            v45 = 0LL;
            goto LABEL_10;
          }
          v20 = v44;
          v10 = v27;
        }
        if ( !v10 )
        {
          ProcessorFlushList = MiGetProcessorFlushList(v13, v18);
          v27 = ProcessorFlushList + 4136;
          MiInitializeTbFlushList(ProcessorFlushList + 4136, v6, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
          v20 = v44;
        }
        v22 = (__int64 *)&v47[8 * v20 - 8];
        v23 = &v46;
        if ( &v46 < v22 )
        {
          do
            MiInsertTbFlushEntry(v27, *v23++, 1LL);
          while ( v23 < v22 );
          v17 = v33;
        }
        v11 = v29;
        goto LABEL_26;
      }
    }
LABEL_10:
    v15 = v31;
    if ( (unsigned __int64)v16 > v17 )
      break;
    v10 = v27;
  }
  if ( v27 )
  {
    if ( *(_WORD *)(a1 + 66) )
      MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 56));
    MiFreeWsleList(v6, v18, v27, 0LL);
    MiReleaseProcessorFlushList();
  }
  if ( v11 )
  {
    *(_QWORD *)(a2 + 40) = ((v11 << 23) + (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFF800000uLL)) ^ (*(_QWORD *)(a2 + 40) ^ ((v11 << 23) + (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFF800000uLL))) & 0xFFFFF800007FFFFFuLL;
    return 0LL;
  }
  else
  {
    *a3 = (*a3 >> 6) ^ (*a3 ^ (*a3 >> 6)) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (a4 & 1) == 0 )
      MiSetFaultClusterContextBlockEntryState(a2, 1LL);
    return v28 == 0;
  }
}
