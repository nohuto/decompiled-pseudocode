/*
 * XREFs of EtwTraceFlipManagerPresentPosted @ 0x14014B8E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxxi_EtwWriteTransfer @ 0x14014BA84 (McTemplateK0qxxxi_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceFlipManagerPresentPosted(int a1, char a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  double v6; // xmm1_8
  unsigned __int64 v7; // rax
  double v8; // xmm1_8
  unsigned __int64 v9; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v11; // r8d
  double LowPart; // xmm1_8
  double v13; // xmm1_8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0 )
  {
    LOBYTE(v3) = byte_1402A9DD8 - 1;
    if ( (unsigned __int8)(byte_1402A9DD8 - 1) > 2u && (qword_1402A9DC0 & 0x8000000000001000uLL) != 0 )
    {
      LOBYTE(v3) = 0;
      if ( (qword_1402A9DC8 & 0x8000000000001000uLL) == qword_1402A9DC8 )
      {
        if ( a3 < 0 )
          v6 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
        else
          v6 = (double)(int)a3;
        v7 = 0LL;
        v8 = v6 / (double)(int)gliQpcFreq.LowPart * 10000000.0;
        if ( v8 >= 9.223372036854776e18 )
        {
          v8 = v8 - 9.223372036854776e18;
          if ( v8 < 9.223372036854776e18 )
            v7 = 0x8000000000000000uLL;
        }
        v9 = v7 + (unsigned int)(int)v8;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( PerformanceCounter.QuadPart < 0 )
          LowPart = (double)(int)(PerformanceCounter.LowPart & 1 | ((unsigned __int64)PerformanceCounter.QuadPart >> 1))
                  + (double)(int)(PerformanceCounter.LowPart & 1 | ((unsigned __int64)PerformanceCounter.QuadPart >> 1));
        else
          LowPart = (double)(int)PerformanceCounter.LowPart;
        LOBYTE(v3) = 0;
        v13 = LowPart / (double)(int)gliQpcFreq.LowPart * 10000000.0;
        if ( v13 >= 9.223372036854776e18 )
        {
          v13 = v13 - 9.223372036854776e18;
          if ( v13 < 9.223372036854776e18 )
            LOBYTE(v3) = 0;
        }
        if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
          LOBYTE(v3) = McTemplateK0qxxxi_EtwWriteTransfer(
                         (int)v9 - (int)v13,
                         (int)v13,
                         v11,
                         a1,
                         a2,
                         v9,
                         (int)v13,
                         (unsigned __int8)(v9 - (int)v13) & (unsigned __int8)-(v9 != 0));
      }
    }
  }
  return (char)v3;
}
