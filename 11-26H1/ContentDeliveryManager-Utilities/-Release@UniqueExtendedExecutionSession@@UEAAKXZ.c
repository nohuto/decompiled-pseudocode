/*
 * XREFs of ?Release@UniqueExtendedExecutionSession@@UEAAKXZ @ 0x1800904E0
 * Callers:
 *     ?Release@UniqueExtendedExecutionSession@@W7EAAKXZ @ 0x1800904F0 (-Release@UniqueExtendedExecutionSession@@W7EAAKXZ.c)
 *     ?Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ @ 0x180090500 (-Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UniqueExtendedExecutionSession::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
