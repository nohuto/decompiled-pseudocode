/*
 * XREFs of PopRequestRead @ 0x140C013E8
 * Callers:
 *     PopDecompressCallback @ 0x140C00280 (PopDecompressCallback.c)
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopGetIoLocation @ 0x140BEF524 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x140C00B3C (PopHiberChecksumHiberFileData.c)
 *     ProducerBufferComplete @ 0x140C04568 (ProducerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140C047D0 (ProducerGetBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 */

unsigned __int64 __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r14
  unsigned int v5; // r13d
  unsigned int v6; // ebx
  __int64 v7; // rbp
  ULONG_PTR v8; // rsi
  int v9; // ecx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  int v13; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 IoLocation; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  __int64 v19; // r12
  unsigned __int64 v20; // r15
  __int64 v21; // rbp
  char v22; // r15
  int v23; // ebp
  unsigned __int64 v24; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned int v28; // [rsp+80h] [rbp+18h]

  result = (unsigned __int64)&retaddr;
  v28 = a3;
  v27 = a2;
  v4 = *(_QWORD *)(BugCheckParameter3 + 352);
  v5 = 0;
  v26 = 0LL;
  v6 = a3;
  v7 = a2;
  v8 = BugCheckParameter3;
  while ( *(_QWORD *)(v8 + 432) )
  {
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
    ++PopWatchdogTimerCount;
    v9 = *(_DWORD *)(v8 + 360);
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        ++qword_140F10BA0;
        v12 = __rdtsc();
        v13 = guard_dispatch_icall_no_overrides(2LL, v8 + 400);
        BugCheckParameter4 = v13;
        if ( v13 < 0 )
        {
          PopCheckpointSystemSleep(29LL);
          PopInternalAddToDumpFile(v8, 0x1F0u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(v8 + 184), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v8, BugCheckParameter4);
        }
        v15 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v15) << 32;
        result = (a2 | (unsigned int)v15) - v12;
        qword_140F10BB8 += result;
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return result;
        goto LABEL_10;
      }
      PopHiberChecksumHiberFileData(v8, 0, *(_QWORD *)(v8 + 408), *(_QWORD *)(v8 + 416), *(_QWORD *)(v8 + 392));
      v10 = __rdtsc();
      qword_140F10B90 += v10 - *(_QWORD *)(v8 + 368);
      ProducerBufferComplete(v7, *(_QWORD *)(v8 + 416), *(unsigned int *)(v8 + 392), *(unsigned int *)(v8 + 392));
      v11 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v11) << 32;
      qword_140F10BC0 += (a2 | (unsigned int)v11) - v10;
      *(_QWORD *)(v8 + 432) -= *(_QWORD *)(v8 + 392);
      result = *(_QWORD *)(v8 + 384);
      *(_QWORD *)(v8 + 408) += result;
      *(_QWORD *)(v8 + 376) += result;
      *(_QWORD *)(v8 + 384) = 0LL;
      *(_DWORD *)(v8 + 360) = 0;
    }
    else
    {
      PopHiberCheckForDebugBreak();
      IoLocation = PopGetIoLocation(*(_QWORD *)(v8 + 176), *(_QWORD *)(v8 + 408), &v26);
      v17 = (unsigned __int64)*(unsigned int *)(v8 + 440) << 12;
      *(_QWORD *)(v8 + 400) = IoLocation;
      v18 = v17 - *(_QWORD *)(v8 + 376) % v17;
      if ( v18 >= v26 )
        v18 = v26;
      result = ProducerGetBuffer(v7, (unsigned int)v18, v6);
      v19 = result;
      if ( !result )
        return result;
      *(_QWORD *)(v8 + 416) = result;
      *(_QWORD *)v4 = 0LL;
      *(_DWORD *)(v4 + 40) = v18;
      *(_QWORD *)(v4 + 24) = result;
      *(_WORD *)(v4 + 10) = 1;
      v20 = (v18 + (result & 0xFFF) + 4095) >> 12;
      *(_QWORD *)(v4 + 32) = result & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v4 + 44) = result & 0xFFF;
      *(_WORD *)(v4 + 8) = 8 * (v20 + 6);
      if ( v20 )
      {
        v21 = 0LL;
        do
        {
          ++v5;
          *(_QWORD *)(v4 + 8 * v21 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v19 + (v21 << 12))).QuadPart >> 12;
          v21 = v5;
        }
        while ( v5 < v20 );
        v6 = v28;
      }
      v22 = *(_BYTE *)(v8 + 424);
      v5 = 0;
      *(_QWORD *)(v8 + 368) = __rdtsc();
      v23 = guard_dispatch_icall_no_overrides(v22 != 0, v8 + 400);
      if ( v23 == -1073741637 )
      {
        if ( !v22 )
          goto LABEL_29;
        *(_BYTE *)(v8 + 424) = 0;
        *(_QWORD *)(v8 + 368) = __rdtsc();
        v23 = guard_dispatch_icall_no_overrides(0LL, v8 + 400);
      }
      if ( v23 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_29:
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v8 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v8, v23);
      }
      v24 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v24) << 32;
      qword_140F10BB8 += (a2 | (unsigned int)v24) - *(_QWORD *)(v8 + 368);
      result = v18;
      BugCheckParameter3 = *(_QWORD *)(v8 + 432);
      *(_QWORD *)(v8 + 384) = v18;
      if ( v18 >= BugCheckParameter3 )
        result = BugCheckParameter3;
      *(_QWORD *)(v8 + 392) = result;
      if ( v22 && v23 )
      {
        v7 = v27;
        *(_DWORD *)(v8 + 360) = 1;
      }
      else
      {
LABEL_10:
        v7 = v27;
        *(_DWORD *)(v8 + 360) = 2;
      }
    }
  }
  return result;
}
