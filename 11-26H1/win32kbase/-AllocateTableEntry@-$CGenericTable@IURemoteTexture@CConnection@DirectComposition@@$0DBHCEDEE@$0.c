/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@IURemoteTexture@CConnection@DirectComposition@@$0DBHCEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x140229CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CConnection::RemoteTexture,829571908,0>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPoolImpl(256LL, ByteSize, 0x31724344u);
}
