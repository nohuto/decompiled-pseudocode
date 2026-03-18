/*
 * XREFs of DifObjTrkGetPluginContext @ 0x14064AEAC
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051C810 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
 *     DifObjTrkLookupItem @ 0x14064B060 (DifObjTrkLookupItem.c)
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
