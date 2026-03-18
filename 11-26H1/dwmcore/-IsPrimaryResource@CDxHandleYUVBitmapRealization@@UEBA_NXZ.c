/*
 * XREFs of ?IsPrimaryResource@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802AF420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsPrimaryResource(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 6);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 116) != 0;
  return result;
}
