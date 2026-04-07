/*
 * XREFs of ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x180093164
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x180090660 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800928CC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180093610 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180026930 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::shared_buffer::assign(
        volatile signed __int32 **this,
        int *a2,
        volatile signed __int32 *a3)
{
  wil::details::shared_buffer::reset(this);
  if ( a2 )
  {
    *this = a2;
    this[1] = a3;
    _InterlockedIncrement(a2);
  }
}
