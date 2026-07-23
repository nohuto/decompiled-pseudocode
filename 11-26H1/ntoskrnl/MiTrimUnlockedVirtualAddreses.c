/*
 * XREFs of MiTrimUnlockedVirtualAddreses @ 0x14035E7E0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140A06230 (NtUnlockVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiVadPagesTradable @ 0x14035E780 (MiVadPagesTradable.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiTrimUnlockedVirtualAddreses(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v5; // r15d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 ProcessorFlushList; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  ULONG_PTR v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v17; // rbp
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbp
  unsigned __int64 v22; // r15
  int i; // r11d
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  int v29; // r9d
  unsigned __int64 valid; // rax
  __int64 NextVad; // rax
  _KPROCESS *v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  ULONG_PTR v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  ULONG_PTR v43; // r8
  int v44; // [rsp+60h] [rbp+8h]
  unsigned __int64 v45; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0LL;
  v44 = 0;
  v8 = 0LL;
  *(_BYTE *)(a1 + 112) = MiLockWorkingSetShared(v3, a2, a3);
  while ( v6 <= *(_QWORD *)(a1 + 72) )
  {
    if ( (((unsigned __int8)(v6 >> 12) + 1) & 0xF) == 0 && (unsigned int)MiLockVirtualMemoryGoodCitizen(a1, 0LL) )
      MiLockWorkingSetShared(v3, ProcessorFlushList, v35);
    if ( v6 > v8 )
    {
      if ( v7 )
      {
        NextVad = MiGetNextVad(v7);
        goto LABEL_52;
      }
    }
    else if ( v7 )
    {
      goto LABEL_5;
    }
    NextVad = (__int64)MiLocateAddress(v6);
LABEL_52:
    v7 = NextVad;
    v44 = 0;
    if ( (*(_DWORD *)(NextVad + 48) & 0x1C) == 0x10 )
    {
      v44 = 1;
    }
    else if ( !MiVadPagesTradable(NextVad) )
    {
      break;
    }
    KernelWaitTime = *(unsigned int *)(v7 + 28);
    v8 = (KernelWaitTime | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12;
LABEL_5:
    v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v13 = *(_QWORD *)(a1 + 120);
    if ( v13 != v12 )
    {
      if ( v13 )
      {
        v43 = *(_QWORD *)(a1 + 152);
        if ( v43 )
        {
          if ( *(_DWORD *)(v43 + 28) )
            MiFreeWsleList(v3, ProcessorFlushList, v43, 0);
          MiReleaseProcessorFlushList(KernelWaitTime, ProcessorFlushList, v43);
          *(_QWORD *)(a1 + 152) = 0LL;
        }
        MiUnlockPageTableInternal(v3, *(_QWORD *)(a1 + 120));
      }
      valid = MiLockLowestValidPageTableEx(v3, v11, &v45, 0);
      *(_QWORD *)(a1 + 120) = valid;
      if ( valid != v12 )
      {
        MiUnlockPageTableInternal(v3, valid);
        *(_QWORD *)(a1 + 120) = 0LL;
        v5 = -1073741782;
        v6 = ((v12 << 25) + 0x10000000) >> 16 << 25 >> 16;
        continue;
      }
    }
    if ( (*(_QWORD *)v11 & 1) == 0 )
      goto LABEL_7;
    KernelWaitTime = 0xFFFFFFFFFFLL;
    v17 = 48 * ((*(_QWORD *)v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !v44 || !MiRotatedToFrameBuffer(v11) )
    {
      v18 = *(_QWORD *)(v17 + 8);
      if ( v18 > 0 && (*(_QWORD *)(v17 + 40) & 0x10000000000LL) == 0 )
        MiDemoteCombinedPte(v3, v11, v18 | 0x8000000000000000uLL);
      v19 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v32 = MiPteHasShadow();
        if ( v32 )
        {
          KernelWaitTime = v32[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v34 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v34 & 0x20) != 0 )
              v33 |= 0x20uLL;
            v19 = v33 | 0x42;
            if ( (v34 & 0x42) == 0 )
              v19 = v33;
          }
        }
      }
      ProcessorFlushList = HIBYTE(v19);
      LOBYTE(ProcessorFlushList) = ProcessorFlushList & 0xF;
      if ( (_BYTE)ProcessorFlushList != 8 )
      {
        if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
          MI_WSLE_LOG_ACCESS(v3, v11);
        if ( !*(_QWORD *)(a1 + 152) )
        {
          ProcessorFlushList = (__int64)MiGetProcessorFlushList();
          *(_QWORD *)(a1 + 152) = ProcessorFlushList + 4136;
          *(_DWORD *)(ProcessorFlushList + 4152) = 2;
          *(_DWORD *)(ProcessorFlushList + 4156) = 1;
          *(_QWORD *)(ProcessorFlushList + 4136) = v3;
          *(_BYTE *)(ProcessorFlushList + 4160) = (*(_DWORD *)(v3 + 184) & 0x40) != 0;
          if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v3 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            KernelWaitTime = (*(_DWORD *)(v3 + 184) & 0xF) == 0;
          }
          else
          {
            *(_DWORD *)(ProcessorFlushList + 4152) |= 9u;
            KernelWaitTime = 0LL;
          }
          *(_DWORD *)(ProcessorFlushList + 4152) &= 0xFFFFFFDB;
          *(_DWORD *)(ProcessorFlushList + 4144) = KernelWaitTime;
          *(_WORD *)(ProcessorFlushList + 4161) = 0;
          *(_DWORD *)(ProcessorFlushList + 4164) = 0;
          *(_QWORD *)(ProcessorFlushList + 4168) = 0LL;
          *(_QWORD *)(ProcessorFlushList + 4176) = 0LL;
        }
        v20 = *(_QWORD *)(a1 + 152);
        v21 = 1LL;
        v22 = v6;
        if ( *(_DWORD *)(v20 + 8) != 1 )
        {
          KernelWaitTime = *(unsigned int *)(v20 + 16);
          if ( (KernelWaitTime & 4) == 0 && v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            KernelWaitTime = (unsigned int)KernelWaitTime | 4;
            *(_DWORD *)(v20 + 16) = KernelWaitTime;
          }
        }
LABEL_31:
        for ( i = 0; ; i = 1 )
        {
          v24 = *(unsigned int *)(v20 + 28);
          if ( (_DWORD)v24 && (*(_DWORD *)(v20 + 16) & 2) == 0 )
          {
            v25 = v20 + 8LL * (unsigned int)(v24 - 1);
            v26 = *(_QWORD *)(v25 + 40);
            if ( (v26 & 0xC00) != 0
              || (v27 = *(_QWORD *)(v25 + 40) & 0x3FFLL,
                  KernelWaitTime = v26 & 0xFFFFFFFFFFFFF000uLL,
                  ProcessorFlushList = (v26 & 0xFFFFFFFFFFFFF000uLL) + ((v27 + 1) << 12),
                  ProcessorFlushList != v22)
              || (KernelWaitTime = v27 + v21, v27 + v21 <= v27) )
            {
              v28 = *(_QWORD *)(v20 + 8LL * (unsigned int)(v24 - 1) + 40);
              if ( (v28 & 0xC00) != 0 )
                goto LABEL_40;
            }
            else
            {
              if ( KernelWaitTime <= 0x3FF )
              {
                *(_QWORD *)(v20 + 32) += v21;
                KernelWaitTime = v26 + v21;
                *(_QWORD *)(v25 + 40) = (v26 + v21) ^ ((v26 + v21) ^ v26) & 0xFFFFFFFFFFFFFC00uLL;
                goto LABEL_73;
              }
              v28 = *(_QWORD *)(v20 + 8LL * (unsigned int)(v24 - 1) + 40);
            }
            KernelWaitTime = v28 & 0xFFFFFFFFFFFFF000uLL;
            ProcessorFlushList = v22 + (v21 << 12);
            if ( (v28 & 0xFFFFFFFFFFFFF000uLL) == ProcessorFlushList )
            {
              v40 = v28 & 0x3FF;
              KernelWaitTime = v40 + v21;
              if ( v40 + v21 <= 0x3FF && KernelWaitTime > v40 )
              {
                v41 = (unsigned int)(v24 - 1);
                v42 = *(_QWORD *)(v20 + 8 * v41 + 40);
                *(_QWORD *)(v20 + 32) += v21;
                ProcessorFlushList = v42 - (v21 << 12);
                KernelWaitTime = (ProcessorFlushList + v21) ^ (ProcessorFlushList ^ (ProcessorFlushList + v21)) & 0xFFFFFFFFFFFFFC00uLL;
                *(_QWORD *)(v20 + 8 * v41 + 40) = KernelWaitTime;
                goto LABEL_73;
              }
            }
          }
LABEL_40:
          if ( (_DWORD)v24 != *(_DWORD *)(v20 + 12) )
          {
            while ( v21 )
            {
              ProcessorFlushList = 1024LL;
              if ( (unsigned __int64)(v21 - 1) <= 0x3FF )
                ProcessorFlushList = v21;
              KernelWaitTime = v22 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)ProcessorFlushList - 1) & 0x3FF;
              *(_QWORD *)(v20 + 8 * v24 + 40) = KernelWaitTime;
              v29 = *(_DWORD *)(v20 + 28);
              *(_QWORD *)(v20 + 32) += ProcessorFlushList;
              v24 = (unsigned int)(v29 + 1);
              v22 += ProcessorFlushList << 12;
              *(_DWORD *)(v20 + 28) = v24;
              v21 -= ProcessorFlushList;
              if ( v21 && (_DWORD)v24 == *(_DWORD *)(v20 + 12) )
                goto LABEL_31;
            }
LABEL_73:
            v36 = *(_QWORD *)(a1 + 152);
            if ( *(_DWORD *)(v36 + 28) == *(_DWORD *)(v36 + 12) )
            {
              MiFreeWsleList(v3, ProcessorFlushList, v36, 0);
              MiReleaseProcessorFlushList(v38, v37, v39);
              *(_QWORD *)(a1 + 152) = 0LL;
            }
LABEL_7:
            v5 = -1073741782;
            break;
          }
          if ( i )
          {
            if ( !*(_BYTE *)(v20 + 25) )
              *(_BYTE *)(v20 + 25) = 1;
            goto LABEL_73;
          }
          if ( *(_BYTE *)(v20 + 25) )
            goto LABEL_73;
          qsort((void *)(v20 + 40), *(unsigned int *)(v20 + 28), 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(v20);
        }
      }
    }
    v6 += 4096LL;
  }
  v14 = *(_QWORD *)(a1 + 152);
  if ( v14 )
  {
    if ( *(_DWORD *)(v14 + 28) )
      MiFreeWsleList(v3, ProcessorFlushList, v14, 0);
    MiReleaseProcessorFlushList(KernelWaitTime, ProcessorFlushList, v14);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 120);
  if ( v15 )
  {
    MiUnlockPageTableInternal(v3, v15);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  MiUnlockWorkingSetShared(v3, *(unsigned __int8 *)(a1 + 112));
  return v5;
}
