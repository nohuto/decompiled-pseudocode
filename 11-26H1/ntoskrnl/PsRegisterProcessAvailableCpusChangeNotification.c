/*
 * XREFs of PsRegisterProcessAvailableCpusChangeNotification @ 0x1407F0C40
 * Callers:
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x14063C864 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     MiZeroPageThread @ 0x14070F040 (MiZeroPageThread.c)
 * Callees:
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407B8DC4 (KeRegisterAvailableCpusChangeNotification.c)
 */

__int64 __fastcall PsRegisterProcessAvailableCpusChangeNotification(
        volatile unsigned __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  return KeRegisterAvailableCpusChangeNotification(a1, a2, a3, a4, a5);
}
