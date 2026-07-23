/*
 * XREFs of RtlpCopyRemoteDebugInformation @ 0x180075000
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x1800BB000 (RtlpCommitQueryDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __fastcall RtlpCopyRemoteDebugInformation(__int64 a1)
{
  __int64 v1; // rdx
  NTSTATUS result; // eax
  unsigned int v4; // edi
  int v5; // ecx
  __int128 v6; // [rsp+70h] [rbp-39h]
  __int128 v7; // [rsp+90h] [rbp-19h]
  __int128 v8; // [rsp+A0h] [rbp-9h]
  __int128 v9; // [rsp+C0h] [rbp+17h]
  __int128 v10; // [rsp+D0h] [rbp+27h]
  ULONG_PTR RegionSize; // [rsp+110h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = a1 + *(_QWORD *)(a1 + 88);
  RegionSize = 0LL;
  BaseAddress = (PVOID)v1;
  v6 = *(_OWORD *)(v1 + 64);
  v7 = *(_OWORD *)(v1 + 96);
  v8 = *(_OWORD *)(v1 + 112);
  v9 = *(_OWORD *)(v1 + 144);
  v10 = *(_OWORD *)(v1 + 160);
  RegionSize = *(_QWORD *)(v1 + 72);
  if ( *((_QWORD *)&v6 + 1) > *(_QWORD *)(a1 + 88) || *((_QWORD *)&v6 + 1) < 0xD0uLL )
    return -1073741823;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 208LL;
    v4 = RegionSize - 208;
    if ( RtlpCommitQueryDebugInfo(a1, (unsigned int)(RegionSize - 208)) )
    {
      memmove((void *)(a1 + 208), (char *)BaseAddress + 208, v4);
      v5 = *(_DWORD *)(a1 + 64);
      if ( (v5 & 0x21C) != 0 )
      {
        *(_QWORD *)(a1 + 112) = v8;
        *(_QWORD *)(a1 + 152) = *((_QWORD *)&v9 + 1);
      }
      if ( (v5 & 0x41) != 0 )
        *(_QWORD *)(a1 + 96) = v7;
      if ( (v5 & 0x20) != 0 )
        *(_QWORD *)(a1 + 120) = *((_QWORD *)&v8 + 1);
      if ( (v5 & 2) != 0 )
        *(_QWORD *)(a1 + 104) = *((_QWORD *)&v7 + 1);
      if ( (v5 & 0x80u) != 0 )
        *(_QWORD *)(a1 + 144) = v9;
      if ( (v5 & 0xC00) != 0 )
        *(_QWORD *)(a1 + 168) = *((_QWORD *)&v10 + 1);
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
