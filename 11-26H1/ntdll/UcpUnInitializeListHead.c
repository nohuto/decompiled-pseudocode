/*
 * XREFs of UcpUnInitializeListHead @ 0x180157D70
 * Callers:
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

void UcpUnInitializeListHead()
{
  __int64 v0; // r8
  __int64 v1; // rax

  if ( g_isUcpListInitialized )
  {
    while ( 1 )
    {
      v0 = UcpTriggeredList;
      if ( (__int64 *)UcpTriggeredList == &UcpTriggeredList )
        break;
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList
        || (v1 = *(_QWORD *)UcpTriggeredList, *(_QWORD *)(*(_QWORD *)UcpTriggeredList + 8LL) != UcpTriggeredList) )
      {
        __fastfail(3u);
      }
      UcpTriggeredList = *(_QWORD *)UcpTriggeredList;
      *(_QWORD *)(v1 + 8) = &UcpTriggeredList;
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(v0 - 32));
    }
    g_isUcpListInitialized = 0;
  }
}
