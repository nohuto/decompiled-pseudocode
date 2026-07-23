/*
 * XREFs of MiCheckSystemDllUnmap @ 0x1409E6908
 * Callers:
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 * Callees:
 *     MiLogSystemDllUnmap @ 0x1406FCCA4 (MiLogSystemDllUnmap.c)
 *     PsWow64GetProcessNtdllType @ 0x1409E6F4C (PsWow64GetProcessNtdllType.c)
 *     PsQuerySystemDllInfo @ 0x1409E8308 (PsQuerySystemDllInfo.c)
 */

void __fastcall MiCheckSystemDllUnmap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SystemDllInfo; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int ProcessNtdllType; // eax
  __int64 v7; // rax
  __int64 v8; // r10

  if ( stru_140E366D8.FirstArgument
    && (*(_DWORD *)(a3 + 500) & 8) == 0
    && ((SystemDllInfo = PsQuerySystemDllInfo(0LL)) != 0 && *(_QWORD *)(SystemDllInfo + 24) == v5
     || (ProcessNtdllType = PsWow64GetProcessNtdllType(v4)) != 0
     && (v7 = PsQuerySystemDllInfo(ProcessNtdllType)) != 0
     && *(_QWORD *)(v7 + 24) == v8) )
  {
    MiLogSystemDllUnmap();
  }
}
