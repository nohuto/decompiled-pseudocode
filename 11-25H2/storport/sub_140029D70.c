/*
 * XREFs of sub_140029D70 @ 0x140029D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140056B30 @ 0x140056B30 (sub_140056B30.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_140029D70(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  LARGE_INTEGER v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD); // rax
  char v8; // bp
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r8
  char CurrentProcessorNumber; // al
  int v14; // edx
  int v15; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = a3;
  v6.QuadPart = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1094997074 || (*(_BYTE *)(a2 + 107) & 1) == 0 || *(int *)(a2 + 348) > 1 )
    return 0;
  if ( byte_140168DAA && (byte_1401694F3 & 8) != 0 )
  {
    if ( byte_140168724 )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v6 = PerformanceCounter;
  }
  if ( *(char *)(a2 + 111) >= 0 || (unsigned int)v4 <= 1 )
  {
    if ( a2 == -376 || (v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 536)) == 0LL )
      v8 = 0;
    else
      v8 = v7(*(_QWORD *)(a2 + 616) + 16LL, (unsigned int)v4);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 6096))(*(_QWORD *)(a2 + 6080), v4);
  }
  if ( byte_140168DAA && (byte_1401694F3 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( byte_140168724 )
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v11.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v11.QuadPart <= 0 || v11.QuadPart >= v6.QuadPart )
      v12 = v11.QuadPart - v6.QuadPart;
    else
      v12 = v11.QuadPart - v6.QuadPart - 1;
    if ( byte_140168724 )
    {
      if ( PerformanceFrequency.QuadPart && v12 )
        v3 = 10000
           * (1000 * (v12 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v12 / PerformanceFrequency.QuadPart)
            + 1000 * (v12 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
    }
    else
    {
      v3 = v12;
    }
    v17 = v3;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_1401694F3 & 8) != 0 )
      sub_140056B30(v17, v14, v15, (unsigned int)sub_140029D70, *(_DWORD *)(a2 + 56), CurrentProcessorNumber, v17);
  }
  return v8;
}
