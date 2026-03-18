/*
 * XREFs of ??1?$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ @ 0x14026F388
 * Callers:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x14010B230 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x14010B3C4 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CAutoDestroy<CManualResetEvent>::~CAutoDestroy<CManualResetEvent>(void ***a1)
{
  void **v1; // rcx

  v1 = *a1;
  if ( v1 )
    CManualResetEvent::Destroy(v1);
}
