/*
 * XREFs of KcsaniReport @ 0x1405E5E10
 * Callers:
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KcsaniReport(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(unsigned __int8 *)(a1 + 25);
  KasaniValidationEnabled = 0;
  KeBugCheckEx(
    0x205u,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 16) | ((*(unsigned __int8 *)(a1 + 24) | (unsigned __int64)(2 * v2)) << 32),
    *(_QWORD *)(a2 + 32),
    *(unsigned int *)(a2 + 16) | ((*(unsigned __int8 *)(a2 + 24) | (2LL * *(unsigned __int8 *)(a2 + 25))) << 32));
}
