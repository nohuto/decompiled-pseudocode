/*
 * XREFs of PopRestoreHiberContext @ 0x140C09348
 * Callers:
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IoInitializeDumpStack @ 0x1405C9B00 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x1405C9BE4 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     PopHiberReadChecksums @ 0x140C0F654 (PopHiberReadChecksums.c)
 *     BgLibraryInitialize @ 0x140C55AD4 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  __int64 Number; // rdi
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // r12
  _DWORD *v10; // rsi
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rsi
  __int64 v26; // r11
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // ebp
  unsigned int v31; // r9d
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int128 v39; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+40h] [rbp-48h]
  unsigned __int64 v41; // [rsp+90h] [rbp+8h]
  void *v42; // [rsp+98h] [rbp+10h]

  v39 = 0LL;
  v40 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( (unsigned int)Number < *(_DWORD *)(BugCheckParameter3 + 288) )
  {
    v4 = 0LL;
    v5 = *(_QWORD *)(BugCheckParameter3 + 296) + 168 * Number;
    *(_QWORD *)(v5 + 80) = 0LL;
    if ( (_DWORD)Number == *(_DWORD *)(BugCheckParameter3 + 208) )
    {
      byte_140E65F58 = 0;
      v6 = __rdtsc();
      if ( qword_140E65F38 )
        byte_140E65F58 = (int)BgLibraryInitialize(qword_140E65F38, 0xFFFFFFFFLL) >= 0;
      v7 = __rdtsc();
      qword_140F10BC8 += (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - v6;
    }
    if ( !(_DWORD)Number )
    {
      v42 = qword_140F10988;
      v8 = *(_QWORD **)(BugCheckParameter3 + 216);
      v41 = __rdtsc();
      if ( v8[11] == v8[70] )
        v9 = v8[73];
      else
        v9 = 0LL;
      *(_QWORD *)(BugCheckParameter3 + 432) = v9;
      v10 = qword_140F10988;
      v11 = *(_DWORD *)(BugCheckParameter3 + 312);
      v12 = *(_QWORD *)(BugCheckParameter3 + 304);
      memset_0(qword_140F10988, 0, 0x40uLL);
      v10[6] = 0;
      *(_QWORD *)v10 = v12;
      v10[2] = v11;
      *((_QWORD *)v10 + 2) = v9;
      *(_BYTE *)(BugCheckParameter3 + 3) = 1;
      IoNotifyDump(2LL, v13);
      if ( *(_QWORD *)(BugCheckParameter3 + 432) )
      {
        *(_DWORD *)(BugCheckParameter3 + 200) = 9;
        *(_QWORD *)(BugCheckParameter3 + 176) = &v39;
        *(_QWORD *)&v39 = qword_140F108F8;
        *((_QWORD *)&v39 + 1) = qword_140F108F8;
        v40 = 0LL;
        guard_dispatch_icall_no_overrides(0LL, v14);
        v15 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 184));
        v16 = v15;
        if ( v15 < 0 || PopSimulateHiberBugcheck == 4 )
        {
          PopCheckpointSystemSleep(28LL);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
        }
        v17 = __rdtsc();
        v18 = v41;
        qword_140F10BA8 = (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v41;
        v19 = *(_QWORD *)(BugCheckParameter3 + 184);
        *(_DWORD *)(BugCheckParameter3 + 360) = 0;
        *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
        if ( *(_QWORD *)(v19 + 128) )
          *(_BYTE *)(BugCheckParameter3 + 424) = 1;
        PopHiberReadChecksums(BugCheckParameter3);
        v20 = *(_QWORD *)(BugCheckParameter3 + 216);
        *(_DWORD *)(BugCheckParameter3 + 200) = 10;
        *(_QWORD *)(BugCheckParameter3 + 408) = *(_QWORD *)(v20 + 112) << 12;
        v21 = __rdtsc();
        while ( *(_QWORD *)(BugCheckParameter3 + 432) )
        {
          PopRequestRead(BugCheckParameter3, (__int64)v42, 1u);
          if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 0, (__int64)PopDecompressCallback) == -2147483614
            && !*(_DWORD *)(BugCheckParameter3 + 360) )
          {
            _mm_pause();
          }
        }
        PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 1, 0LL);
        if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 184) + 72LL) )
          guard_dispatch_icall_no_overrides(v22, v14);
      }
      else
      {
        v18 = v41;
        v21 = 0LL;
      }
      IoNotifyDump(3LL, v14);
      guard_dispatch_icall_no_overrides(1LL, v23);
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 12) != *(_DWORD *)(BugCheckParameter3 + 288) )
        _mm_pause();
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = __rdtsc();
      v29 = (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v21;
      v30 = 0;
      qword_140F10D38 = v29;
      v31 = *(_DWORD *)(BugCheckParameter3 + 288);
      if ( v31 )
      {
        v32 = *(_QWORD *)(BugCheckParameter3 + 296);
        do
        {
          v33 = v4;
          v34 = 168LL * v30;
          qword_140F10B88 += *(_QWORD *)(v34 + v32 + 64);
          qword_140F10B98 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v34 + 72);
          qword_140F10BC0 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v34 + 80);
          v32 = *(_QWORD *)(BugCheckParameter3 + 296);
          v31 = *(_DWORD *)(BugCheckParameter3 + 288);
          v4 = *(_QWORD *)(v34 + v32 + 64) + *(_QWORD *)(v34 + v32 + 72);
          if ( v4 <= v33 )
            v4 = v33;
          v24 += *(_QWORD *)(v34 + v32 + 128);
          v25 += *(_QWORD *)(v34 + v32 + 136);
          ++v30;
          v26 += *(_QWORD *)(v34 + v32 + 144);
          v27 += *(_QWORD *)(v34 + v32 + 152);
        }
        while ( v30 < v31 );
      }
      v35 = v24 / (v26 + 1);
      v36 = v25 / (v27 + 1);
      if ( v36 > v35 )
      {
        v37 = 100 * (qword_140F10B90 * v31 / (v26 + v27 + 1) - v35) / (v36 - v35);
        if ( v37 > 99 )
        {
          dword_140F10924 = 99;
LABEL_40:
          v38 = __rdtsc();
          qword_140F10BB0 = (((unsigned __int64)HIDWORD(v38) << 32) | (unsigned int)v38) - v18;
          result = (struct _KPRCB *)(qword_140F10BB0 - qword_140F10BA8 - v4);
          qword_140F10B80 = (__int64)result;
          return result;
        }
        dword_140F10924 = v37;
        if ( (int)v37 >= 1 )
          goto LABEL_40;
      }
      dword_140F10924 = 1;
      goto LABEL_40;
    }
    while ( !*(_BYTE *)(BugCheckParameter3 + 3) )
      _mm_pause();
    result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, v5, 0, 1, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
  }
  return result;
}
