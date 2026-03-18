/*
 * XREFs of EditionxxxHandleGhostOnThreadDestroyed @ 0x1402AEFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x14018123C (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall EditionxxxHandleGhostOnThreadDestroyed(struct tagTHREADINFO *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 474);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) < 0 )
    xxxHandleHealthyThread(a1, a2);
  v3 = (_QWORD *)*((_QWORD *)a1 + 161);
  if ( v3 )
  {
    *((_QWORD *)a1 + 161) = 0LL;
    do
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      Win32FreePool(v4);
    }
    while ( v3 );
  }
}
