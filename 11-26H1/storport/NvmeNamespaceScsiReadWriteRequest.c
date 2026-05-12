/*
 * XREFs of NvmeNamespaceScsiReadWriteRequest @ 0x140118588
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceProcessRequest @ 0x140109418 (NvmeNamespaceProcessRequest.c)
 * Callees:
 *     RaidGetIoStartingLbaAndLength @ 0x140026030 (RaidGetIoStartingLbaAndLength.c)
 *     NvmeAdapterSubmitControllerNvmRequest @ 0x1400EEA40 (NvmeAdapterSubmitControllerNvmRequest.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiReadWriteRequest(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  __int64 v9; // r14
  __int64 result; // rax
  unsigned int v11; // r8d
  unsigned int i; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // r10d
  unsigned int v16; // ebp
  char v17; // r8
  char v18; // r9
  __int16 v19; // cx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v22 = 0LL;
  v9 = 0LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    v9 = a3;
    if ( v11 )
    {
      for ( i = 0; i < v11; ++i )
      {
        v13 = *(unsigned int *)(a3 + 4LL * i + 120);
        if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(a3 + 16) )
        {
          v14 = a3 + v13;
          if ( *(_DWORD *)(a3 + v13) == 67 )
          {
            if ( !v14 )
              break;
            if ( (*(_DWORD *)(a3 + 24) & 0xC0) == 0 )
              break;
            RaidGetIoStartingLbaAndLength(a4, (__int64)&v22, 0LL);
            v16 = *(_DWORD *)(a3 + 60);
            if ( !v16 || ((*(_DWORD *)(a1 + 64) - v15) & v16) != 0 )
              break;
            *(_DWORD *)(a3 + 20) = 10;
            memset_0((void *)(v14 + 8), 0, 0x64uLL);
            v17 = a4[1] & 8;
            if ( *a4 == 40 || *a4 == 0x88 )
              v18 = 2;
            else
              v18 = 1;
            v19 = v16 / *(_DWORD *)(a1 + 64);
            *(_DWORD *)(v14 + 20) = *(_DWORD *)(a1 + 56);
            v20 = v22;
            *(_WORD *)(v14 + 64) = v19 - 1;
            *(_DWORD *)(v14 + 64) &= 0xC3FFFFFF;
            *(_QWORD *)(v14 + 56) = v20;
            LODWORD(v20) = *(_DWORD *)(v14 + 64);
            *(_BYTE *)(v14 + 16) = v18;
            *(_DWORD *)(v14 + 16) &= 0xFFFFFCFF;
            *(_BYTE *)(v14 + 68) = 0;
            *(_QWORD *)(v14 + 72) = 0LL;
            v21 = v20 & 0xBFFFFFFF | (v17 != 0 ? 0x40000000 : 0);
            LODWORD(v20) = a5;
            *(_DWORD *)(v14 + 64) = v21 & 0x7FFFFFFF;
            result = NvmeAdapterSubmitControllerNvmRequest(
                       *(_QWORD *)(a1 + 16),
                       a3,
                       a2,
                       a1,
                       v20,
                       (__int64)NvmeNamespaceCompleteNvmRequest,
                       0LL);
            if ( (int)result >= 0 )
              return result;
            goto LABEL_21;
          }
        }
      }
    }
    SetSrbSenseData(a3, 6, 5, 36, 0);
    result = 3221225485LL;
  }
  else
  {
    result = 3221225659LL;
  }
LABEL_21:
  *(_DWORD *)(v9 + 20) = 0;
  return result;
}
