/*
 * XREFs of SmmValidateHardwareReservedRanges @ 0x140286410
 * Callers:
 *     SmmCreateHardwareReservedRanges @ 0x140285FC8 (SmmCreateHardwareReservedRanges.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmValidateHardwareReservedRanges(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  int i; // eax
  LARGE_INTEGER NumberOfBytes; // r8
  unsigned __int64 QuadPart; // r14
  __int64 v15; // rbp

  v4 = 0;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  if ( PhysicalMemoryRanges )
  {
    v7 = 0;
LABEL_4:
    if ( v7 < a2 )
    {
      v8 = v7;
      v9 = *(_QWORD *)(a1 + 16LL * v7 + 8);
      v10 = *(_QWORD *)(a1 + 16LL * v7);
      v11 = v9 + v10;
      if ( v9 )
      {
        if ( v11 < v10 )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 16LL * v7), *(_QWORD *)(a1 + 16LL * v7 + 8));
          WdLogGlobalForLineNumber = 328;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Driver reserved memory range overflow. BaseAddress=0x%I64x, Size=%I64u",
            v10,
            v9,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            NumberOfBytes = PhysicalMemoryRanges[i].NumberOfBytes;
            if ( !NumberOfBytes.QuadPart )
            {
              ++v7;
              goto LABEL_4;
            }
            QuadPart = PhysicalMemoryRanges[i].BaseAddress.QuadPart;
            v15 = QuadPart + NumberOfBytes.QuadPart;
            if ( v10 < QuadPart + NumberOfBytes.QuadPart && v11 > QuadPart )
              break;
          }
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
            2LL,
            v10,
            v11,
            (PHYSICAL_ADDRESS)PhysicalMemoryRanges[i].BaseAddress.QuadPart,
            QuadPart + NumberOfBytes.QuadPart);
          WdLogGlobalForLineNumber = 350;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Driver hardware reserved range cannot intersect a physical range of memory in Mm",
            v10,
            v11,
            QuadPart,
            v15,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 319;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver reserved range has 0 bytes. Range index: %I64",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v4 = -1073741811;
    }
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
    return v4;
  }
  else
  {
    _InterlockedIncrement(&dword_140169748);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 303;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Couldn't allocate buffer to query system memory size",
      303LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
