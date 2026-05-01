/*
 * XREFs of ??__FsearchBoxInStartExtension@?2???R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ@YAXXZ @ 0x1806DFE70
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

void __fastcall `_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::`dynamic atexit destructor for 'searchBoxInStartExtension''()
{
  if ( `_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::searchBoxInStartExtension )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::searchBoxInStartExtension);
}
