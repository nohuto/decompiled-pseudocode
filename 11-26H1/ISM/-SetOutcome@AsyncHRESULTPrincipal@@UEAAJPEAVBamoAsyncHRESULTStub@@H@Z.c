/*
 * XREFs of ?SetOutcome@AsyncHRESULTPrincipal@@UEAAJPEAVBamoAsyncHRESULTStub@@H@Z @ 0x180178240
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XJ@std@@QEBAXJ@Z @ 0x180176D98 (--R-$_Func_class@XJ@std@@QEBAXJ@Z.c)
 */

__int64 __fastcall AsyncHRESULTPrincipal::SetOutcome(
        AsyncHRESULTPrincipal *this,
        struct BamoAsyncHRESULTStub *a2,
        int a3)
{
  *((_BYTE *)this + 120) = 0;
  std::_Func_class<void,long>::operator()((__int64)this + 56, a3);
  return 0LL;
}
