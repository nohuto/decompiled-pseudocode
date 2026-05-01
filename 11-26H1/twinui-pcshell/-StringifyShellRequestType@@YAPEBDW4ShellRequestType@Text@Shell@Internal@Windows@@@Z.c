/*
 * XREFs of ?StringifyShellRequestType@@YAPEBDW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18048522C
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804838F0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     <none>
 */

const char *__fastcall StringifyShellRequestType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "None";
  v1 = a1 - 1;
  if ( !v1 )
    return "ShowView";
  v2 = v1 - 1;
  if ( !v2 )
    return "HideView";
  v3 = v2 - 1;
  if ( !v3 )
    return "PositionAndSizeUpdate";
  if ( v3 == 1 )
    return "HideAllViews";
  return "Unknown";
}
