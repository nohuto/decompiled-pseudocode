/*
 * XREFs of PspFreezeProcessWorker @ 0x140800CA0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsSuspendProcess @ 0x1408029A0 (PsSuspendProcess.c)
 *     PsCaptureExceptionPort @ 0x140A9FC4C (PsCaptureExceptionPort.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  _DWORD **ServerSiloGlobals; // rax
  void *v3; // rax

  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  if ( (a1[383] & 0x1000) == 0 && a1 != PsIdleProcess && a1 != ServerSiloGlobals[106] && (a1[383] & 0x40000000) == 0 )
  {
    v3 = (void *)PsCaptureExceptionPort(a1);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( (a1[125] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
