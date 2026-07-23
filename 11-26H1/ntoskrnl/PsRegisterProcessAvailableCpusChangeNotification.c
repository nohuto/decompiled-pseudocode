/*
 * XREFs of PsRegisterProcessAvailableCpusChangeNotification @ 0x1407F67A0
 * Callers:
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640444 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     MiZeroPageThread @ 0x140713D40 (MiZeroPageThread.c)
 * Callees:
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407BBE24 (KeRegisterAvailableCpusChangeNotification.c)
 */

__int64 __fastcall PsRegisterProcessAvailableCpusChangeNotification(
        struct _LIST_ENTRY ***a1,
        __int64 a2,
        __int64 a3,
        struct _LIST_ENTRY **a4,
        _QWORD *a5)
{
  return KeRegisterAvailableCpusChangeNotification(a1, a2, a3, a4, a5);
}
