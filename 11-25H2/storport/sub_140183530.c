/*
 * XREFs of sub_140183530 @ 0x140183530
 * Callers:
 *     sub_140053370 @ 0x140053370 (sub_140053370.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400ADDF8 @ 0x1400ADDF8 (sub_1400ADDF8.c)
 *     sub_1400BB250 @ 0x1400BB250 (sub_1400BB250.c)
 *     sub_140183464 @ 0x140183464 (sub_140183464.c)
 */

__int64 __fastcall sub_140183530(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  __int64 v4; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // zf
  int v9; // ecx
  __int64 v11; // [rsp+78h] [rbp-50h]

  v1 = 0;
  *(_QWORD *)(a1 + 2376) = 0LL;
  *(_QWORD *)(a1 + 2400) = 0LL;
  *(_QWORD *)(a1 + 2384) = 0LL;
  *(_QWORD *)(a1 + 2408) = 0LL;
  *(_QWORD *)(a1 + 2416) = 0LL;
  *(_QWORD *)(a1 + 2456) = 0LL;
  *(_QWORD *)(a1 + 2464) = 0LL;
  *(_QWORD *)(a1 + 3336) = 0LL;
  *(_QWORD *)(a1 + 3344) = 0LL;
  *(_QWORD *)(a1 + 2296) = 0LL;
  *(_QWORD *)(a1 + 2304) = 0LL;
  *(_QWORD *)(a1 + 2312) = 0LL;
  *(_QWORD *)(a1 + 2320) = 0LL;
  *(_QWORD *)(a1 + 2328) = 0LL;
  *(_QWORD *)(a1 + 2336) = 0LL;
  *(_QWORD *)(a1 + 2344) = 0LL;
  *(_QWORD *)(a1 + 2352) = 0LL;
  *(_QWORD *)(a1 + 2360) = 0LL;
  *(_DWORD *)(a1 + 2368) = 0;
  if ( (_DWORD)Size && dword_140168DB0 )
  {
    v3 = sub_1400143E0(72LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 2376) = v3;
    if ( v3
      && (v4 = sub_1400143E0(72LL, (unsigned int)dword_140169178, 1700028754LL, *(_QWORD *)(a1 + 8)),
          (*(_QWORD *)(a1 + 2400) = v4) != 0LL) )
    {
      if ( byte_140168724 )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v6 = *(_QWORD *)(a1 + 8);
      *(LARGE_INTEGER *)(a1 + 2392) = PerformanceCounter;
      v7 = sub_1400143E0(72LL, (unsigned int)dword_140169194, 1700028754LL, v6);
      v8 = dword_140168DB4 == 0;
      *(_QWORD *)(a1 + 2416) = v7;
      *(_OWORD *)(a1 + 2424) = 0LL;
      *(_OWORD *)(a1 + 2440) = 0LL;
      if ( !v8 )
      {
        v9 = sub_140183464(a1);
        if ( v9 )
        {
          if ( (byte_1401694F6 & 2) != 0 )
            sub_1400ADDF8(
              a1 + 242,
              a1 + 177,
              a1 + 168,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 104),
              *(_BYTE *)(a1 + 105),
              *(_BYTE *)(a1 + 106),
              a1 + 2104,
              *(_QWORD *)(a1 + 24) + 5064LL,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
              (const char *)(a1 + 168),
              (const char *)(a1 + 177),
              (const char *)(a1 + 242),
              *(_BYTE *)(a1 + 506) & 1,
              L"Initializing IO size distribution telemetry failed.",
              v11,
              v9);
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      v1 = -1073741801;
      sub_1400BB250((_QWORD *)a1);
    }
  }
  return v1;
}
