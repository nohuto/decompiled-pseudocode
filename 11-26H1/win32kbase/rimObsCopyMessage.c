/*
 * XREFs of rimObsCopyMessage @ 0x14020F238
 * Callers:
 *     rimObsPopInputMessage @ 0x140177EAC (rimObsPopInputMessage.c)
 *     rimObsDeliverInputToObserver @ 0x14020F380 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x14020FDC0 (rimObsPushInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCalculateObserverMessageSize @ 0x14020EE54 (rimObsCalculateObserverMessageSize.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall rimObsCopyMessage(_DWORD *Src, int a2, void **a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  unsigned int v8; // eax
  int v9; // r12d

  v4 = a4;
  v8 = rimObsCalculateObserverMessageSize(Src);
  v9 = *Src;
  if ( (unsigned int)v4 < v8 )
    return 3221225507LL;
  if ( !v9 && v4 < *((_QWORD *)Src + 3) + 48LL )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 168);
  if ( a2 )
  {
    ProbeForWrite(a3, v4, 2u);
    memset(a3, 0, v4);
    RtlCopyToUser(a3, Src, 0x30uLL);
    if ( !v9 && *((_QWORD *)Src + 5) )
    {
      RtlWriteULong64ToUser(a3 + 5, a3 + 6);
      RtlCopyToUser(a3[5], *((void **)Src + 5), *((_QWORD *)Src + 3));
    }
  }
  else
  {
    memset(a3, 0, v4);
    *(_OWORD *)a3 = *(_OWORD *)Src;
    *((_OWORD *)a3 + 1) = *((_OWORD *)Src + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)Src + 2);
    if ( !v9 )
    {
      if ( *((_QWORD *)Src + 5) )
      {
        a3[5] = a3 + 6;
        memmove(a3 + 6, *((const void **)Src + 5), *((_QWORD *)Src + 3));
      }
    }
  }
  return 0LL;
}
