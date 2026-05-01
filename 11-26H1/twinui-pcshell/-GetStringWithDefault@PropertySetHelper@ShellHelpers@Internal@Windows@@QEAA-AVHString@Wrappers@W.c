/*
 * XREFs of ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x180171FBC
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180377D0C (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A4F04 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180414750 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x180172068 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x18017283C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::WRL::Wrappers::HString *__fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        Microsoft::WRL::Wrappers::HString *a2,
        HSTRING a3,
        const unsigned __int16 *a4)
{
  unsigned __int64 v8; // r8
  const unsigned __int16 *v9; // rdx

  *(_QWORD *)a2 = 0LL;
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(a1, a3) < 0 )
  {
    if ( !a4 )
    {
      LODWORD(v8) = 0;
      v9 = &pvData;
      goto LABEL_7;
    }
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = a4;
LABEL_7:
      Microsoft::WRL::Wrappers::HString::Set(a2, v9, v8);
    }
  }
  return a2;
}
