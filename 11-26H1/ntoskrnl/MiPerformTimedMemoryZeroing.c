/*
 * XREFs of MiPerformTimedMemoryZeroing @ 0x1405213F4
 * Callers:
 *     MiTryZeroMemory @ 0x140456F34 (MiTryZeroMemory.c)
 *     MiZeroPageCalibrateDpc @ 0x140716060 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     AccelFillMemory @ 0x1402A0F14 (AccelFillMemory.c)
 *     MiGetZeroExceptionInfo @ 0x14071323C (MiGetZeroExceptionInfo.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiPerformTimedMemoryZeroing(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 a3,
        char *a4,
        size_t Size,
        int a6)
{
  unsigned __int64 v8; // r13
  size_t v9; // r14
  size_t v10; // r15
  size_t v11; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rcx
  unsigned __int64 i; // r14
  __int64 v15; // rax
  LARGE_INTEGER v16; // rax
  unsigned __int64 v17; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-88h] BYREF
  int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+34h] [rbp-54h]
  LARGE_INTEGER v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER v24; // [rsp+48h] [rbp-40h]
  LARGE_INTEGER v25; // [rsp+90h] [rbp+8h]

  v23 = a1;
  v21 = 0;
  v8 = 1LL;
  v9 = Size;
  v10 = Size;
  v11 = Size >> 12;
  Size = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)&Size);
  v25 = PerformanceCounter;
  if ( Size != 10000000 )
    v25.QuadPart = 10000000 * PerformanceCounter.QuadPart / (__int64)Size;
  _InterlockedOr(v19, 0);
  v13 = a3;
  if ( !a3 && v11 > 0x40 && (v11 & 0x3F) == 0 )
  {
    v11 = 64LL;
    v10 = 0x40000LL;
    v8 = v9 >> 18;
  }
  for ( i = 0LL; i < v8; ++i )
  {
    if ( !v13 )
      goto LABEL_14;
    v20 = 1;
    v15 = 1LL;
    if ( a6 == 1 )
      v15 = 3LL;
    v20 = v15;
    if ( (int)AccelFillMemory(v13, (int)a4, v10, 0, v15) < 0 )
    {
      _InterlockedIncrement(&dword_140EF4DEC);
LABEL_14:
      if ( a6 == 1 )
        KeZeroPages(a4, v10);
      else
        memset_0(a4, 0, v10);
    }
    _InterlockedOr(v19, 0);
    Size = 0LL;
    v22.QuadPart = 0LL;
    v16 = KeQueryPerformanceCounter((PLARGE_INTEGER)&Size);
    v22 = v16;
    if ( Size != 10000000 )
    {
      v16.QuadPart = 10000000 * v16.QuadPart / (__int64)Size;
      v22 = v16;
    }
    if ( v16.QuadPart < (unsigned __int64)v25.QuadPart )
      v16 = v25;
    v17 = v16.QuadPart - v25.QuadPart;
    v25 = v16;
    v24 = v16;
    if ( v8 == 1 )
    {
      *((_QWORD *)a2 + 1) += v17;
      *a2 += v11;
    }
    else
    {
      _InterlockedAdd64(a2 + 1, v17);
      _InterlockedAdd64(a2, v11);
    }
    a4 += v10;
    v13 = a3;
  }
  return 0LL;
}
