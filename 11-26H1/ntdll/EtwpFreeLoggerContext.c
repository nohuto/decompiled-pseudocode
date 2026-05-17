/*
 * XREFs of EtwpFreeLoggerContext @ 0x180079258
 * Callers:
 *     EtwpStopUmLogger @ 0x180076678 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     EtwpFreeStreamIndexMap @ 0x180079214 (EtwpFreeStreamIndexMap.c)
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 *     EtwpShutdownCompression @ 0x18010DCFC (EtwpShutdownCompression.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v6; // r14
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = 2LL * *(unsigned int *)(a1 + 20);
  v7 = -3000000LL;
  if ( *(int *)(EtwpLoggerArray + 8 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v7);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v8 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 408, &v8, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 120));
  NtClose(*(HANDLE *)(a1 + 112));
  RtlDeleteCriticalSection(a1 + 72);
  if ( *(_QWORD *)(a1 + 144) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 136));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 168));
  v3 = *(_QWORD **)(a1 + 448);
  while ( v3 != (_QWORD *)(a1 + 448) )
  {
    v3 = (_QWORD *)*v3;
    RtlFreeHeap_0();
  }
  v4 = *(_QWORD **)(a1 + 464);
  while ( v4 != (_QWORD *)(a1 + 464) )
  {
    v6 = (_QWORD *)v4[3];
    while ( v6 != v4 + 3 )
    {
      v6 = (_QWORD *)*v6;
      RtlFreeHeap_0();
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap_0();
  }
  if ( *(_QWORD *)(a1 + 496) )
    RtlFreeHeap_0();
  if ( *(_QWORD *)(a1 + 504) )
    RtlFreeHeap_0();
  if ( *(_QWORD *)(a1 + 520) )
    RtlFreeHeap_0();
  if ( *(_QWORD *)(a1 + 536) )
    RtlFreeHeap_0();
  EtwpFreeStreamIndexMap(a1);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(a1 + 20) + EtwpLoggerArray + 8));
  return RtlFreeHeap_0();
}
