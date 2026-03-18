/*
 * XREFs of ?GetDisplaySource@CDDisplaySwapChain@@UEBAPEAUIDisplaySource@Core@Display@Devices@Windows@@XZ @ 0x18029AC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::Devices::Display::Core::IDisplaySource *__fastcall CDDisplaySwapChain::GetDisplaySource(
        CDDisplaySwapChain *this)
{
  return (struct Windows::Devices::Display::Core::IDisplaySource *)*((_QWORD *)this + 50);
}
