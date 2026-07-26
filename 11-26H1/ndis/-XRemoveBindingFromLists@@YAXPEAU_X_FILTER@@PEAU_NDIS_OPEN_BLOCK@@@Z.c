/*
 * XREFs of ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140034160
 * Callers:
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140034140 (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400349E0 (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034420 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall XRemoveBindingFromLists(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  KSPIN_LOCK *BindListLock; // rsi
  KIRQL v6; // al
  _QWORD *v7; // r9
  KIRQL v8; // r14
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  char v11; // r9
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  struct _X_FILTER *i; // rcx
  struct _NDIS_OPEN_BLOCK *OpenList; // rax
  _NDIS_OPEN_BLOCK **j; // rcx
  struct _NDIS_OPEN_BLOCK *v16; // rax
  _NDIS_OPEN_BLOCK **k; // rcx
  struct _NDIS_OPEN_BLOCK *v18; // rax
  unsigned int v19; // r10d
  unsigned int NumEntries; // ecx
  struct _NDIS_RW_LOCK_EX *v21; // rdx
  __int64 v22; // rax
  KSPIN_LOCK *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // r11d
  unsigned int v26; // edx
  _NDIS_FRAME_TYPE_AND_OPEN *v27; // r8
  _NDIS_FRAME_TYPE_AND_OPEN v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rax

  CurrentThread = KeGetCurrentThread();
  BindListLock = (KSPIN_LOCK *)a1->BindListLock;
  if ( (struct _KTHREAD *)BindListLock[3] == CurrentThread )
  {
    v8 = 0;
    v11 = 2;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(BindListLock + 2);
    v7 = (_QWORD *)BindListLock[4];
    v8 = v6;
    v9 = v7;
    v10 = &v7[512 * ndisMaxNumberOfProcessors];
    if ( v7 != v10 )
    {
      do
      {
        if ( *v9 && v9 != (_QWORD *)((char *)v7 + (KeGetPcr()->Prcb.Number << 12)) && *v9 )
        {
          do
            _mm_pause();
          while ( *v9 );
        }
        v9 += 512;
      }
      while ( v9 != v10 );
    }
    BindListLock[3] = (KSPIN_LOCK)CurrentThread;
    v11 = 4;
  }
  if ( a1->SingleActiveOpen == a2 )
  {
    Miniport = a1->Miniport;
    a1->SingleActiveOpen = 0LL;
    ndisUpdateCheckForLoopbackFlag(Miniport);
  }
  for ( i = a1; ; i = (struct _X_FILTER *)&OpenList->FilterNextOpen )
  {
    OpenList = i->OpenList;
    if ( !i->OpenList )
      break;
    if ( OpenList == a2 )
    {
      i->OpenList = a2->FilterNextOpen;
      break;
    }
  }
  for ( j = &a1->NoFTypeOpenList; ; j = &v16->FilterNextOpen )
  {
    v16 = *j;
    if ( !*j )
      break;
    if ( v16 == a2 )
    {
      *j = a2->FilterNextOpen;
      --a1->NumNoETypeOpens;
      break;
    }
  }
  for ( k = &a1->FTypeOpenList; ; k = &v18->FilterNextOpen )
  {
    v18 = *k;
    if ( !*k )
      break;
    if ( v18 == a2 )
    {
      *k = a2->FilterNextOpen;
      break;
    }
  }
  a2->FilterNextOpen = 0LL;
  v19 = 0;
  --a1->NumOpens;
  NumEntries = a1->FrameTypeRecord.NumEntries;
  if ( NumEntries )
  {
    do
    {
      v24 = NumEntries;
      if ( a1->FrameTypeRecord.Entry[v19].Open == a2 )
      {
        v25 = v19 + 1;
        do
        {
          v26 = v19;
          if ( v25 < NumEntries )
          {
            v27 = &a1->FrameTypeRecord.Entry[v25];
            do
            {
              v28 = *v27++;
              v29 = v26++;
              a1->FrameTypeRecord.Entry[v29] = v28;
            }
            while ( v26 + 1 < NumEntries );
          }
          v30 = v26;
          a1->FrameTypeRecord.Entry[v30].Type = 0;
          a1->FrameTypeRecord.Entry[v30].Open = 0LL;
          v24 = a1->FrameTypeRecord.NumEntries - 1;
          a1->FrameTypeRecord.NumEntries = v24;
          NumEntries = v24;
        }
        while ( a1->FrameTypeRecord.Entry[v19].Open == a2 );
      }
      ++v19;
      NumEntries = v24;
    }
    while ( v19 < v24 );
  }
  v21 = a1->BindListLock;
  if ( v11 == 3 )
  {
    v22 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(*((_QWORD *)v21 + 4) + (unsigned int)v22) = *(_QWORD *)(*((_QWORD *)v21 + 4) + v22) - 1LL;
    if ( v8 != 2 )
      KeLowerIrql(v8);
  }
  else if ( v11 == 4 )
  {
    *((_QWORD *)v21 + 3) = 0LL;
    v23 = (KSPIN_LOCK *)((char *)v21 + 16);
    if ( v8 == 2 )
      KeReleaseSpinLockFromDpcLevel(v23);
    else
      KeReleaseSpinLock(v23, v8);
  }
}
