/*
 * XREFs of SmKmInitialize @ 0x1408209A0
 * Callers:
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140640E84 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 (__fastcall *__fastcall SmKmInitialize(_QWORD *a1))(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, int); // rax

  memset_0(a1, 0, 0x118uLL);
  result = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  a1[32] = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  return result;
}
