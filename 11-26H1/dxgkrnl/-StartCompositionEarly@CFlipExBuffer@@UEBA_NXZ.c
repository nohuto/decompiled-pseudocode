/*
 * XREFs of ?StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ @ 0x140067300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::StartCompositionEarly(CFlipExBuffer *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 100);
  result = 0;
  if ( v1 )
    return v1 == 1 && *((_DWORD *)this + 72) == 2;
  if ( *((_BYTE *)this + 643) )
    return *((_BYTE *)this + 645) != 0;
  return result;
}
