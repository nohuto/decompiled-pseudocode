/*
 * XREFs of ?GetSize@CCachedImageProducer@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180144EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CCachedImageProducer::GetSize(CCachedImageProducer *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 1);
  return (struct D2D_SIZE_U)a2;
}
