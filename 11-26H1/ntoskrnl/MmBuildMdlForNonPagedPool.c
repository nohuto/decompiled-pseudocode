/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x14024DE40
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x14024DB70 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14041084C (VslpLockMdlForTransfer.c)
 *     HalpFlushMapBuffers @ 0x14058BDDC (HalpFlushMapBuffers.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     DifMmBuildMdlForNonPagedPoolWrapper @ 0x14066A000 (DifMmBuildMdlForNonPagedPoolWrapper.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140794978 (HvlpDynamicUpdateMicrocode.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1408342C0 (EtwpBuildMdlForTraceBuffer.c)
 *     MiCreateMdl @ 0x140A63630 (MiCreateMdl.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiQueuePinDriverAddressLog @ 0x14024E374 (MiQueuePinDriverAddressLog.c)
 *     MiVaToPfnEx @ 0x14024F870 (MiVaToPfnEx.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegSetNotifyOnEmpty @ 0x14025021C (RtlpHpSegSetNotifyOnEmpty.c)
 *     MiLogNoStealNonPagedPool @ 0x140250E98 (MiLogNoStealNonPagedPool.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 v1; // r15
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v4; // r14
  int v5; // r12d
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r13
  PMDL v8; // rax
  volatile signed __int64 *v9; // r8
  signed __int64 i; // rcx
  signed __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+7Ch] [rbp+14h]
  __int64 v26; // [rsp+80h] [rbp+18h] BYREF
  PMDL p_Size; // [rsp+88h] [rbp+20h]

  v1 = (unsigned __int64)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  BugCheckParameter4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  p_Size = MemoryDescriptorList + 1;
  MemoryDescriptorList->Process = 0LL;
  v4 = -1LL;
  MemoryDescriptorList->MappedSystemVa = (PVOID)v1;
  v5 = 0;
  v6 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = 0;
  v7 = v6 + 8 * ((MemoryDescriptorList->ByteCount + 4095LL + (v1 & 0xFFF)) >> 12);
  while ( v6 < v7 )
  {
    if ( v5 )
    {
      if ( v5 < 2 )
        goto LABEL_15;
      goto LABEL_8;
    }
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v1) )
    {
      v4 = MiVaToPfnEx(v1);
      v5 = 1;
      goto LABEL_15;
    }
    BugCheckParameter4 = *(_QWORD *)v6;
    if ( v1 >= 0xFFFF800000000000uLL )
    {
      v23 = *((unsigned __int8 *)&MiState + ((v1 >> 39) & 0x1FF) + 46064);
      if ( v23 == 4 )
      {
        v5 = 3;
        goto LABEL_8;
      }
    }
    else
    {
      v23 = 0;
    }
    v5 = 2;
LABEL_8:
    if ( (BugCheckParameter4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v6, BugCheckParameter4);
    if ( v5 == 3 )
    {
      v9 = (volatile signed __int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      for ( i = *v9; ; i = v11 )
      {
        if ( (i & 0x200) != 0 )
          goto LABEL_25;
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v11 = _InterlockedCompareExchange64(v9, i | 0x220, i);
        if ( i == v11 )
          break;
      }
      _InterlockedIncrement64(&qword_140E2C8C0);
      v12 = RtlCSparseBitmapBitmaskRead(&ExpUuidLock.CycleTime, 2 * ((v1 - ExpUuidLock.ThreadLock) >> 20));
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 != 2 )
        {
          v24 = 0x100000;
          v25 = 0x1000000;
          v14 = (unsigned int)*(&v24 + v13);
          v15 = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((v1 & -v14) + 0x10) ^ v1 & -v14) - 192LL * v13;
          v16 = v15 - 320;
          if ( v15 != 320 )
          {
            v26 = 0LL;
            v17 = RtlCSparseBitmapBitmaskRead(&ExpUuidLock.CycleTime, 2 * ((v1 - ExpUuidLock.ThreadLock) >> 20));
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 != 2 )
              {
                v19 = RtlpHpSegSetNotifyOnEmpty(v16 + 192LL * v18 + 320, v1, &v26);
                v20 = v26;
                if ( v19 && (v19 & 0xFFF) != 0 )
                  v21 = *(unsigned int *)(v19 + 4);
                else
LABEL_38:
                  v21 = 0LL;
                if ( stru_140E366D8.FirstArgument )
                {
                  if ( *(_DWORD *)stru_140E366D8.FirstArgument )
                  {
                    if ( (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000008000LL) != 0 )
                    {
                      v22 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
                      if ( (v22 & 0x400000008000LL) == v22 )
                        MiLogNoStealNonPagedPool(v22, v1, v21, v20);
                    }
                  }
                }
                goto LABEL_25;
              }
            }
          }
        }
      }
      v20 = 0LL;
      goto LABEL_38;
    }
LABEL_25:
    BugCheckParameter4 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v6, *(_QWORD *)v6);
    v4 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL;
    if ( v23 == 11 )
      MiQueuePinDriverAddressLog((__int64)(v6 << 25) >> 16, BugCheckParameter4, 1LL);
LABEL_15:
    v8 = p_Size;
    v6 += 8LL;
    v1 += 4096LL;
    p_Size->Next = (struct _MDL *)v4;
    p_Size = (PMDL)&v8->Size;
    if ( (v6 & 0xFFF) != 0 )
    {
      if ( v5 == 1 )
        ++v4;
    }
    else
    {
      v5 = 0;
    }
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
