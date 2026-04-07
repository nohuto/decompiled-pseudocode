/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x18009D29C
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x18009D400 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004D058 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 23);
  wil::details::shared_buffer::reset(this + 21);
  *this = (volatile signed __int32 *)&stdext::exception::`vftable';
}
