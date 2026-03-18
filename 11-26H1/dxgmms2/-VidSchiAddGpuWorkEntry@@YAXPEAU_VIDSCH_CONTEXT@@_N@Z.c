/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x140026AD0
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1400271BC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     McTemplateK0pqIR1_EtwWriteTransfer @ 0x140026C50 (McTemplateK0pqIR1_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2, int a3)
{
  _DWORD *v4; // rdi
  unsigned int v5; // edx
  __int64 v7; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // r9
  __int64 Pool2; // rax
  void (__fastcall *v11)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  v4 = (_DWORD *)((char *)a1 + 992);
  v5 = *((_DWORD *)a1 + 248);
  if ( v5 >= 0x80 )
  {
    v7 = *((_QWORD *)a1 + 125);
    v4 = (_DWORD *)((char *)a1 + 992);
    if ( v7 )
    {
      if ( (byte_14008A202 & 8) != 0 )
      {
        v9 = *((_QWORD *)a1 + 7);
        if ( !v9 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v9) = (_DWORD)a1;
        McTemplateK0pqIR1_EtwWriteTransfer(v7, v5, a3, v9, v5, v7);
      }
      *((_DWORD *)a1 + 248) = 0;
      v4 = (_DWORD *)((char *)a1 + 992);
    }
  }
  if ( !*((_QWORD *)a1 + 125) )
  {
    Pool2 = ExAllocatePool2(64LL, 1024LL, 1633773910LL);
    *((_QWORD *)a1 + 125) = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(1LL);
      v11 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 462;
      v11(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate GpuWorkRecords for long haul logging",
        462LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
    v4 = (_DWORD *)((char *)a1 + 992);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !a2 )
    PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
  *(LARGE_INTEGER *)(*((_QWORD *)a1 + 125) + 8LL * *((unsigned int *)a1 + 248)) = PerformanceCounter;
  ++*v4;
}
