/*
 * XREFs of HalpMiscInitializeAmdSfs @ 0x140CBA6A0
 * Callers:
 *     HalpMiscInitSystem @ 0x140BF13F0 (HalpMiscInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     PrExtControlOperations @ 0x1406E0CC8 (PrExtControlOperations.c)
 */

__int64 HalpMiscInitializeAmdSfs()
{
  LARGE_INTEGER v0; // rdi
  char v1; // r15
  __int64 Table; // rax
  __int64 v3; // r14
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int i; // r8d
  _DWORD *v8; // rax
  unsigned __int64 v9; // r15
  void *ContiguousNodeMemory; // rsi
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  v12 = 0LL;
  v0.QuadPart = 0LL;
  v1 = 0;
  Table = HalpAcpiGetTable(0LL, 1414550337, 0, 0);
  v3 = Table;
  if ( Table )
  {
    if ( *(_DWORD *)(Table + 4) < 0x34u )
      return (unsigned int)-1072431089;
    v5 = *(_QWORD *)(Table + 36);
    v6 = v3 + 52;
    for ( i = 0; i < *(_DWORD *)(v3 + 48) && !v1; ++i )
    {
      if ( !*(_WORD *)v6 )
      {
        if ( *(_WORD *)(v6 + 2) >= 0x14u )
          return (unsigned int)-1072431089;
        v1 = 1;
        v0.QuadPart = v5 + *(unsigned int *)(v6 + 8);
      }
      v6 += *(unsigned __int16 *)(v6 + 2);
    }
    v8 = HalMapIoSpace(v0, 4uLL, MmNonCached);
    v9 = (unsigned __int64)v8;
    if ( !v8 )
      return (unsigned int)-1073741670;
    if ( (*v8 & 8) != 0 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(0x200000LL, 0, -1, 0x200000, 516, 0x80000000);
      if ( !ContiguousNodeMemory )
      {
        v4 = -1073741670;
        goto LABEL_21;
      }
      *(_QWORD *)&v12 = *(_QWORD *)(v3 + 36);
      *((_QWORD *)&v12 + 1) = ContiguousNodeMemory;
      v4 = PrExtControlOperations(12, (unsigned int *)&v12, 16LL);
      if ( v4 >= 0 )
      {
        qword_140E00D10 = (__int64)HalpLoadSfsUpdate;
        goto LABEL_21;
      }
      MmFreeContiguousMemory(ContiguousNodeMemory);
    }
    v4 = -1073741823;
LABEL_21:
    HalpUnmapVirtualAddress(v9, 1LL, 0);
    return (unsigned int)v4;
  }
  return (unsigned int)-1073741275;
}
