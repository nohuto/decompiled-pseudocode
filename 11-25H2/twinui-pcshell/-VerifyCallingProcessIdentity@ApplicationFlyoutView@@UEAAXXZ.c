/*
 * XREFs of ?VerifyCallingProcessIdentity@ApplicationFlyoutView@@UEAAXXZ @ 0x1805D8960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationFlyoutView::VerifyCallingProcessIdentity(LPCWCH **this)
{
  Utils::ProtocolLauncher::VerifyCallingProcessIsTrustedHandlerForUriScheme(this[3]);
}
