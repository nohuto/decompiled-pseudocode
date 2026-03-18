/*
 * XREFs of ?IsIntermediate@CDeviceTextureTarget@@UEBA_NXZ @ 0x1801A7ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsIntermediate(CDeviceTextureTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 50) )
    return *((_BYTE *)this + 49) == 0;
  return result;
}
