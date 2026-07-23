/*
 * XREFs of ExpAllocateUuids @ 0x140A7FAD0
 * Callers:
 *     NtAllocateUuids @ 0x140A7DF90 (NtAllocateUuids.c)
 *     ExpUuidGetValues @ 0x140A7FA40 (ExpUuidGetValues.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExpUuidLoadSequenceNumber @ 0x140847138 (ExpUuidLoadSequenceNumber.c)
 */

__int64 __fastcall ExpAllocateUuids(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rcx
  signed __int64 v7; // rax
  int v8; // r8d
  unsigned int v10; // edx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  LARGE_INTEGER v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-18h] BYREF
  int SequenceNumber; // [rsp+58h] [rbp+20h] BYREF

  SequenceNumber = 0;
  if ( !ExpUuidSequenceNumberValid )
  {
    SequenceNumber = ExpUuidLoadSequenceNumber();
    if ( SequenceNumber >= 0 )
    {
      v14 = ExpUuidSequenceNumber + 1;
    }
    else
    {
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v14 = (unsigned int)&SequenceNumber ^ v13.LowPart ^ (unsigned int)a3 ^ ExpUuidSequenceNumber ^ v13.HighPart;
    }
    ExpUuidSequenceNumber = v14;
    ExpUuidSequenceNumberValid = 1;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = MEMORY[0xFFFFF78000000014] - ExpPlatformBinaryLock.Timer.DueTime.QuadPart;
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - ExpPlatformBinaryLock.Timer.DueTime.QuadPart) < 0 )
  {
    ++ExpUuidSequenceNumber;
    ExpPlatformBinaryLock.Timer.DueTime.QuadPart = MEMORY[0xFFFFF78000000014] - 20000LL;
    v7 = 20000LL;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  if ( v7 )
  {
    if ( ExpUuidTimeSequenceNumber )
      ExpUuidTimeSequenceNumber = 0;
    if ( v7 > 10000000 )
      v7 = 10000000LL;
    v10 = 10000;
    if ( v7 <= 10000 )
    {
      *a2 = v7;
      v10 = v7;
      v11 = 0LL;
    }
    else
    {
      *a2 = 10000;
      v11 = v7 - 10000;
    }
    v12 = v6 - v10 - v11;
    *(_QWORD *)a1 = v12;
    ExpPlatformBinaryLock.Timer.DueTime.QuadPart = v12 + (unsigned int)*a2;
  }
  else
  {
    v8 = ExpUuidTimeSequenceNumber;
    if ( (unsigned int)ExpUuidTimeSequenceNumber >= 0x1F )
      return 3221226029LL;
    *a2 = 10000;
    v15 = v8 + 1;
    *(_QWORD *)a1 = v6 - 10000;
    ExpUuidTimeSequenceNumber = v15;
    v16 = ((v15 & 1) << 27) | 0x4000000;
    if ( (v15 & 2) == 0 )
      v16 = (v15 & 1) << 27;
    v17 = v16 | 0x2000000;
    if ( (v15 & 4) == 0 )
      v17 = v16;
    v18 = v17 | 0x1000000;
    if ( (v15 & 8) == 0 )
      v18 = v17;
    v19 = v18 | 0x800000;
    if ( (v15 & 0x10) == 0 )
      v19 = v18;
    *(_DWORD *)(a1 + 4) |= v19;
  }
  *a3 = ExpUuidSequenceNumber;
  return 0LL;
}
