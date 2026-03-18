/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14077BA70
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x1407851F4 (HalpMcExportAndChargeNeededData.c)
 *     PopPreallocateHibernateMemory @ 0x1407D04CC (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
