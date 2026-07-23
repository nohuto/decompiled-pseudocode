/*
 * XREFs of HalPutScatterGatherListV2 @ 0x14035D320
 * Callers:
 *     HalPutScatterGatherList @ 0x14035D2F0 (HalPutScatterGatherList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaNextContiguousPiece @ 0x14035D8E4 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14035D930 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140438948 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV2(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  char v4; // r14
  __int64 v6; // rbp
  __int64 *v7; // rsi
  __int64 v8; // r13
  unsigned int v9; // r15d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r12d
  unsigned int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // r13
  char v18; // al
  unsigned __int64 v19; // r10
  int v20; // r15d
  int v21; // ebx
  unsigned int ContiguousPieceV2; // eax
  int v23; // r9d
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rsi
  unsigned int v28; // r14d
  __int64 v29; // rbp
  char v30; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _MDL *v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // r8
  unsigned int v37; // r15d
  unsigned int ContiguousPiece; // r8d
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // r10
  struct _MDL *Next; // rsi
  size_t v46; // [rsp+20h] [rbp-78h]
  int v47; // [rsp+28h] [rbp-70h]
  __int64 v48; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+50h] [rbp-48h]
  __int64 v51; // [rsp+50h] [rbp-48h]
  _DWORD *v52; // [rsp+58h] [rbp-40h]
  char v53; // [rsp+A8h] [rbp+10h]
  unsigned int v54; // [rsp+A8h] [rbp+10h]
  unsigned int v55; // [rsp+B8h] [rbp+20h]

  v3 = *(_DWORD **)(a2 + 8);
  v4 = a3;
  v52 = v3;
  if ( !v3 )
  {
    ExFreePoolWithTag((PVOID)a2, 0);
    return;
  }
  if ( v3 != (_DWORD *)1 )
  {
    v6 = *((_QWORD *)v3 + 4);
    v7 = (__int64 *)*((_QWORD *)v3 + 1);
    v8 = *((_QWORD *)v3 + 3);
    v9 = v3[10];
    v10 = *((_DWORD *)v7 + 8) + *((_DWORD *)v7 + 10) + *((_DWORD *)v7 + 11) - v6;
    v48 = v8;
    if ( !v9 )
    {
LABEL_37:
      v27 = *(_QWORD *)(a1 + 160);
      v28 = v3[11];
      v29 = *((_QWORD *)v3 + 3);
      if ( v27 && v29 )
      {
        v30 = 0;
        CurrentIrql = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = 2;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
          }
          v30 = 1;
        }
        if ( v28 )
          HalpDmaFreeMapRegisters(a1, v29, v28);
        HalpDmaProcessMapRegisterQueueV2(v27, *(unsigned __int8 *)(a1 + 442));
        if ( v30 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
      v32 = (struct _MDL *)*((_QWORD *)v3 + 2);
      if ( v32 )
      {
        do
        {
          Next = v32->Next;
          if ( (v32->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v32->MappedSystemVa, v32);
          IoFreeMdl(v32);
          v32 = Next;
        }
        while ( Next );
      }
      if ( (*v3 & 1) == 0 )
        ExFreePoolWithTag(v3, 0);
      return;
    }
    while ( !v10 )
    {
LABEL_34:
      v26 = (__int64 *)*v7;
      v7 = v26;
      if ( v26 )
      {
        v6 = v26[4] + *((unsigned int *)v26 + 11);
        v10 = *((_DWORD *)v26 + 10);
        if ( v9 )
          continue;
      }
      v3 = v52;
      goto LABEL_37;
    }
    v11 = *v7;
    v12 = v9;
    v13 = v9;
    if ( v10 <= v9 )
      v12 = v10;
    if ( v11 )
      v13 = v12;
    v14 = v9 - v12;
    v15 = 0;
    if ( v11 )
      v15 = v14;
    v55 = v15;
    if ( a1 && !*(_BYTE *)(a1 + 441) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), v12, a3);
    if ( v8 )
    {
      if ( a1 && *(_BYTE *)(a1 + 442) )
      {
        v16 = v6;
        if ( v4 )
        {
LABEL_19:
          *(_QWORD *)(v8 + 56) = v8;
          goto LABEL_20;
        }
        v37 = v13;
        *(_QWORD *)(v8 + 56) = v8;
        while ( 1 )
        {
          ContiguousPiece = HalpDmaNextContiguousPiece(a1, (_DWORD)v7, v8, v16, 0, v37);
          v49 = v16 & 0xFFF;
          v54 = ContiguousPiece;
          v51 = ContiguousPiece;
          if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)ContiguousPiece
                                     + v49
                                     + (v7[(unsigned int)((unsigned __int64)(v16 - v7[4]) >> 12) + 6] << 12)
                                     - 1 )
            goto LABEL_71;
          if ( *(_BYTE *)(a1 + 445) )
            goto LABEL_76;
          v42 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
          if ( (v42 & v44) != 0 || (v43 & v42) != 0 )
          {
LABEL_71:
            LODWORD(v46) = ContiguousPiece;
            HalpDmaSyncMapBuffers(a1, (_DWORD)v7, v16, *(_QWORD *)(v8 + 56), v46, 0, 0, 0);
            v39 = *(_QWORD *)(v8 + 56);
            v40 = (unsigned __int64)(v51 + v49 + 4095) >> 12;
            if ( (_DWORD)v40 )
            {
              v41 = (unsigned int)v40;
              do
              {
                v39 = *(_QWORD *)(v39 + 8);
                --v41;
              }
              while ( v41 );
            }
            *(_QWORD *)(v8 + 56) = v39;
          }
          else
          {
            LOBYTE(v47) = 0;
            LOBYTE(v46) = 0;
            HalpDmaFlushBuffer(v42, v7, v16, ContiguousPiece, v46, v47);
          }
          ContiguousPiece = v54;
LABEL_76:
          v16 += ContiguousPiece;
          v37 -= ContiguousPiece;
          if ( !v37 )
            goto LABEL_19;
        }
      }
      v33 = HalpDmaNextContiguousPiece(a1, (_DWORD)v7, 0, v6, v4, v13);
      if ( v33 != v13
        || *(_QWORD *)(a1 + 144) < (v6 & 0xFFF)
                                 + (v7[(unsigned int)((unsigned __int64)(v6 - v7[4]) >> 12) + 6] << 12)
                                 + (unsigned __int64)v33
                                 - 1 )
      {
        if ( v4 )
          goto LABEL_20;
        goto LABEL_48;
      }
      if ( !v4 && !*(_BYTE *)(a1 + 445) )
      {
        v11 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v11 & v36) == 0 && (v35 & v11) == 0 )
        {
LABEL_64:
          if ( !*(_BYTE *)(a1 + 445) )
          {
            LOBYTE(v47) = 0;
            LOBYTE(v46) = 0;
            HalpDmaFlushBuffer(v11, v7, v6, v13, v46, v47);
          }
          goto LABEL_20;
        }
LABEL_48:
        LODWORD(v46) = v13;
        HalpDmaSyncMapBuffers(a1, (_DWORD)v7, v6, v8, v46, 0, 0, 0);
      }
    }
    else if ( !v4 )
    {
      goto LABEL_64;
    }
LABEL_20:
    v17 = (v6 & 0xFFF) + (v7[(unsigned int)((unsigned __int64)(v6 - v7[4]) >> 12) + 6] << 12);
    v18 = *(_BYTE *)(a1 + 442);
    v19 = *(_QWORD *)(a1 + 144);
    v20 = *(_DWORD *)(a1 + 156);
    v21 = v48;
    v53 = v18;
    v50 = v19;
    do
    {
      if ( v18 )
      {
        if ( v20 == 2 )
          ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, (_DWORD)v7, v21, v6, v4, v13);
        else
          ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, (_DWORD)v7, v21, v6, v4, v13);
        v19 = v50;
        a2 = ContiguousPieceV2;
      }
      else
      {
        a2 = v13;
      }
      v13 -= a2;
      if ( v20 == 2 )
      {
        v23 = 1;
      }
      else
      {
        v23 = HalpCoreDmaAlignment;
        if ( *(_BYTE *)(a1 + 445) )
          v23 = 1;
      }
      a3 = (unsigned int)a2 + v17;
      if ( v19 < a3 - 1
        || !v4 && !*(_BYTE *)(a1 + 445) && ((v34 = (unsigned int)(v23 - 1), (v34 & v17) != 0) || (a3 & v34) != 0) )
      {
        v24 = ((v6 & 0xFFF) + (unsigned __int64)(unsigned int)a2 + 4095) >> 12;
        if ( (_DWORD)v24 )
        {
          v25 = v48;
          a3 = (unsigned int)v24;
          do
          {
            v25 = *(_QWORD *)(v25 + 8);
            --a3;
          }
          while ( a3 );
          v48 = v25;
          v21 = v25;
        }
      }
      LODWORD(v6) = a2 + v6;
      v17 += (unsigned int)a2;
      v18 = v53;
    }
    while ( v13 );
    v9 = v55;
    v8 = v48;
    goto LABEL_34;
  }
}
