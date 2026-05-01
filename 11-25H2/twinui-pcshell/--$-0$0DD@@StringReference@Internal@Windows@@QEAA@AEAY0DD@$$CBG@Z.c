/*
 * XREFs of ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x180298DC4
 * Callers:
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x18029884C (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[51])
{
  if ( WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreInputViewManager",
         0x32u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
