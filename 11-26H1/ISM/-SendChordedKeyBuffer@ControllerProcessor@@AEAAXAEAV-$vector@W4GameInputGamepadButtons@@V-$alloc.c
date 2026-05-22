/*
 * XREFs of ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017F5A0
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x18005F8B4 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180069F14 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV?$optional@W4GameInputGamepadButtons@@@std@@0@Z @ 0x18017D30C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV-$optional@W4GameInputGamepadButtons@@@st.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix@@@details@wil@@QEAA_NXZ @ 0x180181664 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_Me.c)
 */

void __fastcall ControllerProcessor::SendChordedKeyBuffer(ControllerProcessor *this, int **a2)
{
  int *v2; // rbx
  int v5; // esi
  int v6; // ebp
  int v7; // r8d
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp+10h]
  __int64 v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h]

  v2 = *a2;
  v5 = 0;
  while ( v2 != a2[1] )
  {
    v6 = *v2;
    v7 = *v2 & 1;
    if ( v7 != (v5 & 1) )
    {
      if ( *((_DWORD *)this + 70) )
      {
        ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xCFu, v7);
      }
      else
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::GetImpl'::`2'::impl) )
        {
          LODWORD(v11) = v6;
          BYTE4(v11) = 1;
          v8 = v11;
          LODWORD(v12) = v5;
          BYTE4(v12) = 1;
          v9 = v12;
        }
        else
        {
          BYTE4(v13) = 0;
          v8 = v13;
          BYTE4(v10) = 0;
          v9 = v10;
        }
        ControllerProcessor::BuildAndSendMouseInputInfo(this, v9, v8);
      }
    }
    v5 = v6;
    ++v2;
  }
}
