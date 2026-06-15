/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x180031F44
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180032130 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800361B8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 192));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 176));
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  o___std_exception_destroy_0();
}
