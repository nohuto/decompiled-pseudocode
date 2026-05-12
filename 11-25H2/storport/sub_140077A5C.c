/*
 * XREFs of sub_140077A5C @ 0x140077A5C
 * Callers:
 *     sub_14003AF90 @ 0x14003AF90 (sub_14003AF90.c)
 *     sub_140079F70 @ 0x140079F70 (sub_140079F70.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_140077A5C(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v3; // rcx
  IRP *v4; // rcx

  result = 1;
  v3 = *(_QWORD *)(a1 + 4960);
  if ( v3 )
  {
    v4 = *(IRP **)(v3 + 72);
    if ( v4 )
    {
      result = IoCancelIrp(v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 4960) + 72LL) = 0LL;
    }
  }
  return result;
}
