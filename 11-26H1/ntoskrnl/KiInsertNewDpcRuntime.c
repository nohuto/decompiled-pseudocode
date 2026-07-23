/*
 * XREFs of KiInsertNewDpcRuntime @ 0x140411DBC
 * Callers:
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiInsertNewDpcRuntime(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r15
  int v4; // ebx
  __int64 v6; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KPRCB *v14; // rcx
  unsigned __int32 *v15; // rdi
  unsigned __int32 v16; // eax
  __int64 v17; // rdx
  unsigned __int32 v18; // ett
  __int64 v19; // rbx
  char *Pool2; // r14
  char v21; // cl
  unsigned __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r9
  __int64 v25; // r11
  _QWORD *v26; // r8
  __int64 v27; // rdx
  void *v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KPRCB *v31; // rcx
  unsigned __int32 *SchedulerAssist; // rdi
  unsigned __int32 v33; // eax
  __int64 v34; // rdx
  unsigned __int32 v35; // ett
  __int64 v36; // [rsp+60h] [rbp+8h]
  __int64 v37; // [rsp+60h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_DWORD *)(a1 + 4) >> 5;
  v6 = a2;
  if ( *(_DWORD *)a1 >= (unsigned int)(2 * v4) )
  {
    v19 = (unsigned int)(2 * v4);
    if ( (unsigned int)v19 < 4 )
      v19 = 4LL;
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      _disable();
      KxAcquireSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
      if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
      {
        v21 = -1;
        do
        {
          ++v21;
          LODWORD(v19) = (unsigned int)v19 >> 1;
        }
        while ( (_DWORD)v19 );
        v19 = (unsigned int)(1 << v21);
      }
      if ( (unsigned int)v19 > 0x4000000 )
        v19 = 0x4000000LL;
      v22 = (unsigned int)v19;
      if ( Pool2 > &Pool2[8 * v19] )
        v22 = 0LL;
      if ( v22 )
        memset64(Pool2, a1 | 1, v22);
      v23 = 0;
      v24 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v25 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v26 = *(_QWORD **)(v25 + 8LL * v23);
            if ( ((unsigned __int8)v26 & 1) != 0 )
              break;
            *(_QWORD *)(v25 + 8LL * v23) = *v26;
            v37 = v24 & v26[1];
            v27 = ((_DWORD)v19 - 1) & (HIBYTE(v37)
                                     + 37
                                     * (BYTE6(v37)
                                      + 37
                                      * (BYTE5(v37)
                                       + 37
                                       * (BYTE4(v37)
                                        + 37
                                        * (BYTE3(v37)
                                         + 374026047
                                         + 37
                                         * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * (unsigned int)(unsigned __int8)v37)))))));
            *v26 = *(_QWORD *)&Pool2[8 * v27];
            *(_QWORD *)&Pool2[8 * v27] = v26;
          }
          ++v23;
        }
        while ( v23 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v28 = *(void **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = Pool2;
      *(_DWORD *)(a1 + 4) = (32 * v19) | *(_DWORD *)(a1 + 4) & 0x1F;
      KxReleaseSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
      v31 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v31->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v33 = *SchedulerAssist;
        do
        {
          v34 = v33;
          LODWORD(v34) = v33 & 0xFFDFFFFF;
          v35 = v33;
          v33 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v33 & 0xFFDFFFFF, v33);
        }
        while ( v35 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v31, v34, v29, v30);
      }
      _enable();
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      v6 = a2;
    }
  }
  v8 = ExAllocatePool2(0x40uLL);
  v9 = (_QWORD *)v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)(v8 + 16) = a3;
    *(_BYTE *)(v8 + 24) = 1;
    _disable();
    KxAcquireSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
    v36 = v9[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v10 = *(_QWORD *)(a1 + 8);
    v11 = ((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v36)
                                            + 37
                                            * (BYTE6(v36)
                                             + 37
                                             * (BYTE5(v36)
                                              + 37
                                              * (BYTE4(v36)
                                               + 37
                                               * (BYTE3(v36)
                                                + 374026047
                                                + 37
                                                * (BYTE2(v36)
                                                 + 37 * (BYTE1(v36) + 37 * (unsigned int)(unsigned __int8)v36)))))));
    *v9 = *(_QWORD *)(v10 + 8 * v11);
    *(_QWORD *)(v10 + 8 * v11) = v9;
    ++*(_DWORD *)a1;
    KxReleaseSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
    v14 = KeGetCurrentPrcb();
    v15 = (unsigned __int32 *)v14->SchedulerAssist;
    if ( v15 )
    {
      _m_prefetchw(v15);
      v16 = *v15;
      do
      {
        v17 = v16;
        LODWORD(v17) = v16 & 0xFFDFFFFF;
        v18 = v16;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)v15, v16 & 0xFFDFFFFF, v16);
      }
      while ( v18 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v14, v17, v12, v13);
    }
    _enable();
  }
}
