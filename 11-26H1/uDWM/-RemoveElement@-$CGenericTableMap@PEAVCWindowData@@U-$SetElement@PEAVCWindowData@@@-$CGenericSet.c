/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@QEAAXPEAU?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@Z @ 0x18007800C
 * Callers:
 *     ??1?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x1800A9F4C (--1-$CGenericSet@PEAVCWindowData@@@@QEAA@XZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 *a2)
{
  __int64 Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = *a2;
  if ( !RtlDeleteElementGenericTable(a1, &Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
