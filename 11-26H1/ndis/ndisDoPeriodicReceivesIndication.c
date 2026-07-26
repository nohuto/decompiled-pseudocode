/*
 * XREFs of ndisDoPeriodicReceivesIndication @ 0x1400305B0
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x14001BBA0 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x140030330 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x14006ED90 (ndisEmptyPeriodicReceivesQueue.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140031600 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140031710 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(void *a1, struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int Number; // r13d
  unsigned int v4; // r14d
  struct _NET_BUFFER_LIST *v6; // r15
  unsigned int v7; // r12d
  struct _NET_BUFFER_LIST *v8; // rax
  unsigned int i; // ebp
  bool v10; // zf
  struct _NDIS_RCV_TRACKER_ARRAY *v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 Pool2; // rdi
  _QWORD *v15; // r13
  struct _NET_BUFFER_LIST *v16; // rcx
  struct _NET_BUFFER_LIST *v17; // rdx
  struct _NDIS_OPEN_BLOCK *v18; // r14
  struct _NET_BUFFER_LIST **v19; // rax
  int v20; // edx
  struct _NDIS_OPEN_BLOCK *v21; // rdx
  char v22; // r14
  unsigned int v23; // r14d
  __int64 v24; // rdx
  char v26; // [rsp+30h] [rbp-98h]
  unsigned int v27; // [rsp+34h] [rbp-94h]
  unsigned int v28; // [rsp+38h] [rbp-90h]
  __int128 v29; // [rsp+40h] [rbp-88h] BYREF
  __int128 v30; // [rsp+50h] [rbp-78h]
  __int64 v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+70h] [rbp-58h] BYREF
  int v33; // [rsp+78h] [rbp-50h]

  Number = 0;
  v4 = 0;
  v27 = 0;
  do
  {
    v6 = Alignment;
    if ( !Alignment )
      break;
    v7 = (unsigned int)Alignment->ProtocolReserved[0];
    v8 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    for ( i = 1; Alignment; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
    {
      if ( v7 != LODWORD(Alignment->ProtocolReserved[0]) )
        break;
      v8 = Alignment;
      ++i;
    }
    *((_DWORD *)a1 + 799) -= i;
    v8->Link.Alignment = 0LL;
    if ( *((_BYTE *)a1 + 32) < 6u && (*((_DWORD *)a1 + 30) & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
      v10 = *((_BYTE *)a1 + 89) == 0;
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      if ( !v10 )
      {
        do
        {
          *((_QWORD *)a1 + 65) = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
          KeStallExecutionProcessor(1u);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
          *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        }
        while ( *((_BYTE *)a1 + 89) );
      }
      *((_BYTE *)a1 + 89) = 1;
      *((_QWORD *)a1 + 233) = KeGetCurrentThread();
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
    }
    if ( !*((_BYTE *)a1 + 1995) )
    {
      v28 = 0;
      v26 = 0;
      if ( ndisPerProcRcvTrackers
        && (Number = KeGetPcr()->Prcb.Number,
            v11 = ndisPerProcRcvTrackers,
            v12 = 2096LL * Number,
            v28 = Number,
            v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12),
            (unsigned int)v13 < 3) )
      {
        v26 = 1;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
        Pool2 = (__int64)v11 + 696 * v13 + v12 + 8;
LABEL_16:
        v15 = (_QWORD *)*((_QWORD *)a1 + 50);
        v16 = v6;
        *(_BYTE *)(Pool2 + 692) = 0;
        do
        {
          v17 = v16;
          v16->Flags = v16->Flags & 0xFFFFFFF0 | 4;
          v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
        }
        while ( v16 );
        v18 = (struct _NDIS_OPEN_BLOCK *)v15[41];
        if ( v18 && v18->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v18, v6, v7, i, 1u);
          v19 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
          *(_DWORD *)(Pool2 + 80) = 0;
          *(_QWORD *)(Pool2 + 64) = 0LL;
        }
        else
        {
          *(_QWORD *)(Pool2 + 24) = v6;
          *(_QWORD *)(Pool2 + 8) = v15;
          *(_DWORD *)(Pool2 + 16) = 1;
          *(_QWORD *)Pool2 = a1;
          *(_QWORD *)(Pool2 + 32) = v17;
          *(_DWORD *)(Pool2 + 40) = v7;
          *(_DWORD *)(Pool2 + 44) = i;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          if ( *(_QWORD *)(Pool2 + 64) || (v19 = (struct _NET_BUFFER_LIST **)(Pool2 + 64), *(_DWORD *)(Pool2 + 688)) )
          {
            if ( !*v15 || v7 )
              *(_BYTE *)(Pool2 + 692) = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
            v19 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
            if ( !v18 )
            {
              v21 = (struct _NDIS_OPEN_BLOCK *)v15[1];
              if ( v21 )
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v21);
              if ( v15[2] )
                ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
              v19 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
            }
          }
        }
        Number = v28;
        v22 = v26;
        if ( *(_BYTE *)(Pool2 + 692) )
        {
          v6 = *v19;
          if ( *v19 )
            goto LABEL_38;
        }
      }
      else
      {
        Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
        if ( Pool2 )
          goto LABEL_16;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v20,
            4,
            11,
            (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
        }
LABEL_38:
        if ( byte_14011F740 )
        {
          if ( (*((_DWORD *)a1 + 1468) & 2) != 0 )
          {
            v23 = *((_DWORD *)a1 + 1467);
            v10 = (v6->NblFlags & 0x8000) == 0;
            v29 = 0LL;
            LODWORD(v31) = 0;
            v30 = 0LL;
            v32 = 0LL;
            v33 = 0;
            if ( v10 )
            {
              if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
              {
                v24 = *((_QWORD *)a1 + 732);
                *((_QWORD *)&v29 + 1) = v6;
                LOWORD(v29) = 40;
                LOWORD(v32) = 12;
                LODWORD(v30) = 1;
                *(_QWORD *)((char *)&v30 + 4) = v23 | 0x100000000LL;
                v31 = 0LL;
                HIDWORD(v32) = 204;
                v33 = -536866809;
                (*(void (__fastcall **)(_QWORD, __int64, __int128 *, __int64 *, _QWORD))(*((_QWORD *)&xmmword_14011F760
                                                                                         + 1)
                                                                                       + 48LL))(
                  xmmword_14011F760,
                  v24,
                  &v29,
                  &v32,
                  0LL);
                ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
              }
            }
          }
        }
        ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)a1, v6, 1u, 0LL);
        v22 = v26;
      }
      if ( v22 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
      }
      else if ( Pool2 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      v4 = v27;
      Number = 0;
      goto LABEL_49;
    }
    ndisMDispatchReceiveNetBufferListsWithLock(a1, v6, v7, i, 1u);
LABEL_49:
    if ( *((_BYTE *)a1 + 32) < 6u && (*((_DWORD *)a1 + 30) & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
      *((_BYTE *)a1 + 89) = 0;
      *((_QWORD *)a1 + 233) = 0LL;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
    }
    *((_DWORD *)a1 + 811) += i;
    v4 += i;
    v27 = v4;
  }
  while ( Alignment );
  return v4;
}
