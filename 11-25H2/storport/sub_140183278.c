/*
 * XREFs of sub_140183278 @ 0x140183278
 * Callers:
 *     sub_1400AEFC8 @ 0x1400AEFC8 (sub_1400AEFC8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400A9114 @ 0x1400A9114 (sub_1400A9114.c)
 *     sub_1400BB140 @ 0x1400BB140 (sub_1400BB140.c)
 *     sub_140183184 @ 0x140183184 (sub_140183184.c)
 */

__int64 __fastcall sub_140183278(__int64 *a1)
{
  unsigned int v1; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  int v7; // eax

  v1 = 0;
  *(_QWORD *)(a1[76] + 8) = 0LL;
  *(_QWORD *)(a1[76] + 32) = 0LL;
  *(_QWORD *)(a1[76] + 16) = 0LL;
  *(_QWORD *)(a1[76] + 40) = 0LL;
  *(_QWORD *)(a1[76] + 48) = 0LL;
  *(_QWORD *)(a1[76] + 88) = 0LL;
  *(_QWORD *)(a1[76] + 96) = 0LL;
  *(_QWORD *)(a1[76] + 2304) = 0LL;
  *(_QWORD *)(a1[76] + 2312) = 0LL;
  *(_DWORD *)a1[76] = 0;
  if ( (_DWORD)Size && dword_140168DB0 )
  {
    *(_QWORD *)(a1[76] + 8) = sub_1400143E0(72LL, (unsigned int)Size, 1700028754LL, a1[1]);
    if ( *(_QWORD *)(a1[76] + 8)
      && (*(_QWORD *)(a1[76] + 32) = sub_1400143E0(72LL, (unsigned int)dword_140169178, 1700028754LL, a1[1])) != 0LL )
    {
      if ( byte_140168724 )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a1[76] + 24) = PerformanceCounter;
      v4 = sub_1400143E0(72LL, (unsigned int)dword_140169194, 1700028754LL, a1[1]);
      v5 = dword_140168DB4 == 0;
      *(_QWORD *)(a1[76] + 48) = v4;
      v6 = a1[76];
      *(_OWORD *)(v6 + 56) = 0LL;
      *(_OWORD *)(v6 + 72) = 0LL;
      if ( !v5 )
      {
        v7 = sub_140183184(a1);
        if ( v7 )
          sub_1400A9114(
            (__int64)a1,
            1,
            3,
            (__int64)L"Initializing IO size distribution telemetry failed.",
            L"NtStatus",
            v7,
            0LL,
            0);
        else
          return 0;
      }
    }
    else
    {
      v1 = -1073741801;
      sub_1400BB140((__int64)a1);
    }
  }
  return v1;
}
