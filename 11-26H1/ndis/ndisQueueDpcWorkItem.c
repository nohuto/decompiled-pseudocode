/*
 * XREFs of ndisQueueDpcWorkItem @ 0x14001AA60
 * Callers:
 *     ndisInterruptDpc @ 0x140019F90 (ndisInterruptDpc.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C8844 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 */

void __fastcall ndisQueueDpcWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  unsigned int Number; // r15d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  KIRQL v14; // al
  struct _NDIS_REFCOUNT_BLOCK *v15; // rcx
  KIRQL v16; // bl
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // edx
  char *v21; // rdi
  __int64 *v22; // rax
  KIRQL v23; // al
  ULONG_PTR v24; // r9
  KIRQL v25; // bp
  __int64 v26; // rax
  LARGE_INTEGER v27; // rdx
  struct _KDPC *v28; // r8
  __int64 v29; // r8
  unsigned __int8 i; // cl
  _BYTE *v31; // rdx
  char v32; // al
  int v33; // ebx
  int v34; // edx
  struct _KEVENT *v35; // rcx
  ULONG_PTR v36; // rbx
  unsigned int v37; // edx
  int v38; // ecx
  __int64 v39; // [rsp+30h] [rbp-38h]
  KSPIN_LOCK *SpinLock; // [rsp+78h] [rbp+10h]

  v5 = *(_QWORD *)(a2 + 96);
  Number = KeGetPcr()->Prcb.Number;
  v11 = *(_DWORD *)(v5 + 48);
  if ( v11 || *(_DWORD *)(v5 + 80) )
  {
    v12 = *(_QWORD *)(v5 + 40);
    if ( !v12 )
      v12 = *(_QWORD *)(v5 + 40);
    if ( (v11 & 0x800000) != 0 )
    {
      v13 = v12 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v13 + 288);
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4432));
  v15 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 4896);
  v16 = v14;
  if ( v15 )
    NdisReferenceWithTag(v15, 0x4Du);
  v17 = *(_DWORD *)(v5 + 4440) + 1;
  *(_DWORD *)(v5 + 4440) = v17;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xDu,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      v5,
      v17);
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 4432), v16);
  v18 = a3;
  if ( !*(_BYTE *)(a2 + 193) )
    v18 = 0;
  v19 = *(_QWORD *)(a2 + 216) + 80LL * (Number + ndisMaxNumberOfProcessors * v18);
  SpinLock = (KSPIN_LOCK *)(v19 + 72);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 72));
  if ( (*(_DWORD *)(v19 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        20,
        25,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        v5);
    }
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4432));
    v24 = *(_QWORD *)(v5 + 4896);
    v25 = v23;
    if ( v24 && v24 - 2 > 1 )
    {
      if ( v24 == 1 )
        KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v24 + 2) <= 0x4Du )
        KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v24, 0x4DuLL);
      if ( *(_BYTE *)(v24 + 1) )
      {
        if ( *(_BYTE *)(v24 + 1) == 1 )
        {
          v36 = v24 + 4936;
          v37 = *(_DWORD *)(v24 + 4992);
          v38 = (unsigned __int16)v37 >> 1;
          if ( v37 >> 17 < 0x3FFE && v38 == (v37 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 4936));
            *(_DWORD *)(v36 + 56) &= 0x10001u;
          }
          else
          {
            if ( v38 == 0 && (v37 & 1) == 0 )
              KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v24, 0x4DuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 4936), 0);
          }
        }
      }
      else
      {
        v29 = *(_QWORD *)(v24 + 8);
        if ( v29 )
        {
          for ( i = 0; i < *(_BYTE *)(v24 + 3); ++i )
          {
            v31 = (_BYTE *)(v29 + 2LL * i);
            if ( *v31 == 77 )
            {
              v32 = v31[1];
              if ( v32 )
              {
                v31[1] = v32 - 1;
                goto LABEL_41;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)(v24 + 24), 0xDu) )
          KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v24, 0x4DuLL);
      }
    }
LABEL_41:
    v33 = *(_DWORD *)(v5 + 4440) - 1;
    *(_DWORD *)(v5 + 4440) = v33;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v39) = v33;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xEu,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        v5,
        v39);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 4432), v25);
    if ( !v33 )
    {
      v35 = *(struct _KEVENT **)(v5 + 1608);
      if ( v35 )
        KeSetEvent(v35, 0, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v34,
        20,
        26,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        v5);
    }
  }
  else
  {
    *(_DWORD *)(v19 + 68) = 1;
    *(_QWORD *)(v19 + 32) = a1;
    *(_QWORD *)(v19 + 40) = a2;
    *(_QWORD *)(v19 + 48) = a3;
    *(_QWORD *)(v19 + 56) = a4;
    *(_DWORD *)(v19 + 64) = Number;
    if ( a5 )
    {
      if ( HIBYTE(word_14011EFA4) )
        ndisTraceQueueWorkItem();
      *(_DWORD *)(v19 + 68) |= 2u;
      v21 = (char *)qword_14011D440 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v21 + 2);
      v22 = (__int64 *)*((_QWORD *)v21 + 1);
      if ( (char *)*v22 != v21 )
        __fastfail(3u);
      *(_QWORD *)v19 = v21;
      *(_QWORD *)(v19 + 8) = v22;
      *v22 = v19;
      *((_QWORD *)v21 + 1) = v19;
      ++*((_DWORD *)v21 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v21 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v21 + 1, 0, 1, 0);
      LODWORD(v26) = KeGetPcr()->Prcb.Number;
      if ( !_InterlockedExchange((volatile __int32 *)qword_14011D438 + v26, 1) )
      {
        v27.QuadPart = -1LL;
        v28 = (struct _KDPC *)((char *)qword_14011D430 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
        if ( DueTime.QuadPart )
          v27 = DueTime;
        KeSetTimer((PKTIMER)qword_14011D430 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number, v27, v28);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v19, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel(SpinLock);
}
