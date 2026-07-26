/*
 * XREFs of ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400168D0
 * Callers:
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400122F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisIfGetMiniportStatistics @ 0x140153E80 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x140154480 (ndisIfQuerySetMiniport.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  ULONG_PTR v4; // rsi
  __int64 v5; // rdi
  KIRQL v6; // r15
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // r8
  __int64 v8; // r9
  unsigned __int8 j; // cl
  _BYTE *v10; // r10
  char v11; // al
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  int v14; // edx
  KIRQL v15; // al
  int v16; // edx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v18; // bp
  __int64 v19; // r9
  unsigned __int8 m; // cl
  _BYTE *v21; // r10
  char v22; // al
  unsigned int v23; // esi
  int v24; // edx
  struct _KEVENT *RemoveReadyEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v26; // r14
  unsigned int v27; // edx
  int v28; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rdi
  NDIS_REFCOUNT_HANDLE__ *v30; // r14
  unsigned int v31; // edx
  int v32; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // rsi

  v4 = a3;
  v5 = a2;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  NsiRefCountTracker = a1->NsiRefCountTracker;
  a1->MiniportThread = KeGetCurrentThread();
  if ( NsiRefCountTracker != (NDIS_REFCOUNT_HANDLE__ *)2 && NsiRefCountTracker != (NDIS_REFCOUNT_HANDLE__ *)3 )
  {
    if ( (unsigned __int64)NsiRefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)NsiRefCountTracker, 0LL);
    if ( (_BYTE)v5 == 0xFF )
    {
      if ( (*(_BYTE *)NsiRefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)NsiRefCountTracker, 0xFFuLL);
      *(_BYTE *)NsiRefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v5 >= *((_BYTE *)NsiRefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)NsiRefCountTracker, (unsigned int)v5);
      if ( *((_BYTE *)NsiRefCountTracker + 1) )
      {
        if ( *((_BYTE *)NsiRefCountTracker + 1) == 1 )
        {
          v26 = NsiRefCountTracker + 16 * v5;
          v27 = *((_DWORD *)v26 + 16);
          v28 = (unsigned __int16)v27 >> 1;
          if ( v27 >> 17 < 0x3FFE && v28 == (v27 >> 17) + 1 )
          {
            for ( i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v26 + 1);
                  i;
                  i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v26 + 1) )
            {
              *((_QWORD *)v26 + 1) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v26 + 2));
            *((_DWORD *)v26 + 16) &= 0x10001u;
          }
          else
          {
            if ( v28 == 0 && (v27 & 1) == 0 )
              ndisReportRefcountImbalance((ULONG_PTR)NsiRefCountTracker, v5);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v26 + 2), 0);
          }
        }
      }
      else
      {
        v8 = *((_QWORD *)NsiRefCountTracker + 1);
        if ( v8 )
        {
          for ( j = 0; j < *((_BYTE *)NsiRefCountTracker + 3); ++j )
          {
            v10 = (_BYTE *)(v8 + 2LL * j);
            if ( *v10 == (_BYTE)v5 )
            {
              v11 = v10[1];
              if ( v11 )
              {
                v10[1] = v11 - 1;
                goto LABEL_17;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)NsiRefCountTracker + 4, v5) )
          ndisReportRefcountImbalance((ULONG_PTR)NsiRefCountTracker, v5);
      }
    }
  }
LABEL_17:
  if ( a1->NsiOpenReferences-- == 1 )
  {
    NsiRequestsCompletedEvent = a1->NsiRequestsCompletedEvent;
    if ( NsiRequestsCompletedEvent )
      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v18 = v15;
  if ( RefCountTracker && (unsigned __int64)RefCountTracker - 2 > 1 )
  {
    if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( (_BYTE)v4 == 0xFF )
    {
      if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0xFFuLL);
      *(_BYTE *)RefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v4 >= *((_BYTE *)RefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, v4);
      if ( *((_BYTE *)RefCountTracker + 1) )
      {
        if ( *((_BYTE *)RefCountTracker + 1) == 1 )
        {
          v30 = RefCountTracker + 16 * v4;
          v31 = *((_DWORD *)v30 + 16);
          v32 = (unsigned __int16)v31 >> 1;
          if ( v31 >> 17 < 0x3FFE && v32 == (v31 >> 17) + 1 )
          {
            for ( k = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v30 + 1);
                  k;
                  k = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v30 + 1) )
            {
              *((_QWORD *)v30 + 1) = k->Next;
              ndisFreeRefCountStacksInBlock(k);
              ExFreePoolWithTag(k, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v30 + 2));
            *((_DWORD *)v30 + 16) &= 0x10001u;
          }
          else
          {
            if ( v32 == 0 && (v31 & 1) == 0 )
              ndisReportRefcountImbalance((ULONG_PTR)a1->RefCountTracker, v4);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v30 + 2), 0);
          }
        }
      }
      else
      {
        v19 = *((_QWORD *)RefCountTracker + 1);
        if ( v19 )
        {
          for ( m = 0; m < *((_BYTE *)RefCountTracker + 3); ++m )
          {
            v21 = (_BYTE *)(v19 + 2LL * m);
            if ( *v21 == (_BYTE)v4 )
            {
              v22 = v21[1];
              if ( v22 )
              {
                v21[1] = v22 - 1;
                goto LABEL_38;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)RefCountTracker + 4, v4) )
          ndisReportRefcountImbalance((ULONG_PTR)RefCountTracker, v4);
      }
    }
  }
LABEL_38:
  v23 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v23;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      20,
      14,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      v23);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v18);
  if ( !v23 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
  }
}
