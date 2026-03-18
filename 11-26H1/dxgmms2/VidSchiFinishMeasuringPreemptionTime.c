/*
 * XREFs of VidSchiFinishMeasuringPreemptionTime @ 0x140038690
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1400271BC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x14003886C (McTemplateK0ppxx_EtwWriteTransfer.c)
 */

void __fastcall VidSchiFinishMeasuringPreemptionTime(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r14
  LARGE_INTEGER v5; // r8
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // rcx
  int v8; // edx
  __int64 i; // rax
  int v10; // eax
  int v11; // r8d
  __int64 v12; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 512) )
  {
    v2 = *(_QWORD *)(a1 + 104);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
    v4 = *(_QWORD *)(v2 + 48);
    PerformanceFrequency.QuadPart = 0LL;
    v5 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(a1 + 512));
    if ( is_mul_ok(v5.QuadPart, 0x989680uLL) )
      v6 = (unsigned __int64)v5.QuadPart
         * (unsigned __int128)0x989680uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v6 = 10000000 * (v5.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v5.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    v7 = (unsigned __int64 *)(v3 + 3096);
    v8 = 8;
    for ( i = 8LL; i >= 0; --i )
    {
      if ( v6 > *v7 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8LL * v8 + 2680));
        break;
      }
      --v8;
      --v7;
    }
    if ( v6 >= *(_QWORD *)(v3 + 3024) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 2672));
      if ( v6 >= *(_QWORD *)(v3 + 3008) && !*(_BYTE *)(*(_QWORD *)(v2 + 48) + 2632LL) )
      {
        v10 = *(_DWORD *)(v2 + 56);
        if ( (v10 & 8) == 0
          && (v10 & 1) == 0
          && !*(_DWORD *)(v3 + 3260)
          && !*(_BYTE *)(v2 + 212)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 208), 0, 0)
          && (*(_DWORD *)(v3 + 2824) & 0x100) != 0 )
        {
          KeSetTimer((PKTIMER)(a1 + 520), (LARGE_INTEGER)-*(_QWORD *)(v3 + 3016), (PKDPC)(a1 + 584));
          VidSchiUpdateContextStatus(a1, 7, 29766LL);
          if ( (byte_14008A201 & 1) != 0 )
          {
            v12 = *(_QWORD *)(a1 + 56);
            if ( !v12 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
              LODWORD(v12) = a1;
            McTemplateK0ppxx_EtwWriteTransfer(
              *(_QWORD *)(v3 + 3016),
              (unsigned int)&EventDelayContextScheduling,
              v11,
              v12,
              *(_QWORD *)(v4 + 2640),
              v6,
              *(_QWORD *)(v3 + 3016));
          }
        }
      }
    }
    *(_QWORD *)(a1 + 512) = 0LL;
  }
}
