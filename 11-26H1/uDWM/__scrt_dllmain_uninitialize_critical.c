/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x18008E368
 * Callers:
 *     dllmain_crt_process_detach @ 0x18008FC20 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x18008FFDC (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

__int64 _scrt_dllmain_uninitialize_critical()
{
  __int64 v0; // rcx

  _scrt_stub_for_acrt_uninitialize_critical(0LL);
  return _scrt_stub_for_acrt_uninitialize_critical(v0);
}
