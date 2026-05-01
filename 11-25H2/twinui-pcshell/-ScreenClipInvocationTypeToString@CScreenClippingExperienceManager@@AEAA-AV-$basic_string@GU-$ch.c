/*
 * XREFs of ?ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180394314
 * Callers:
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180393BE8 (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ @ 0x18039458C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ.c)
 */

char **__fastcall CScreenClippingExperienceManager::ScreenClipInvocationTypeToString(__int64 a1, char **a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  wchar_t *v11; // rdx

  v4 = a3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                if ( v10 == 1
                  && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56661439>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56661439>::GetImpl'::`2'::impl) )
                {
                  v11 = L"TextExtractorHotKey";
                }
                else
                {
                  v11 = L"ExperienceManager";
                }
              }
              else
              {
                v11 = L"ScreenRecorderHotKey";
              }
            }
            else
            {
              v11 = L"SearchBox";
            }
          }
          else
          {
            v11 = L"ScreenSketch";
          }
        }
        else
        {
          v11 = L"HotKey";
        }
      }
      else
      {
        v11 = L"PrintScreen";
      }
    }
    else
    {
      v11 = L"QuickActions";
    }
  }
  else
  {
    v11 = L"PenButton";
  }
  std::wstring::wstring(a2, v11);
  return a2;
}
