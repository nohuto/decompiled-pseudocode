/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140342EB4
 * Callers:
 *     MiDecommitEnclavePages @ 0x140A05608 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140C08014 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiDeleteEnclavePage @ 0x140342680 (MiDeleteEnclavePage.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x1403431A8 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     KeRemoveEnclavePage @ 0x140343280 (KeRemoveEnclavePage.c)
 *     MiDecommitRemoveEnclavePageForce @ 0x140343E60 (MiDecommitRemoveEnclavePageForce.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     KeBlockEnclavePage @ 0x1405F1068 (KeBlockEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405F12AC (KeTrackEnclaveTbFlush.c)
 *     MiDecommitGetMetadataSlot @ 0x140704B70 (MiDecommitGetMetadataSlot.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiDecommitHardwareEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int64 v6; // rdi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // rdx
  __int64 *v13; // r14
  unsigned int v14; // r13d
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  unsigned __int64 PteShadow; // rax
  __int64 v18; // rdi
  unsigned __int64 ValidPte; // rax
  unsigned int MetadataSlot; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *ProcessorFlushList; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v32; // r9d
  volatile signed __int32 *v33; // r8
  int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v37; // [rsp+40h] [rbp-39h]
  unsigned int v38; // [rsp+44h] [rbp-35h]
  char *v39; // [rsp+48h] [rbp-31h]
  int v40; // [rsp+50h] [rbp-29h]
  unsigned __int64 v41; // [rsp+58h] [rbp-21h]
  unsigned __int64 v42; // [rsp+60h] [rbp-19h]
  __int64 *v43; // [rsp+68h] [rbp-11h]
  __int64 v44; // [rsp+70h] [rbp-9h]
  char v45; // [rsp+78h] [rbp-1h]
  __int64 v46; // [rsp+80h] [rbp+7h]
  __int64 v47; // [rsp+88h] [rbp+Fh]

  v6 = a3;
  memset_0(&v36, 0, 0x58uLL);
  v8 = a1 + 1024;
  v47 = a2;
  v44 = v8;
  v41 = v6;
  v36 = a2;
  v40 = a5;
  v37 = 2;
  v11 = MiLockWorkingSetShared(v8, v9, v10);
  v13 = v43;
  v14 = 0;
  v15 = v42;
  v45 = v11;
  do
  {
    if ( v14 == 2 )
    {
      KeTrackEnclaveTbFlush((__int64)(*(_QWORD *)(a2 + 88) << 25) >> 16);
      ProcessorFlushList = MiGetProcessorFlushList();
      MiInitializeTbFlushList((_DWORD)ProcessorFlushList, v8, *((_DWORD *)ProcessorFlushList + 3), 8, 128);
      MiInsertTbFlushEntry(v25, (__int64)(a3 << 25) >> 16, 1LL);
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList(v27, v26, v28);
      v6 = a3;
      v13 = 0LL;
      v43 = 0LL;
    }
    v16 = v6;
    if ( v6 <= a4 )
    {
      do
      {
        MiDecommitRemoveEnclaveAcquireLocks(&v36, v16);
        PteShadow = *(_QWORD *)v16;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v16, *(_QWORD *)v16);
        if ( PteShadow )
        {
          v18 = (__int64)(v16 << 25) >> 16;
          v46 = v18;
          if ( v14 )
          {
            if ( v14 == 1 )
            {
              if ( (unsigned int)KeRemoveEnclavePage((__int64)(v16 << 25) >> 16) != -1073741757 || v40 )
              {
                MiDeleteEnclavePage(v16, 1LL);
              }
              else
              {
                if ( !v39 )
                {
                  MetadataSlot = MiDecommitGetMetadataSlot(&v36, v16);
                  v18 = v46;
                  v38 = MetadataSlot;
                  v39 = (char *)stru_140E366D8.StackLimit + 8 * MetadataSlot;
                  v37 = 3;
                }
                KeBlockEnclavePage(v18);
              }
            }
            else
            {
              MiDecommitRemoveEnclavePageForce(&v36, v16);
              v18 = v46;
            }
          }
          else
          {
            ValidPte = MiMakeValidPte(v16, (PteShadow >> 12) & 0xFFFFFFFFFFLL, -1073741820);
            MiWriteValidPteNewProtection((__int64 *)v16, ValidPte);
          }
          v13 = v43;
          v8 = v44;
          if ( !v43 )
          {
            v13 = MiGetProcessorFlushList();
            v43 = v13;
            MiInitializeTbFlushList((_DWORD)v13, v8, *((_DWORD *)v13 + 3), 0, v14 != 0 ? 1 : 32);
          }
          MiInsertTbFlushEntry(v13, v18, 1LL);
        }
        else
        {
          v8 = v44;
          v13 = v43;
        }
        v16 += 8LL;
      }
      while ( v16 <= a4 );
      v15 = v42;
      v6 = a3;
    }
    if ( v15 )
    {
      if ( v13 )
      {
        MiFlushTbList((__int64)v13);
        MiReleaseProcessorFlushList(v22, v21, v23);
        v13 = 0LL;
        v43 = 0LL;
      }
      MiUnlockPageTableInternal(v8, v15);
    }
    v15 = 0LL;
    ++v14;
    v42 = 0LL;
  }
  while ( v14 < v37 );
  LOBYTE(v12) = v45;
  MiUnlockWorkingSetShared(v8, v12);
  if ( v39 )
  {
    if ( v38 )
    {
      LOBYTE(v32) = 1;
      v33 = (volatile signed __int32 *)(*((_QWORD *)stru_140E366D8.StackBase + 1) + 4 * ((unsigned __int64)v38 >> 5));
      if ( (unsigned __int64)(v38 & 0x1F) + 1 > 0x20 )
      {
        v34 = v38 & 0x1F;
        if ( (v38 & 0x1F) == 0 )
          goto LABEL_45;
        _InterlockedAnd(v33, ~(((1 << (32 - v34)) - 1) << (v38 & 0x1F)));
        v32 = 1 - (32 - v34);
        ++v33;
        if ( v32 >= 0x20 )
        {
          v35 = (unsigned __int64)v32 >> 5;
          do
          {
            *v33 = 0;
            v32 -= 32;
            ++v33;
            --v35;
          }
          while ( v35 );
        }
        if ( v32 )
LABEL_45:
          _InterlockedAnd(v33, -1 << v32);
      }
      else
      {
        _InterlockedAnd(v33, ~(1 << (v38 & 0x1F)));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8.ThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.ThreadLock);
      KeAbPostRelease((unsigned __int64)&stru_140E366D8.ThreadLock);
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery((__int64)CurrentThread, v29);
      }
    }
  }
}
