/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_3ea6d66b8f4bee0c4c71a46825e5cf7e_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805F11C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@23@XZ @ 0x1805F1930 (--$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActiv.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_3ea6d66b8f4bee0c4c71a46825e5cf7e_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager>(
    a2,
    a1);
  return a1;
}
