/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1800909A0
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180090C00 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180026930 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 23);
  wil::details::shared_buffer::reset(this + 21);
  *this = (volatile signed __int32 *)&stdext::exception::`vftable';
}
