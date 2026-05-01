/*
 * XREFs of ?StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1804759FC
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180474640 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18046894C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 */

const char *__fastcall StringifyCoreKeyboardModality(int a1)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  bool v7; // zf
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 2;
          if ( v4 )
          {
            v5 = v4 - 12;
            if ( v5 )
            {
              v6 = v5 - 240;
              if ( !v6 )
                return "Gamepad";
              v7 = v6 == 256;
              goto LABEL_16;
            }
            return "Pen";
          }
          return "Keyboard";
        }
        return "Touch";
      }
      return "Mouse";
    }
    return "None";
  }
  if ( !a1 )
    return "None";
  v9 = a1 - 1;
  if ( !v9 )
    return "Mouse";
  v10 = v9 - 1;
  if ( !v10 )
    return "Touch";
  v11 = v10 - 2;
  if ( !v11 )
    return "Keyboard";
  v12 = v11 - 12;
  if ( !v12 )
    return "Pen";
  v7 = v12 == 496;
LABEL_16:
  if ( v7 )
    return "Gaze";
  else
    return "Unknown";
}
