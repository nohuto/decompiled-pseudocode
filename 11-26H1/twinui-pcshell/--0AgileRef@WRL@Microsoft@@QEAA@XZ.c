/*
 * XREFs of ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x1801CC120
 * Callers:
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x18017B93C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::AgileRef *__fastcall Microsoft::WRL::AgileRef::AgileRef(Microsoft::WRL::AgileRef *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
