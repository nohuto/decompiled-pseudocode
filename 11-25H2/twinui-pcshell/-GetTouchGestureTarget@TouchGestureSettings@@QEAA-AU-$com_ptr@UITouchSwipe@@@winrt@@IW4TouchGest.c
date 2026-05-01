/*
 * XREFs of ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18056887C
 * Callers:
 *     ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x18056E864 (-PointersDown@TouchGestureProcessor@@QEAAXI@Z.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18056F4EC (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU2@@?$com_ptr@UITouchSwipe@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180568800 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU2@@-$com_ptr@UITouch.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall TouchGestureSettings::GetTouchGestureTarget(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v8; // rcx
  int v9; // ecx
  _QWORD *v10; // rax
  _DWORD *v11; // r9
  _DWORD *v12; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF

  *a2 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    v9 = IsGamingFullScreenExperienceActive(v8);
    if ( v9 )
    {
      v15[0] = &TouchGestureSettings::s_gestureTargetsForGamingFullScreenExperience;
      v15[1] = &HotkeyHandler::MoreSnapZonesHotkeyMaps::Default;
    }
    else
    {
      v14[0] = &TouchGestureSettings::s_gestureTargets;
      v14[1] = &TouchGestureSettings::s_gestureTargetsForGamingFullScreenExperience;
    }
    v10 = v14;
    if ( v9 )
      v10 = v15;
    v11 = (_DWORD *)*v10;
    v12 = (_DWORD *)v10[1];
    while ( v11 != v12 )
    {
      if ( *v11 == a4 && v11[1] == a3 )
        goto LABEL_18;
      v11 += 6;
    }
  }
  else
  {
    v11 = &TouchGestureSettings::s_gestureTargets;
    while ( *v11 != a4 || v11[1] != a3 )
    {
      v11 += 6;
      if ( v11 == (_DWORD *)&TouchGestureSettings::s_gestureTargetsForGamingFullScreenExperience )
        return a2;
    }
LABEL_18:
    v14[0] = *(_QWORD *)(a1 + 24);
    winrt::com_ptr<ITouchSwipe>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
      a2,
      (__int64 (__fastcall *)(_QWORD, __int64, void *, __int64 *))IUnknown_QueryService,
      v14,
      (__int64)(v11 + 2));
  }
  return a2;
}
