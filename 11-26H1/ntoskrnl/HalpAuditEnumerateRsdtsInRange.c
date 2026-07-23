/*
 * XREFs of HalpAuditEnumerateRsdtsInRange @ 0x140CBA0F8
 * Callers:
 *     HalpAuditEnumerateRsdts @ 0x140CBA00C (HalpAuditEnumerateRsdts.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpAuditAllocateRsdtArrayTable @ 0x140CB9F64 (HalpAuditAllocateRsdtArrayTable.c)
 *     HalpAuditSelectRsdtOrXsdt @ 0x140CBA394 (HalpAuditSelectRsdtOrXsdt.c)
 */

__int64 __fastcall HalpAuditEnumerateRsdtsInRange(__int64 a1, unsigned int a2, char a3, _DWORD **a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rbp
  int RsdtArrayTable; // ebx
  unsigned int i; // edi
  __int64 v10; // rdx
  unsigned int v11; // ecx

  v5 = a2;
  v7 = MmMapIoSpaceEx(a1, a2, 0x204u);
  if ( v7 )
  {
    RsdtArrayTable = 0;
    for ( i = 0; i < (unsigned int)v5; i += 16 )
    {
      if ( *(_QWORD *)(v7 + i) == 0x2052545020445352LL )
      {
        if ( **a4 < (unsigned int)((*a4)[1] + 1) )
        {
          RsdtArrayTable = HalpAuditAllocateRsdtArrayTable(a4);
          if ( RsdtArrayTable < 0 )
            break;
        }
        RsdtArrayTable = HalpAuditSelectRsdtOrXsdt(v7 + i, &(*a4)[8 * (*a4)[1] + 2]);
        if ( RsdtArrayTable >= 0 )
        {
          v11 = *(_DWORD *)(v10 + 12) & 0xFFFFFFF7;
          if ( a3 )
            v11 = *(_DWORD *)(v10 + 12) | 8;
          *(_DWORD *)(v10 + 12) = v11;
          ++(*a4)[1];
        }
      }
    }
    MiUnmapContiguousMemory(v7, v5, 1);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)RsdtArrayTable;
}
