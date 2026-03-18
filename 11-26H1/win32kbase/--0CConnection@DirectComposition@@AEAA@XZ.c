/*
 * XREFs of ??0CConnection@DirectComposition@@AEAA@XZ @ 0x140110818
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1401104F0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140110C80 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::CConnection(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *result; // rax

  *((_QWORD *)this + 7) = 8LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_BYTE *)this + 344) = 0;
  *((_DWORD *)this + 88) = 37120;
  *((_DWORD *)this + 89) = 37120;
  *((_QWORD *)this + 45) = 1LL;
  *((_DWORD *)this + 92) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 384) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  `vector constructor iterator'(
    (char *)this + 424,
    0x210uLL,
    0x12CuLL,
    (void *(*)(void *))DirectComposition::CConnection::CFrameStats::CFrameStats);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 2206,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CConnection::RemoteTexture,829571908,0>::CompareTableEntries,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CConnection::RemoteTexture,829571908,0>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  *((_DWORD *)this + 39726) = 0;
  *((_DWORD *)this + 2) = 1;
  InitializeSListHead((PSLIST_HEADER)this + 6);
  KeQueryPerformanceCounter((PLARGE_INTEGER)this + 23);
  result = this;
  *((_QWORD *)this + 22) = *((_QWORD *)this + 23) / 0x3CuLL;
  return result;
}
