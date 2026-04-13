/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x18002A30C
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x18002CAA0 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800400D0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 192));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 176));
  exception::~exception(this);
}
