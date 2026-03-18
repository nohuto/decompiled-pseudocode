/*
 * XREFs of ??C?$checked_array_iterator@PEAG@stdext@@QEBAPEAGXZ @ 0x1801DCFF8
 * Callers:
 *     ??$move_backward_uninitialized@V?$basic_iterator@G@detail@@V?$checked_array_iterator@PEAG@stdext@@@detail@@YAXV?$basic_iterator@G@0@0V?$checked_array_iterator@PEAG@stdext@@@Z @ 0x18000A588 (--$move_backward_uninitialized@V-$basic_iterator@G@detail@@V-$checked_array_iterator@PEAG@stdext.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<unsigned short *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 2 * v1;
}
