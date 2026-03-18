/*
 * XREFs of ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18018CE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetRotation(CDxHandleBitmapRealization *this)
{
  unsigned int v1; // r8d

  v1 = 1;
  switch ( *((_DWORD *)this + 43) )
  {
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
  }
  return v1;
}
