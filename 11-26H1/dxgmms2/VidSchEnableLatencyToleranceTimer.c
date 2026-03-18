/*
 * XREFs of VidSchEnableLatencyToleranceTimer @ 0x140043BB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall VidSchEnableLatencyToleranceTimer(__int64 a1, char a2, __int64 a3)
{
  LARGE_INTEGER v4; // rax
  __int64 v5; // r10
  LARGE_INTEGER v6; // r9
  unsigned __int128 v7; // rax
  unsigned __int64 QuadPart; // kr00_8
  unsigned __int64 v9; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h]

  *(_BYTE *)(a1 + 3400) = a2;
  if ( a2 )
  {
    if ( bTracingEnabled && (byte_14008A202 & 2) != 0 )
      McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerEnable, a3);
    PerformanceFrequency.QuadPart = 0LL;
    v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v5 = *(_QWORD *)(a1 + 3392);
    v6 = v4;
    v11 = 0LL;
    QuadPart = v4.QuadPart;
    v7 = (unsigned __int64)v4.QuadPart * (unsigned __int128)0x989680uLL;
    if ( is_mul_ok(QuadPart, 0x989680uLL) )
      v9 = v7 / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v9 = 10000000 * (v6.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v6.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    *(_QWORD *)(a1 + 3384) = v9 + v5;
    *(_QWORD *)(a1 + 1664) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1632), 0, 0);
  }
  else if ( bTracingEnabled && (byte_14008A202 & 2) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerDisable, a3);
  }
}
