/*
 * XREFs of PpvUtilIsPdo @ 0x140C27164
 * Callers:
 *     IovUtilIsWdmStack @ 0x140C37120 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140C40BF0 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpvUtilIsPdo(__int64 a1)
{
  __int64 v1; // rax

  return a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0 && (*(_DWORD *)(v1 + 396) & 0x20000) == 0;
}
