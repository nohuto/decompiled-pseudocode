/*
 * XREFs of ?ndisDoOidRequests@@YAXPEAX@Z @ 0x14004B070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *a1)
{
  __int64 v1; // rbx
  int v3; // edx
  KIRQL v4; // al
  ULONG_PTR v5; // r8
  KIRQL v6; // bp
  ULONG_PTR v7; // rdi
  unsigned int v8; // edx
  int v9; // edi
  int v10; // edx
  struct _KEVENT *v11; // rcx
  __int64 v12; // r10
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // cl
  _BYTE *v15; // rdx
  char v16; // al
  KIRQL v17; // r14
  bool v18; // zf
  KIRQL v19; // r15
  unsigned __int16 v20; // cx
  char v21[8]; // [rsp+30h] [rbp-38h]

  v1 = a1[7];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a1[7]);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        20,
        25,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        v1);
    }
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 4432));
    v5 = *(_QWORD *)(v1 + 4896);
    v6 = v4;
    if ( v5 && v5 - 2 > 1 )
    {
      if ( v5 == 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v5 + 2) <= 0x47u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v5, 0x47uLL);
      if ( *(_BYTE *)(v5 + 1) )
      {
        if ( *(_BYTE *)(v5 + 1) == 1 )
        {
          v7 = v5 + 4552;
          v8 = *(_DWORD *)(v5 + 4608);
          if ( v8 >> 17 < 0x3FFE && (unsigned __int16)v8 >> 1 == (v8 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v5 + 4552));
            *(_DWORD *)(v7 + 56) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v8 >> 1) && (v8 & 1) == 0 )
              ndisReportRefcountImbalance(*(_QWORD *)(v1 + 4896), 0x47u);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v5 + 4552), 0);
          }
        }
      }
      else
      {
        v12 = *(_QWORD *)(v5 + 8);
        if ( v12 && (v13 = *(_BYTE *)(v5 + 3), v14 = 0, v13) )
        {
          while ( 1 )
          {
            v15 = (_BYTE *)(v12 + 2LL * v14);
            if ( *v15 == 71 )
            {
              v16 = v15[1];
              if ( v16 )
                break;
            }
            if ( ++v14 >= v13 )
              goto LABEL_30;
          }
          v15[1] = v16 - 1;
        }
        else
        {
LABEL_30:
          if ( !_bittestandreset((signed __int32 *)(v5 + 24), 7u) )
            ndisReportRefcountImbalance(v5, 0x47u);
        }
      }
    }
    v9 = *(_DWORD *)(v1 + 4440) - 1;
    *(_DWORD *)(v1 + 4440) = v9;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v21 = v9;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xEu,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        v1,
        *(_QWORD *)v21);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 4432), v6);
    if ( !v9 )
    {
      v11 = *(struct _KEVENT **)(v1 + 1608);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        20,
        26,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        v1);
    }
  }
  else if ( *(_BYTE *)v1 == 5 )
  {
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal,
           (PVOID)v1,
           (unsigned int)Size,
           0,
           0LL) < 0 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
      v18 = *(_BYTE *)(v1 + 224) == 0;
      *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
      *(_BYTE *)(v1 + 232) = 1;
      if ( v18 )
      {
        v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 72));
        if ( !*(_BYTE *)(v1 + 82) )
        {
          v20 = *(_WORD *)(v1 + 80);
          if ( v20 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
          }
          else
          {
            *(_WORD *)(v1 + 80) = v20 + 1;
            NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v1 + 88), 1u);
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 72), v19);
        *(_BYTE *)(v1 + 224) = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 192), NormalWorkQueue);
      }
      *(_QWORD *)(v1 + 152) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v17);
    }
    ndisDereferenceRef((PKSPIN_LOCK)(v1 + 312), 0xCu);
  }
  ExFreePoolWithTag(a1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      0,
      v1);
}
