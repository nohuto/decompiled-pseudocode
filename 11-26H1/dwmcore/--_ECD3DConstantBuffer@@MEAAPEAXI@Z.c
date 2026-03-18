/*
 * XREFs of ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x18012BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x18012BBFC (--1CD3DConstantBuffer@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::`vector deleting destructor'(CD3DConstantBuffer *this, char a2)
{
  CD3DConstantBuffer::~CD3DConstantBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
