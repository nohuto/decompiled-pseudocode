/*
 * XREFs of IopConnectInterrupt @ 0x140A9CA10
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x1407A2248 (IopConnectInterruptFullySpecified.c)
 *     IopConnectLineBasedInterrupt @ 0x140A9BEFC (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x140A9C1B0 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140A9D270 (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     KeAllocateInterrupt @ 0x1404BBFDC (KeAllocateInterrupt.c)
 *     KeFreeInterrupt @ 0x1404CE3A4 (KeFreeInterrupt.c)
 *     KeInitializeInterruptEx @ 0x140516588 (KeInitializeInterruptEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1407A66F8 (IopDestroyPassiveInterruptBlock.c)
 *     IopDestroyActiveConnectBlock @ 0x140A9CECC (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A9D024 (IopInitializeActiveConnectBlock.c)
 *     PnpTraceInterruptConnection @ 0x140A9D13C (PnpTraceInterruptConnection.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140A9D3F0 (IopAllocatePassiveInterruptBlock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectInterrupt(
        __int64 *a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(struct _KINTERRUPT *a1, void *a2),
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  __m128i v14; // xmm0
  int v15; // r13d
  USHORT epi16; // si
  unsigned __int64 v17; // rbx
  int v19; // ebx
  PVOID v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  _OWORD *v23; // rax
  _OWORD *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int64 v29; // r14
  __int64 Pool2; // rax
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // rcx
  __m128i v34; // xmm0
  char v35; // cl
  unsigned __int8 v36; // r15
  PSLIST_ENTRY Interrupt; // rax
  PSLIST_ENTRY *v38; // rdi
  __int64 v39; // rcx
  _WORD *v40; // rcx
  __int64 v41; // rcx
  unsigned __int16 *v42; // rsi
  _WORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 v48; // [rsp+8Ch] [rbp-7Ch]
  int v49; // [rsp+90h] [rbp-78h]
  unsigned int v50; // [rsp+94h] [rbp-74h]
  __m128i v51; // [rsp+98h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h]
  _DWORD *v53; // [rsp+B0h] [rbp-58h]
  __int64 ProcessorIndexFromNumber; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C0h] [rbp-48h]
  _BYTE v56[24]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-28h]
  bool v61; // [rsp+190h] [rbp+88h]
  char v62; // [rsp+190h] [rbp+88h]
  char v63; // [rsp+1A0h] [rbp+98h]
  char v64; // [rsp+1A8h] [rbp+A0h]

  memset_0(v56, 0, 0x50uLL);
  ProcNumber = 0;
  v63 = 0;
  *a1 = 0LL;
  v52 = 0LL;
  IopInitializeActiveConnectBlock(a11, v56);
  v14 = *(__m128i *)(a11 + 32);
  v15 = *(_DWORD *)(a11 + 24);
  epi16 = _mm_extract_epi16(v14, 4);
  v50 = *(_DWORD *)(a11 + 12);
  v49 = v15;
  v51 = v14;
  v48 = epi16;
  v17 = *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * epi16 + 4) & v14.m128i_i64[0];
  v64 = *(_BYTE *)(a11 + 16);
  v51.m128i_i64[0] = v17;
  if ( !*(_DWORD *)(a11 + 8)
    && !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(a11 + 64))
    && (unsigned int)(*(_DWORD *)(a11 + 20) - 3) <= 1 )
  {
    v63 = 1;
    v49 = 0;
  }
  v61 = a8 == 0;
  if ( epi16 < KeQueryActiveGroupCount()
    && v17
    && (v17 & *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * epi16 + 4)) == v17
    && !(v51.m128i_i16[7] | (unsigned __int16)(v51.m128i_i16[6] | v51.m128i_i16[5]))
    && (LOBYTE(v29) = __popcnt(v17), (_BYTE)v29) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v31 = Pool2;
    if ( Pool2 )
    {
      KeInitializeDpc((PRKDPC)(Pool2 + 432), 0LL, 0LL);
      v32 = v49;
      v33 = v31;
      *(_OWORD *)(v31 + 16) = *(_OWORD *)a11;
      *(_OWORD *)(v31 + 32) = *(_OWORD *)(a11 + 16);
      *(_OWORD *)(v31 + 48) = *(_OWORD *)(a11 + 32);
      *(_OWORD *)(v31 + 64) = *(_OWORD *)(a11 + 48);
      *(_OWORD *)(v31 + 80) = *(_OWORD *)(a11 + 64);
      v34 = v51;
      *(_OWORD *)(v31 + 96) = *(_OWORD *)(a11 + 80);
      *(_DWORD *)(v31 + 40) = v32;
      *(__m128i *)(v31 + 48) = v34;
      if ( a7 )
        v33 = a7;
      *(_BYTE *)(v31 + 400) = v61;
      v55 = v33;
      if ( !a8 )
        v52 = v31 + 408;
      v35 = 0;
      ProcNumber.Group = v48;
      v36 = 0;
      v62 = 0;
      *(_QWORD *)(v31 + 8) = v17;
      ProcNumber.Reserved = 0;
      while ( v35 < (char)v29 )
      {
        if ( _bittest64((const __int64 *)&v17, v36) )
        {
          ProcNumber.Number = v36;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          Interrupt = KeAllocateInterrupt(KiProcessorBlock[ProcessorIndexFromNumber]);
          v53 = Interrupt;
          if ( !Interrupt )
          {
            v19 = -1073741670;
LABEL_40:
            if ( (char)v29 > 0 )
            {
              v38 = (PSLIST_ENTRY *)(v31 + 504);
              v29 = (unsigned __int8)v29;
              do
              {
                if ( *v38 )
                  KeFreeInterrupt(*v38);
                ++v38;
                --v29;
              }
              while ( v29 );
            }
            ExFreePoolWithTag((PVOID)v31, 0x6E696F49u);
            goto LABEL_20;
          }
          memset_0(Interrupt, 0, 0x120uLL);
          KeInitializeInterruptEx(
            v53,
            a3,
            a4,
            a5,
            a6,
            v55,
            v52,
            v50,
            v64,
            a8,
            v49,
            a9,
            ProcessorIndexFromNumber,
            v46,
            v63,
            v31 + 16);
          *(_QWORD *)(v31 + 8LL * v62 + 504) = v53;
          v35 = ++v62;
        }
        ++v36;
      }
      if ( !a8 )
      {
        v19 = IopAllocatePassiveInterruptBlock(v31 + 16, &v51);
        if ( v19 < 0 )
          goto LABEL_40;
      }
      v20 = Object;
      if ( Object )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
      }
      v19 = KeConnectInterrupt((__int64 *)(v31 + 504), v29, v31 + 16);
      if ( Object )
      {
        KeSetEvent((PRKEVENT)Object, 0, 0);
        KeLeaveCriticalRegion();
      }
      if ( v19 < 0 )
      {
        if ( !a8 )
          IopDestroyPassiveInterruptBlock(v50);
        goto LABEL_40;
      }
      if ( a2 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
        if ( !v22 || (*(_DWORD *)(v22 + 396) & 0x20000) != 0 )
        {
          IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
          v39 = *(_QWORD *)(a2 + 8);
          if ( v39 )
          {
            IoAddTriageDumpDataBlock(v39, (PVOID)(unsigned int)*(__int16 *)(v39 + 2));
            v40 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
            if ( *v40 )
            {
              IoAddTriageDumpDataBlock((ULONG)v40, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
            }
          }
          v41 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
          if ( v41 )
          {
            v42 = (unsigned __int16 *)(v41 + 40);
            IoAddTriageDumpDataBlock(v41, (PVOID)0x388);
            if ( *v42 )
            {
              IoAddTriageDumpDataBlock((ULONG)v42, (PVOID)2);
              IoAddTriageDumpDataBlock(*((_QWORD *)v42 + 1), (PVOID)*v42);
            }
            v43 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
            if ( *v43 )
            {
              IoAddTriageDumpDataBlock((ULONG)v43, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
            }
            v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            if ( v44 && *(_WORD *)(v44 + 56) )
            {
              IoAddTriageDumpDataBlock(v44 + 56, (PVOID)2);
              v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v45 + 64), (PVOID)*(unsigned __int16 *)(v45 + 56));
            }
          }
          KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
        }
        ObfReferenceObjectWithTag((PVOID)a2, 0x54706E50u);
        *(_QWORD *)(v31 + 496) = a2;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 312) + 96LL));
      }
      v23 = *(_OWORD **)(v31 + 504);
      v24 = (_OWORD *)(v31 + 112);
      v25 = 2LL;
      v26 = 128LL;
      do
      {
        *v24 = *v23;
        v24[1] = v23[1];
        v24[2] = v23[2];
        v24[3] = v23[3];
        v24[4] = v23[4];
        v24[5] = v23[5];
        v24[6] = v23[6];
        v24 += 8;
        v27 = v23[7];
        v23 += 8;
        *(v24 - 1) = v27;
        --v25;
      }
      while ( v25 );
      LOBYTE(v26) = 1;
      v19 = 0;
      *v24 = *v23;
      v24[1] = v23[1];
      *a1 = v31;
      PnpTraceInterruptConnection(v26);
    }
    else
    {
      v19 = -1073741670;
    }
  }
  else
  {
    v19 = -1073741811;
  }
LABEL_20:
  IopDestroyActiveConnectBlock(v56);
  return (unsigned int)v19;
}
