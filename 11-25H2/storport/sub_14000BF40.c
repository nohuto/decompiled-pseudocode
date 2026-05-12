/*
 * XREFs of sub_14000BF40 @ 0x14000BF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 */

__int64 __fastcall sub_14000BF40(__int64 a1)
{
  __int64 v1; // rdx
  IRP *v2; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  v2 = *(IRP **)(a1 + 160);
  *(_BYTE *)(v1 + 4560) = 0;
  return sub_14000CE18(v2);
}
