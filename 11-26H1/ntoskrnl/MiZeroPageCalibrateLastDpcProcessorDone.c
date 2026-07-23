/*
 * XREFs of MiZeroPageCalibrateLastDpcProcessorDone @ 0x140716288
 * Callers:
 *     MiZeroPageCalibrateDpc @ 0x140716060 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     MiZeroInflectionPointReached @ 0x140715A10 (MiZeroInflectionPointReached.c)
 */

__int64 __fastcall MiZeroPageCalibrateLastDpcProcessorDone(__int64 a1)
{
  unsigned int v2; // edi
  LARGE_INTEGER v3; // rdi
  LARGE_INTEGER v4; // rax
  __int64 v5; // r8
  LARGE_INTEGER v6; // r9
  unsigned __int64 v7; // r9
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = *(LARGE_INTEGER *)(a1 + 16);
    _InterlockedOr(v10, 0);
    PerformanceFrequency.QuadPart = 0LL;
    v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PerformanceFrequency.QuadPart != 10000000 )
      v4.QuadPart = 10000000 * v4.QuadPart / PerformanceFrequency.QuadPart;
    v5 = *(unsigned int *)(a1 + 192);
    v6 = v3;
    if ( v4.QuadPart >= (unsigned __int64)v3.QuadPart )
      v6 = v4;
    v7 = v6.QuadPart - v3.QuadPart;
    v2 = 1;
    if ( v7 <= 1 )
      v7 = 2LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (*(int *)(a1 + 8) + 2 * v5)) = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    *(_DWORD *)(a1 + 192) = v5 + 1;
    if ( (unsigned int)MiZeroInflectionPointReached(a1) )
    {
      *(_DWORD *)(a1 + 192) = 0;
      v8 = *(_DWORD *)(a1 + 8) == 0;
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 32) = 1;
      if ( v8 )
        *(_DWORD *)(a1 + 8) = 1;
      else
        return 2;
    }
  }
  else
  {
    v2 = 1;
    *(_BYTE *)(a1 + 24) = 1;
  }
  return v2;
}
