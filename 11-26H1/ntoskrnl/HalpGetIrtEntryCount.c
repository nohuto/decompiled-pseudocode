/*
 * XREFs of HalpGetIrtEntryCount @ 0x14058FB6C
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140BF0A38 (HsaInitializeInterruptRemapping.c)
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
