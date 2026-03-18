/*
 * XREFs of rimUpdatePointerDeviceFrameScanTime @ 0x1400E6D8C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimExtractScantime @ 0x1400E6E8C (rimExtractScantime.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1400E7440 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 */

void __fastcall rimUpdatePointerDeviceFrameScanTime(__int64 a1, int a2, int a3)
{
  LARGE_INTEGER *v3; // rbx
  DWORD LowPart; // eax
  unsigned __int64 v8; // r10
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER *v10; // r9
  DWORD HighPart; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(LARGE_INTEGER **)(a1 + 456);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LowPart = v3[46].LowPart;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v12 = v8;
  if ( (LowPart & 0x80u) == 0 )
  {
    v9 = PerformanceCounter;
    v10 = v3 + 105;
    if ( ++v3[108].LowPart == 1 )
    {
      v10->LowPart = v8;
      v3[110] = v9;
    }
    else
    {
      LODWORD(v8) = v10->LowPart + (unsigned __int64)(1000 * (v9.QuadPart - v3[110].QuadPart)) / gliQpcFreq.QuadPart;
    }
    HighPart = v3[105].HighPart;
    v3[109] = v9;
    v3[106].LowPart = HighPart;
    v3[105].HighPart = v8;
    InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)&v3[105], 0, 0);
  }
  else
  {
    rimExtractScantime(
      (_DWORD)v3,
      *(_QWORD *)(*(_QWORD *)(a1 + 440) + 16LL),
      a2,
      a3,
      (__int64)&PerformanceCounter,
      (__int64)&v12);
  }
}
