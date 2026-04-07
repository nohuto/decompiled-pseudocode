/*
 * XREFs of ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001AA38
 * Callers:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsShellManaged(CWindowData *this)
{
  bool result; // al

  result = *((_BYTE *)this + 740) >> 7;
  if ( *((char *)this + 740) < 0 )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return result;
}
