/*
 * XREFs of PopDecompressHiberBlocks @ 0x140BFA2A4
 * Callers:
 *     PopRestoreHiberContext @ 0x140C03138 (PopRestoreHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     RtlDecompressBufferEx @ 0x14046A3B0 (RtlDecompressBufferEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x14051ABE4 (MmMapMemoryDumpMdlEx2.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140600824 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x140617CB8 (RtlDecompressBufferProgress.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopReadProducerConsumerBuffer @ 0x140BFB27C (PopReadProducerConsumerBuffer.c)
 *     ConsumerBufferComplete @ 0x140BFE1D8 (ConsumerBufferComplete.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140BFE4A8 (ProducerConsumerCopyFromContextBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140C0490C (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140C04A64 (PopHiberCheckForDebugBreak.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     BgDisplayProgressIndicator @ 0x140C4F96C (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, char a4, __int64 a5)
{
  void *v8; // r12
  unsigned int v9; // esi
  int v10; // r9d
  __int64 Number; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int *v16; // r12
  __int64 ProducerConsumerBuffer; // rax
  unsigned __int64 v18; // rdx
  char *v19; // r10
  _QWORD *v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // r11
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  void *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int64 v32; // rcx
  int v33; // eax
  int v34; // ecx
  unsigned __int64 v35; // rax
  unsigned int v36; // ecx
  int *v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  void *v44; // [rsp+68h] [rbp-98h]
  unsigned __int64 v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+78h] [rbp-88h] BYREF
  char *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h] BYREF
  __int16 v50; // [rsp+98h] [rbp-68h]
  __int16 v51; // [rsp+9Ah] [rbp-66h]
  void *v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  char v56; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v57[128]; // [rsp+140h] [rbp+40h] BYREF

  v48 = a5;
  memset_0(&v49, 0, 0xB0uLL);
  v8 = qword_140F0FE08;
  v9 = 0;
  v46 = 0;
  v47 = 0LL;
  v41 = 0;
  v44 = qword_140F0FE08;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !stru_140F10070.SchedulerApc.SystemArgument2
      && *(_DWORD *)(BugCheckParameter3 + 208) == KeGetCurrentPrcb()->Number
      && byte_140F0FDA0 )
    {
      stru_140F10070.SchedulerApc.SystemArgument2 = (PVOID)KeQueryPerformanceCounter(0LL).QuadPart;
    }
    Number = KeGetCurrentPrcb()->Number;
    if ( *(_DWORD *)(BugCheckParameter3 + 208) == (_DWORD)Number
      && !byte_140F0FDA1
      && (!byte_140F0FDA0 || (unsigned int)dword_140F0FD84 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_140E65D3E )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140E65D3D = 1;
      }
      v13 = __rdtsc();
      stru_140F10070.SchedulerApc.Reserved[2] = (char *)stru_140F10070.SchedulerApc.Reserved[2]
                                              + (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13)
                                              - v12;
    }
    v42 = 4;
    v14 = ConsumerPeekAndConsumeBuffer((_DWORD)v8, (unsigned int)&v42, a3, v10, a2);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)-2147483614;
    LOBYTE(v38) = 1;
    v16 = (unsigned int *)PopReadProducerConsumerBuffer(v14, 4LL, &v46, v8, a2, (_DWORD)v38);
    LOBYTE(v39) = 1;
    v43 = 8 * (unsigned int)(unsigned __int8)*v16;
    ProducerConsumerBuffer = PopReadProducerConsumerBuffer(v15 + 4, v43, v57, v44, a2, v39);
    v43 += v15 + 4;
    v19 = &v56;
    v20 = (_QWORD *)ProducerConsumerBuffer;
    v21 = 0LL;
    if ( (unsigned __int8)*v16 )
    {
      v22 = (unsigned __int8)*v16;
      do
      {
        v23 = *v20 >> 4;
        v18 = v23 + (*v20 & 0xFLL) + 1;
        v21 += (*v20 & 0xFLL) + 1;
        while ( v23 < v18 )
        {
          *(_QWORD *)v19 = v23++;
          v19 += 8;
        }
        ++v20;
        --v22;
      }
      while ( v22 );
    }
    if ( v21 > *(unsigned int *)(BugCheckParameter3 + 316) )
    {
      PopCheckpointSystemSleep(31LL);
      PopInternalAddToDumpFile(BugCheckParameter3, 0x1F0u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, BugCheckParameter3, 0LL);
    }
    v24 = *(_QWORD *)(a2 + 8);
    v25 = (unsigned int)((_DWORD)v21 << 12);
    v50 = 8 * ((v25 >> 12) + 6);
    v49 = 0LL;
    v51 = 0;
    v53 = 0LL;
    v55 = 0;
    v54 = (_DWORD)v21 << 12;
    MmMapMemoryDumpMdlEx2(v24, v18, (__int64)&v49, 1);
    v26 = (*v16 >> 8) & 0x1FFFFF;
    v45 = __rdtsc();
    if ( v26 != (_DWORD)v25 )
    {
      ProducerConsumerCopyFromContextBuffer(*(void **)(a2 + 24), v26);
      v28 = v42;
      v29 = v44;
      v43 = __rdtsc();
      *(_QWORD *)(a2 + 72) += v43 - v45;
      ConsumerBufferComplete(v29, v15, v28);
      v30 = __rdtsc();
      v31 = v48;
      *(_QWORD *)(a2 + 80) = v30 + *(_QWORD *)(a2 + 80) - v43;
      if ( v31 )
      {
        guard_dispatch_icall_no_overrides(BugCheckParameter3, (unsigned __int64)HIDWORD(v30) << 32);
        v47 = (char *)stru_140F10070.SchedulerApc.Reserved[0];
      }
      v32 = *v16;
      v45 = __rdtsc();
      if ( *(_BYTE *)(BugCheckParameter3 + 490) )
      {
        if ( (unsigned int)v32 >> 29 < 2 || (unsigned int)v32 >> 29 == 4 )
        {
          v38 = &v41;
          goto LABEL_29;
        }
LABEL_32:
        v33 = RtlDecompressBufferProgress(
                *((_WORD *)qword_14002F9B8 + (v32 >> 29)),
                v52,
                v25,
                *(_QWORD *)(a2 + 24),
                ((unsigned int)v32 >> 8) & 0x1FFFFF,
                (__int64)&v41,
                *(_QWORD *)(a2 + 16),
                v31,
                BugCheckParameter3);
      }
      else
      {
        if ( v31 )
          goto LABEL_32;
        v38 = &v41;
LABEL_29:
        v33 = RtlDecompressBufferEx(*((_WORD *)qword_14002F9B8 + (v32 >> 29)), (__int64)v52, v25);
      }
      v34 = v33;
      v35 = __rdtsc();
      if ( v34 < 0 || v41 != (_DWORD)v25 )
      {
        *(_DWORD *)(BugCheckParameter3 + 204) = -1073741246;
        PopCheckpointSystemSleep(31LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1F0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, BugCheckParameter3, 0LL);
      }
      *(_QWORD *)(a2 + 64) += v35 - v45;
      if ( v31 )
        *(_QWORD *)(a2 + 64) = &v47[*(_QWORD *)(a2 + 64) - (unsigned __int64)stru_140F10070.SchedulerApc.Reserved[0]];
      v36 = *v16;
      v8 = v44;
      v36 >>= 29;
      *(_QWORD *)((-(__int64)(v36 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + a2 + 152) += v25;
      *(_QWORD *)((-(__int64)(v36 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + a2 + 136) += v35 - v43;
      goto LABEL_38;
    }
    v8 = v44;
    ProducerConsumerCopyFromContextBuffer(v52, (unsigned int)v25);
    *(_QWORD *)(a2 + 72) += __rdtsc() - v45;
    v27 = __rdtsc();
    ConsumerBufferComplete(v8, v15, v42);
    *(_QWORD *)(a2 + 80) = __rdtsc() + *(_QWORD *)(a2 + 80) - v27;
LABEL_38:
    if ( !a4 )
      return v9;
  }
}
