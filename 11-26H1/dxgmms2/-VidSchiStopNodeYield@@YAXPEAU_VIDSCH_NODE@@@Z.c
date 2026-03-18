/*
 * XREFs of ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140031C3C
 * Callers:
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1400306B0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140030808 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCheckYieldExitCondition @ 0x140031BF4 (VidSchiCheckYieldExitCondition.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiStopNodeYield(signed __int64 MostSignificantBit, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  signed __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  LARGE_INTEGER v7; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  v3 = *(_DWORD *)(MostSignificantBit + 1892);
  v4 = MostSignificantBit;
  v5 = *(_QWORD *)(MostSignificantBit + 24);
  *(_QWORD *)(MostSignificantBit + 2120) = 0LL;
  *(_BYTE *)(MostSignificantBit + 2144) = 0;
  if ( v3 )
  {
    MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(v3);
    v6 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1576) + 1584);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 412) < (unsigned int)MostSignificantBit )
      {
        *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 96);
        PerformanceFrequency.QuadPart = 0LL;
        v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v9 = 0LL;
        if ( is_mul_ok(v7.QuadPart, 0x989680uLL) )
        {
          a3 = (unsigned __int64)v7.QuadPart
             * (unsigned __int128)0x989680uLL
             / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          MostSignificantBit = 10000000 * (v7.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
          a3 = MostSignificantBit
             + 10000000
             * (v7.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart;
        }
        *(_QWORD *)(v4 + 128) = a3;
      }
    }
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      MostSignificantBit,
      &EventYieldStopNode,
      a3,
      *(_QWORD *)(v5 + 16),
      *(unsigned __int16 *)(v4 + 4));
}
