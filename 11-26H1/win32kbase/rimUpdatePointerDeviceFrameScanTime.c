/*
 * XREFs of rimUpdatePointerDeviceFrameScanTime @ 0x1401266A0
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimExtractScantime @ 0x140126794 (rimExtractScantime.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x140126D64 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 */

void __fastcall rimUpdatePointerDeviceFrameScanTime(__int64 a1, __int64 a2, unsigned int a3)
{
  LARGE_INTEGER *v3; // rbx
  LARGE_INTEGER PerformanceCounter; // r9
  DWORD LowPart; // eax
  unsigned __int64 v9; // r10
  const struct tagHPD_FRAME_SCAN_TIME *v10; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(LARGE_INTEGER **)(a1 + 456);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = PerformanceCounter;
  LowPart = v3[46].LowPart;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v11 = v9;
  if ( (LowPart & 0x80u) == 0 )
  {
    v10 = (const struct tagHPD_FRAME_SCAN_TIME *)&v3[105];
    if ( ++v3[108].LowPart == 1 )
    {
      *(_DWORD *)v10 = v9;
      v3[110] = PerformanceCounter;
    }
    else
    {
      LODWORD(v9) = *(_DWORD *)v10
                  + (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v3[110].QuadPart)) / gliQpcFreq.QuadPart;
    }
    v3[106].LowPart = v3[105].HighPart;
    v3[105].HighPart = v9;
    v3[109] = PerformanceCounter;
    InputTraceLogging::RIM::UpdateScantime(v10, 0, 0);
  }
  else
  {
    rimExtractScantime(v3, *(_QWORD *)(*(_QWORD *)(a1 + 440) + 16LL), a2, a3, &v12, &v11);
  }
}
