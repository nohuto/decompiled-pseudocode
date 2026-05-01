/*
 * XREFs of ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x1801BCEA8
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180370488 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039C7E0 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180409880 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x180045360 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x1801BCF54 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::WRL::Wrappers::HString *__fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        Microsoft::WRL::Wrappers::HString *a2,
        HSTRING a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  const unsigned __int16 *v10; // rdx

  *(_QWORD *)a2 = 0LL;
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(a1, a3, v8, a2) < 0 )
  {
    if ( !a4 )
    {
      LODWORD(v9) = 0;
      v10 = &LocaleName;
      goto LABEL_7;
    }
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = a4;
LABEL_7:
      Microsoft::WRL::Wrappers::HString::Set(a2, v10, v9);
    }
  }
  return a2;
}
