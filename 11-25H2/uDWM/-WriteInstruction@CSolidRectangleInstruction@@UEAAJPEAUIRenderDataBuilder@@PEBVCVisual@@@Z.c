/*
 * XREFs of ?WriteInstruction@CSolidRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18007E7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSolidRectangleInstruction::WriteInstruction(
        CSolidRectangleInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, char *, char *))(*(_QWORD *)a2 + 96LL))(
           a2,
           (char *)this + 32,
           (char *)this + 16);
}
