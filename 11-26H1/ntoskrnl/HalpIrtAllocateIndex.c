/*
 * XREFs of HalpIrtAllocateIndex @ 0x140787148
 * Callers:
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x14057FA78 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     RtlFindNextForwardRunClear @ 0x140415210 (RtlFindNextForwardRunClear.c)
 *     HalpIommuAllocateRemappingTableEntry @ 0x140589E10 (HalpIommuAllocateRemappingTableEntry.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140786FF8 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendRemappingRange @ 0x1407874BC (HalpIrtExtendRemappingRange.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140787670 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtAllocateIndex(
        unsigned int *a1,
        ULONG a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int *a7)
{
  ULONG v7; // ebp
  int RemappingTableEntry; // ebx
  int v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // rdx
  _RTL_BITMAP *v14; // r14
  ULONG ClearBitsAndSet; // esi
  ULONG v16; // edx
  ULONG NextForwardRunClear; // eax
  ULONG v18; // ebx
  unsigned int v19; // ecx
  char v21; // [rsp+40h] [rbp-48h]
  ULONG StartingRunIndex; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-40h]

  v7 = 0;
  v21 = 0;
  StartingRunIndex = 0;
  RemappingTableEntry = 0;
  if ( a7 )
    v11 = *a7;
  else
    v11 = 0;
  if ( !HalpIrtTotalEntries )
  {
    *a1 = 0;
    return (unsigned int)RemappingTableEntry;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
  {
    RemappingTableEntry = HalpIrtAllocateDeviceAperture(a3, a4, a2, v11, &StartingRunIndex);
    if ( RemappingTableEntry < 0 )
      return (unsigned int)RemappingTableEntry;
    v7 = StartingRunIndex;
    v21 = 1;
  }
  v12 = v7 / HalpIrtAperturesPerRange;
  ExAcquireFastMutex(&HalpIrtLock);
  if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v12) )
  {
    KeReleaseGuardedMutex(&HalpIrtLock);
    RemappingTableEntry = HalpIrtExtendRemappingRange(v12, v13);
    if ( RemappingTableEntry < 0 )
      goto LABEL_28;
    ExAcquireFastMutex(&HalpIrtLock);
  }
  v14 = &HalpIrtRanges + v12;
  if ( (HalpIrtAllocationFlags & 1) != 0 )
  {
    v16 = HalpIrtEntriesPerDeviceAperture * v7 % HalpIrtEntriesPerRange;
    v23 = v16 + HalpIrtEntriesPerDeviceAperture - 1;
    ClearBitsAndSet = -1;
    while ( 1 )
    {
      StartingRunIndex = v16;
      NextForwardRunClear = RtlFindNextForwardRunClear(v14, v16, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( NextForwardRunClear >= a2 )
      {
        v18 = -a2 & (a2 + StartingRunIndex - 1);
        if ( v18 - StartingRunIndex < NextForwardRunClear && NextForwardRunClear + StartingRunIndex - v18 >= a2 )
        {
          if ( v18 + a2 - 1 <= v23 )
          {
            RtlSetBits(v14, v18, a2);
            ClearBitsAndSet = v18;
          }
          break;
        }
      }
      v16 = NextForwardRunClear + StartingRunIndex;
    }
  }
  else
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v14, a2, 0);
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
  if ( ClearBitsAndSet == -1 )
  {
    RemappingTableEntry = -1073741670;
  }
  else
  {
    RemappingTableEntry = 0;
    v19 = HalpIrtEntriesPerRange * v12 + ClearBitsAndSet;
    *a1 = v19;
    if ( v11 != 3 )
      return (unsigned int)RemappingTableEntry;
    if ( (HalpIrtAllocationFlags & 2) == 0 )
      return (unsigned int)RemappingTableEntry;
    RemappingTableEntry = HalpIommuAllocateRemappingTableEntry(v19, a2, a3, a4, a7[14], a5, a6);
    if ( RemappingTableEntry >= 0 )
      return (unsigned int)RemappingTableEntry;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(v14, ClearBitsAndSet, a2);
    KeReleaseGuardedMutex(&HalpIrtLock);
    *a1 = -1;
  }
LABEL_28:
  if ( v21 )
    HalpIrtReleaseDeviceAperture(v7, a2);
  return (unsigned int)RemappingTableEntry;
}
