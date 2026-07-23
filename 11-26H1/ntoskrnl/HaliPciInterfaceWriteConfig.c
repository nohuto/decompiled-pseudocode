/*
 * XREFs of HaliPciInterfaceWriteConfig @ 0x14042CD60
 * Callers:
 *     HaliHandlePCIConfigSpaceAccess @ 0x14059C2E0 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdWritePCIConfig @ 0x1405A80E0 (HalpKdWritePCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x14042CDA0 (HalpPCIConfig.c)
 */

__int64 __fastcall HaliPciInterfaceWriteConfig(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  HalpPCIConfig((unsigned int)a2 >> 8, a2, a3, a4, a5, a6, 1);
  return a6;
}
