/*
 * XREFs of PsUnregisterAvailableCpusChangeNotification @ 0x1407F6920
 * Callers:
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640230 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MiZeroPageThread @ 0x140713D40 (MiZeroPageThread.c)
 * Callees:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x1407BC158 (KeUnregisterAvailableCpusChangeNotification.c)
 */

void __fastcall PsUnregisterAvailableCpusChangeNotification(
        char *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  KeUnregisterAvailableCpusChangeNotification(a1, a2, a3, a4);
}
