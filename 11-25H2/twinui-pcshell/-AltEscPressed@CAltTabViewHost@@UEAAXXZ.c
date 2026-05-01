/*
 * XREFs of ?AltEscPressed@CAltTabViewHost@@UEAAXXZ @ 0x18049C110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAltTabViewHost::AltEscPressed(CAltTabViewHost *this)
{
  CMultitaskingViewHostBase<IAltTabViewHost>::DismissView((__int64)this - 120);
}
