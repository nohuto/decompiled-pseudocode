/*
 * XREFs of DifObjTrkGetPluginContext @ 0x14064EA8C
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     DifObjTrkLookupItem @ 0x14064EC40 (DifObjTrkLookupItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DifObjTrkGetPluginContext(int a1)
{
  __int64 result; // rax

  result = DifPluginSettings[a1];
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}
