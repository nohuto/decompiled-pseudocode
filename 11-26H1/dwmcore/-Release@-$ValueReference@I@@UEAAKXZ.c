/*
 * XREFs of ?Release@?$ValueReference@I@@UEAAKXZ @ 0x18020DB50
 * Callers:
 *     ?Release@?$ValueReference@I@@W7EAAKXZ @ 0x1802A1490 (-Release@-$ValueReference@I@@W7EAAKXZ.c)
 *     ?Release@?$ValueReference@I@@WBA@EAAKXZ @ 0x1802A14A0 (-Release@-$ValueReference@I@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ValueReference<unsigned int>::Release()
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::Release();
}
