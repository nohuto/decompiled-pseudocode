/*
 * XREFs of MiModwriterIssueWrite @ 0x140401A18
 * Callers:
 *     MiGatherPagefilePages @ 0x1403FFDF8 (MiGatherPagefilePages.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MI_PAGEFILE_WRITE @ 0x140401D2C (MI_PAGEFILE_WRITE.c)
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiTransferMemoryPagefileData @ 0x1404FC9E8 (MiTransferMemoryPagefileData.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiModwriterIssueWrite(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rsi
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 result; // rax
  struct _MDL *v18; // rdx
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // di
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 QpcTimeStamp; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 8);
  v25 = *(_DWORD *)(a1 + 4);
  v5 = *(_QWORD *)(v2 + 64);
  v6 = (*(_DWORD *)(v2 + 40) >> 2) & 7;
  v7 = *(_QWORD *)(v5 + 224);
  v8 = *(_QWORD *)(v7 + 22464);
  v9 = *(_DWORD *)(v7 + 988);
  if ( !v9 )
  {
    if ( v8 < 0x32 )
    {
      *(_DWORD *)(v7 + 988) = 32;
    }
    else
    {
      if ( v8 >= 0x120 )
        goto LABEL_4;
      *(_DWORD *)(v7 + 988) = 8;
    }
    v6 = 4;
    goto LABEL_4;
  }
  a2 = 1056LL;
  v21 = v9 - 1;
  if ( v8 < 0x420 )
    v6 = 4;
  *(_DWORD *)(v7 + 988) = v8 < 0x420 ? v21 : 0;
LABEL_4:
  *(_DWORD *)(v2 + 40) = (4 * v6) | *(_DWORD *)(v2 + 40) & 0xFFFFFFE3;
  if ( v6 < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ++*(_DWORD *)(v7 + 820);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery((__int64)CurrentThread, a2);
    }
  }
  v12 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  *(_QWORD *)(v2 + 80) = v12;
  MI_PAGEFILE_WRITE(v2, v12, v6, ((*(_DWORD *)a1 >> 1) & 1) == 0, -1);
  v13 = *(_DWORD *)(v7 + 976);
  if ( v13 == 512 )
  {
    v14 = (_QWORD *)(v7 + 968);
    *v14 -= *v14 >> 9;
  }
  else
  {
    *(_DWORD *)(v7 + 976) = v13 + 1;
    v14 = (_QWORD *)(v7 + 968);
  }
  *v14 += v4;
  v15 = v25;
  v16 = 3221225473LL;
  *(_DWORD *)(v2 + 40) &= ~0x40u;
  *(_QWORD *)(v2 + 88) = (unsigned __int64)v15 << 12;
  if ( (*(_BYTE *)(v5 + 172) & 0x40) == 0 && (*(_DWORD *)a1 & 6) != 4
    || (result = MiStoreWriteModifiedPages(v2, *(unsigned int *)(a1 + 20)), v16 = (unsigned int)result, (int)result < 0) )
  {
    if ( (*(_BYTE *)(v5 + 172) & 0x40) == 0 )
    {
      __incgsdword(0x2EACu);
      __addgsdword(0x2EA8u, v4);
      MiMapPageFileHash(v5, v2 + 104, 0, v15, v4);
      v18 = (struct _MDL *)(v2 + 104);
      if ( _bittest16((const signed __int16 *)(v5 + 172), 0xBu) )
      {
        MiTransferMemoryPagefileData(v5, v18, *(_QWORD *)(v2 + 88) >> 12, 0LL);
        *(_DWORD *)(v2 + 24) = 0;
        *(_QWORD *)(v2 + 32) = *(unsigned int *)(v2 + 144);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v22) = 1;
          LOBYTE(v23) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v23, v22);
        }
LABEL_23:
        MiWriteComplete((PVOID)v2);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
      v16 = (unsigned int)IoAsynchronousPageWrite(
                            *(struct _FILE_OBJECT **)(v5 + 24),
                            v18,
                            (LARGE_INTEGER *)(v2 + 88),
                            (LARGE_INTEGER)MiWriteComplete,
                            (void *)v2,
                            v6,
                            *(_DWORD *)(v5 + 168),
                            0,
                            0LL,
                            (struct _IO_STATUS_BLOCK *)(v2 + 24),
                            (IRP **)(v2 + 16));
    }
    v19 = 3221225472LL;
    result = (unsigned int)v16 & 0xC0000000;
    if ( (_DWORD)result != -1073741824 )
      return result;
    *(_DWORD *)(v2 + 24) = v16;
    *(_QWORD *)(v2 + 32) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = 1;
      LOBYTE(v19) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v19, v16);
    }
    goto LABEL_23;
  }
  return result;
}
