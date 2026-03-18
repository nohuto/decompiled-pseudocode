/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@_KVCSyncData@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1400A7D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

PVOID __fastcall DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CSyncData,1702052676,0>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPoolImpl(0x100uLL, ByteSize, 0x65734344u);
}
