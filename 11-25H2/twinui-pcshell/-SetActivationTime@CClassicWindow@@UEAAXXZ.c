/*
 * XREFs of ?SetActivationTime@CClassicWindow@@UEAAXXZ @ 0x1801F5380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CClassicWindow::SetActivationTime(struct _FILETIME *this)
{
  GetSystemTimeAsFileTime(this + 4);
}
