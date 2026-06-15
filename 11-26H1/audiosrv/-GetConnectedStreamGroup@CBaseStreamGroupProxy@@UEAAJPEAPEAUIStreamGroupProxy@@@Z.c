/*
 * XREFs of ?GetConnectedStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x1800810A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IStreamGroupProxy **a2)
{
  return (**(__int64 (__fastcall ***)(CBaseStreamGroupProxy *, GUID *, struct IStreamGroupProxy **))this)(
           this,
           &GUID_167ec254_274a_42dd_9502_0526983dab9f,
           a2);
}
