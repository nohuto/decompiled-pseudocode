/*
 * XREFs of NvmeNamespaceScsiUnmapRequest @ 0x14011889C
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceProcessRequest @ 0x140109418 (NvmeNamespaceProcessRequest.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeNamespaceIsDeallocateSupported @ 0x140044F68 (NvmeNamespaceIsDeallocateSupported.c)
 *     NvmeAdapterControllerAllocateDmaBuffer @ 0x1400E6570 (NvmeAdapterControllerAllocateDmaBuffer.c)
 *     NvmeAdapterSubmitControllerNvmRequest @ 0x1400EEA40 (NvmeAdapterSubmitControllerNvmRequest.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiUnmapRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PHYSICAL_ADDRESS *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  _BYTE *v9; // r13
  __int64 v10; // rax
  unsigned int v11; // ebp
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r11
  unsigned int v16; // r8d
  unsigned int i; // ecx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int16 v22; // bp
  unsigned __int16 v23; // ax
  char v24; // dl
  PHYSICAL_ADDRESS *Pool; // rax
  __int64 v26; // r8
  void *DmaBuffer; // rax
  unsigned int v28; // r10d
  char *v29; // r8
  char *v30; // rdx
  PHYSICAL_ADDRESS v31; // rcx
  char v32; // al
  PHYSICAL_ADDRESS v33; // rcx
  int v34; // eax
  unsigned int v36; // [rsp+40h] [rbp-48h]
  unsigned __int16 v39; // [rsp+A0h] [rbp+18h]

  v6 = 0LL;
  v7 = 0LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v8 = 64LL;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    v8 = 24LL;
  v9 = *(_BYTE **)(v8 + a3);
  v10 = 60LL;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    v10 = 16LL;
  v11 = *(_DWORD *)(v10 + a3);
  v36 = v11;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    if ( NvmeNamespaceIsDeallocateSupported(a1) && (*(_BYTE *)(v14 + 1) & 1) == 0 )
    {
      v16 = *(_DWORD *)(v13 + 56);
      v7 = a3;
      if ( v16 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v18 = *(unsigned int *)(a3 + 4LL * i + 120);
          if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(a3 + 16) )
          {
            v19 = a3 + v18;
            if ( *(_DWORD *)(a3 + v18) == 67 )
            {
              if ( !v19 )
                break;
              if ( v11 < 0x18 )
              {
                SetSrbSenseData(a3, 21, 5, 36, 0);
                v12 = -1073741789;
                goto LABEL_35;
              }
              v20 = *(_QWORD *)(v15 + 16);
              HIBYTE(v39) = v9[2];
              LOBYTE(v39) = v9[3];
              v21 = *(_QWORD *)(v20 + 600);
              v22 = v39 >> 4;
              if ( !v21 || (v23 = *(unsigned __int8 *)(v21 + 3), !(_BYTE)v23) )
                v23 = 256;
              if ( v22 > v23 )
              {
                v24 = 21;
                goto LABEL_34;
              }
              Pool = (PHYSICAL_ADDRESS *)RaidAllocatePool(
                                           64LL,
                                           40LL,
                                           1296982354LL,
                                           *(_QWORD *)(*(_QWORD *)(v20 + 128) + 8LL));
              v6 = Pool;
              if ( !Pool )
              {
                v12 = -1073741801;
                goto LABEL_35;
              }
              DmaBuffer = NvmeAdapterControllerAllocateDmaBuffer(
                            *(_QWORD *)(a1 + 16),
                            16 * (unsigned int)v22,
                            v26,
                            Pool + 4);
              v6[3].QuadPart = (__int64)DmaBuffer;
              if ( !DmaBuffer )
              {
                v12 = -1073741801;
                goto LABEL_35;
              }
              v28 = 0;
              v6->QuadPart = a2;
              v6[2].LowPart = v36;
              v6[1].QuadPart = (__int64)v9;
              v6[2].HighPart = v22;
              if ( v22 )
              {
                v29 = v9 + 10;
                do
                {
                  v30 = &v29[-10LL - (_QWORD)v9];
                  v31 = v6[3];
                  ++v28;
                  v30[v31.QuadPart + 15] = *(v29 - 2);
                  v30[v31.QuadPart + 14] = *(v29 - 1);
                  v32 = *v29;
                  v29 += 16;
                  v30[v31.QuadPart + 13] = v32;
                  v30[v31.QuadPart + 12] = *(v29 - 15);
                  v30[v31.QuadPart + 11] = *(v29 - 14);
                  v30[v31.QuadPart + 10] = *(v29 - 13);
                  v30[v31.QuadPart + 9] = *(v29 - 12);
                  v30[v31.QuadPart + 8] = *(v29 - 11);
                  v33 = v6[3];
                  v30[v33.QuadPart + 7] = *(v29 - 10);
                  v30[v33.QuadPart + 6] = *(v29 - 9);
                  v30[v33.QuadPart + 5] = *(v29 - 8);
                  v30[v33.QuadPart + 4] = *(v29 - 7);
                }
                while ( v28 < v22 );
              }
              *(_DWORD *)(a3 + 20) = 10;
              *(PHYSICAL_ADDRESS *)(a3 + 64) = v6[3];
              *(_DWORD *)(a3 + 60) = 16 * v22;
              memset_0((void *)(v19 + 8), 0, 0x64uLL);
              v34 = *(_DWORD *)(a1 + 56);
              *(_DWORD *)(v19 + 60) |= 4u;
              *(_DWORD *)(v19 + 20) = v34;
              *(_BYTE *)(v19 + 16) = 9;
              *(_BYTE *)(v19 + 56) = v22 - 1;
              v12 = NvmeAdapterSubmitControllerNvmRequest(
                      *(_QWORD *)(a1 + 16),
                      a3,
                      0LL,
                      a1,
                      a5,
                      (__int64)NvmeNamespaceCompleteNvmRequest,
                      (__int64)v6);
              if ( v12 >= 0 )
                return (unsigned int)v12;
              goto LABEL_35;
            }
          }
        }
      }
    }
    v24 = 6;
LABEL_34:
    SetSrbSenseData(a3, v24, 5, 36, 0);
    v12 = -1073741811;
  }
  else
  {
    v12 = -1073741637;
  }
LABEL_35:
  *(_DWORD *)(v7 + 20) = 0;
  if ( v6 )
  {
    *(PHYSICAL_ADDRESS *)(v7 + 64) = v6[1];
    *(_DWORD *)(v7 + 60) = v6[2].LowPart;
    ExFreePoolWithTag(v6, 0x4D4E6152u);
  }
  return (unsigned int)v12;
}
