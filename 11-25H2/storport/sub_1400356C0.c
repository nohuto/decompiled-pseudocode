/*
 * XREFs of sub_1400356C0 @ 0x1400356C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140056B30 @ 0x140056B30 (sub_140056B30.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_1400356C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  LARGE_INTEGER v4; // rbx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  char v7; // bp
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v11; // r8
  char CurrentProcessorNumber; // al
  int v13; // edx
  int v14; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v4.QuadPart = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1094997074 || (*(_BYTE *)(a2 + 107) & 1) == 0 || *(int *)(a2 + 348) > 1 )
    return 0;
  if ( byte_140168DAA && (byte_1401694F3 & 8) != 0 )
  {
    if ( byte_140168724 )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  if ( a2 != -376 && (v5 = *(_QWORD *)(a2 + 608)) != 0 && (v6 = *(__int64 (__fastcall **)(__int64))(v5 + 24)) != 0LL )
    v7 = v6(*(_QWORD *)(a2 + 616) + 16LL);
  else
    v7 = 0;
  if ( byte_140168DAA && (byte_1401694F3 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( byte_140168724 )
      v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v9.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v9.QuadPart <= 0 || v9.QuadPart >= v4.QuadPart )
      v11 = v9.QuadPart - v4.QuadPart;
    else
      v11 = v9.QuadPart - v4.QuadPart - 1;
    if ( byte_140168724 )
    {
      if ( PerformanceFrequency.QuadPart && v11 )
        v2 = 10000
           * (1000 * (v11 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v11 / PerformanceFrequency.QuadPart)
            + 1000 * (v11 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
    }
    else
    {
      v2 = v11;
    }
    v16 = v2;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_1401694F3 & 8) != 0 )
      sub_140056B30(v16, v13, v14, (unsigned int)sub_1400356C0, *(_DWORD *)(a2 + 56), CurrentProcessorNumber, v16);
  }
  return v7;
}
