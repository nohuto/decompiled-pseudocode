/*
 * XREFs of UcpUnInitializeListHead @ 0x180157EA0
 * Callers:
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

void UcpUnInitializeListHead()
{
  __int64 v0; // rax

  if ( g_isUcpListInitialized )
  {
    while ( (__int64 *)UcpTriggeredList != &UcpTriggeredList )
    {
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList
        || (v0 = *(_QWORD *)UcpTriggeredList, *(_QWORD *)(*(_QWORD *)UcpTriggeredList + 8LL) != UcpTriggeredList) )
      {
        __fastfail(3u);
      }
      UcpTriggeredList = *(_QWORD *)UcpTriggeredList;
      *(_QWORD *)(v0 + 8) = &UcpTriggeredList;
      RtlFreeHeap_0();
    }
    g_isUcpListInitialized = 0;
  }
}
