/*
 * XREFs of PsUnregisterAvailableCpusChangeNotification @ 0x1407F0DC0
 * Callers:
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063C650 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MiZeroPageThread @ 0x14070F040 (MiZeroPageThread.c)
 * Callees:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x1407B90F8 (KeUnregisterAvailableCpusChangeNotification.c)
 */

void __fastcall PsUnregisterAvailableCpusChangeNotification(
        struct _EX_RUNDOWN_REF *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  KeUnregisterAvailableCpusChangeNotification(a1, a2, a3, a4);
}
