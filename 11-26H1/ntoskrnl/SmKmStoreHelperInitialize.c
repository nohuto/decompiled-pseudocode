/*
 * XREFs of SmKmStoreHelperInitialize @ 0x1403EE308
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403EE368 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SmKmStoreHelperInitialize(__int64 a1, char a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x90uLL);
  *(_BYTE *)(a1 + 10) = 6;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_WORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  result = a1 + 40;
  *(_BYTE *)(a1 + 34) = 6;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_BYTE *)(a1 + 136) = a2;
  return result;
}
