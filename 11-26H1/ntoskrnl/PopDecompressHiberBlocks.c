/*
 * XREFs of PopDecompressHiberBlocks @ 0x140C002A4
 * Callers:
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlDecompressBufferEx @ 0x140463B30 (RtlDecompressBufferEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x140514654 (MmMapMemoryDumpMdlEx2.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x14061AD08 (RtlDecompressBufferProgress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopReadProducerConsumerBuffer @ 0x140C0127C (PopReadProducerConsumerBuffer.c)
 *     ConsumerBufferComplete @ 0x140C043E0 (ConsumerBufferComplete.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140C046B0 (ProducerConsumerCopyFromContextBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140C0AB1C (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     BgDisplayProgressIndicator @ 0x140C5596C (BgDisplayProgressIndicator.c)
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
  unsigned int CompressedBufferSize; // eax
  int v35; // ecx
  unsigned __int64 v36; // rax
  unsigned int v37; // ecx
  int FinalUncompressedSize; // [rsp+28h] [rbp-D8h]
  int FinalUncompressedSizea; // [rsp+28h] [rbp-D8h]
  ULONG v42; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v43; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v44; // [rsp+60h] [rbp-A0h]
  void *v45; // [rsp+68h] [rbp-98h]
  unsigned __int64 v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int16 v51; // [rsp+98h] [rbp-68h]
  __int16 v52; // [rsp+9Ah] [rbp-66h]
  PUCHAR UncompressedBuffer; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+BCh] [rbp-44h]
  char v57; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v58[128]; // [rsp+140h] [rbp+40h] BYREF

  v49 = a5;
  memset_0(&v50, 0, 0xB0uLL);
  v8 = qword_140F10988;
  v9 = 0;
  v47 = 0;
  v48 = 0LL;
  v42 = 0;
  v45 = qword_140F10988;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140F10BE0 && *(_DWORD *)(BugCheckParameter3 + 208) == KeGetCurrentPrcb()->Number && byte_140F10920 )
      qword_140F10BE0 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( *(_DWORD *)(BugCheckParameter3 + 208) == (_DWORD)Number
      && !byte_140F10921
      && (!byte_140F10920 || (unsigned int)dword_140F10904 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_140E65F58 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140E65F50 = 1;
      }
      v13 = __rdtsc();
      qword_140F10BC8 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
    }
    v43 = 4;
    v14 = ConsumerPeekAndConsumeBuffer((_DWORD)v8, (unsigned int)&v43, a3, v10, a2);
    v15 = v14;
    if ( !v14 )
      break;
    LOBYTE(FinalUncompressedSize) = 1;
    v16 = (unsigned int *)PopReadProducerConsumerBuffer(v14, 4LL, &v47, v8, a2, FinalUncompressedSize);
    LOBYTE(FinalUncompressedSizea) = 1;
    v44 = 8 * (unsigned int)(unsigned __int8)*v16;
    ProducerConsumerBuffer = PopReadProducerConsumerBuffer(v15 + 4, v44, v58, v45, a2, FinalUncompressedSizea);
    v44 += v15 + 4;
    v19 = &v57;
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
    v51 = 8 * ((v25 >> 12) + 6);
    v50 = 0LL;
    v52 = 0;
    v54 = 0LL;
    v56 = 0;
    v55 = (_DWORD)v21 << 12;
    MmMapMemoryDumpMdlEx2(v24, v18, (__int64)&v50, 1);
    v26 = (*v16 >> 8) & 0x1FFFFF;
    v46 = __rdtsc();
    if ( v26 == (_DWORD)v25 )
    {
      v8 = v45;
      ProducerConsumerCopyFromContextBuffer(UncompressedBuffer, (unsigned int)v25);
      *(_QWORD *)(a2 + 72) += __rdtsc() - v46;
      v27 = __rdtsc();
      ConsumerBufferComplete(v8, v15, v43);
      *(_QWORD *)(a2 + 80) = __rdtsc() + *(_QWORD *)(a2 + 80) - v27;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(*(void **)(a2 + 24), v26);
      v28 = v43;
      v29 = v45;
      v44 = __rdtsc();
      *(_QWORD *)(a2 + 72) += v44 - v46;
      ConsumerBufferComplete(v29, v15, v28);
      v30 = __rdtsc();
      v31 = v49;
      *(_QWORD *)(a2 + 80) = v30 + *(_QWORD *)(a2 + 80) - v44;
      if ( v31 )
      {
        guard_dispatch_icall_no_overrides(BugCheckParameter3, (unsigned __int64)HIDWORD(v30) << 32);
        v48 = qword_140F10BB8;
      }
      v32 = *v16;
      v46 = __rdtsc();
      if ( *(_BYTE *)(BugCheckParameter3 + 490) )
      {
        if ( (unsigned int)v32 >> 29 < 2 || (unsigned int)v32 >> 29 == 4 )
          v33 = RtlDecompressBufferEx(
                  *((_WORD *)qword_14002F4F0 + (v32 >> 29)),
                  UncompressedBuffer,
                  v25,
                  *(PUCHAR *)(a2 + 24),
                  ((unsigned int)v32 >> 8) & 0x1FFFFF,
                  &v42,
                  *(PVOID *)(a2 + 16));
        else
          v33 = RtlDecompressBufferProgress(
                  *((_WORD *)qword_14002F4F0 + (v32 >> 29)),
                  UncompressedBuffer,
                  v25,
                  *(_QWORD *)(a2 + 24),
                  ((unsigned int)v32 >> 8) & 0x1FFFFF,
                  (__int64)&v42,
                  *(_QWORD *)(a2 + 16),
                  v31,
                  BugCheckParameter3);
      }
      else
      {
        CompressedBufferSize = ((unsigned int)v32 >> 8) & 0x1FFFFF;
        if ( v31 )
          v33 = RtlDecompressBufferProgress(
                  *((_WORD *)qword_14002F4F0 + (v32 >> 29)),
                  UncompressedBuffer,
                  v25,
                  *(_QWORD *)(a2 + 24),
                  CompressedBufferSize,
                  (__int64)&v42,
                  *(_QWORD *)(a2 + 16),
                  v31,
                  BugCheckParameter3);
        else
          v33 = RtlDecompressBufferEx(
                  *((_WORD *)qword_14002F4F0 + (v32 >> 29)),
                  UncompressedBuffer,
                  v25,
                  *(PUCHAR *)(a2 + 24),
                  CompressedBufferSize,
                  &v42,
                  *(PVOID *)(a2 + 16));
      }
      v35 = v33;
      v36 = __rdtsc();
      if ( v35 < 0 || v42 != (_DWORD)v25 )
      {
        *(_DWORD *)(BugCheckParameter3 + 204) = -1073741246;
        PopCheckpointSystemSleep(31LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1F0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, BugCheckParameter3, 0LL);
      }
      *(_QWORD *)(a2 + 64) += v36 - v46;
      if ( v31 )
        *(_QWORD *)(a2 + 64) = v48 + *(_QWORD *)(a2 + 64) - qword_140F10BB8;
      v37 = *v16;
      v8 = v45;
      v37 >>= 29;
      *(_QWORD *)((-(__int64)(v37 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + a2 + 152) += v25;
      *(_QWORD *)((-(__int64)(v37 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + a2 + 136) += v36 - v44;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
