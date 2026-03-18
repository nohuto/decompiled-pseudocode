/*
 * XREFs of ?SetDirectFlip@CFlipExBuffer@@UEAAX_N0@Z @ 0x1400A3CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SetDirectFlip(CFlipExBuffer *this, char a2, char a3)
{
  *((_BYTE *)this + 643) = a2;
  *((_BYTE *)this + 645) = a3;
}
