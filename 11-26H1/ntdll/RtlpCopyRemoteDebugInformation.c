/*
 * XREFs of RtlpCopyRemoteDebugInformation @ 0x1800902A0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180092020 (RtlpCommitQueryDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpCopyRemoteDebugInformation(__int64 a1)
{
  _OWORD *v1; // rdx
  __int64 result; // rax
  unsigned int v4; // edi
  int v5; // ecx
  __int128 v6; // [rsp+70h] [rbp-39h]
  __int128 v7; // [rsp+90h] [rbp-19h]
  __int128 v8; // [rsp+A0h] [rbp-9h]
  __int128 v9; // [rsp+C0h] [rbp+17h]
  __int128 v10; // [rsp+D0h] [rbp+27h]
  __int64 v11; // [rsp+110h] [rbp+67h] BYREF
  _OWORD *v12; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = (_OWORD *)(a1 + *(_QWORD *)(a1 + 88));
  v11 = 0LL;
  v12 = v1;
  v6 = v1[4];
  v7 = v1[6];
  v8 = v1[7];
  v9 = v1[9];
  v10 = v1[10];
  v11 = *((_QWORD *)&v6 + 1);
  if ( *((_QWORD *)&v6 + 1) > *(_QWORD *)(a1 + 88) || *((_QWORD *)&v6 + 1) < 0xD0uLL )
    return 3221225473LL;
  result = ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v11, 4096, 4);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 208LL;
    v4 = v11 - 208;
    if ( RtlpCommitQueryDebugInfo(a1, (unsigned int)(v11 - 208)) )
    {
      memmove((void *)(a1 + 208), v12 + 13, v4);
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
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
