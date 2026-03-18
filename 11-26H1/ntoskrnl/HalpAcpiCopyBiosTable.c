/*
 * XREFs of HalpAcpiCopyBiosTable @ 0x1405254AC
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140342B6C (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetRsdt @ 0x140342E64 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057957C (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140D0A55C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpAcpiAllocateMemory @ 0x14052554C (HalpAcpiAllocateMemory.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlCopyDeviceMemory @ 0x14055978C (RtlCopyDeviceMemory.c)
 *     HalpAcpiValidateAcpiTable @ 0x1405798DC (HalpAcpiValidateAcpiTable.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char *__fastcall HalpAcpiCopyBiosTable(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebp
  _QWORD *Memory; // rax
  _QWORD *v7; // rsi
  char *v8; // rbx

  v4 = a2[1] + 24;
  Memory = (_QWORD *)HalpAcpiAllocateMemory(a1, v4);
  v7 = Memory;
  if ( !Memory )
    return 0LL;
  memset_0(Memory, 0, v4);
  v7[2] = a3;
  v8 = (char *)(v7 + 3);
  RtlCopyDeviceMemory(v7 + 3);
  if ( (int)HalpAcpiValidateAcpiTable(a2) < 0 )
    KeBugCheckEx(0xA5u, 0x1000BuLL, *a2, (ULONG_PTR)a2, 0LL);
  return v8;
}
