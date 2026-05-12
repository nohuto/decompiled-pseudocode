/*
 * XREFs of NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E89E8
 * Callers:
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400EE3F8 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4 (NvmeAdapterStopFabricNvmeControllerOperations.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     GetNvmeHostId @ 0x140075074 (GetNvmeHostId.c)
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 *     GetNvmeHostVersion @ 0x140075828 (GetNvmeHostVersion.c)
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 */

void __fastcall NvmeAdapterFabricRegisterDeregisterHost(_QWORD *a1, char a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  __int64 NvmeSrb; // rbx
  char *Pool; // rdi
  unsigned int v8; // r8d
  unsigned int i; // ecx
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // eax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  const wchar_t *v20; // r9

  v2 = a1[12];
  v4 = a1[16];
  NvmeSrb = RaidAllocateNvmeSrb((__int64)a1, 0);
  if ( NvmeSrb )
  {
    Pool = (char *)RaidAllocatePool(64LL, 2076LL, 1380147538LL, *(_QWORD *)(v4 + 8));
    if ( Pool )
    {
      if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
      {
        v8 = *(_DWORD *)(NvmeSrb + 56);
        if ( v8 )
        {
          for ( i = 0; i < v8; ++i )
          {
            v10 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
            if ( (unsigned int)v10 >= 0x80 && (unsigned int)v10 < *(_DWORD *)(NvmeSrb + 16) )
            {
              v11 = NvmeSrb + v10;
              if ( *(_DWORD *)(NvmeSrb + v10) == 67 )
                goto LABEL_12;
            }
          }
        }
      }
      v11 = 0LL;
LABEL_12:
      v12 = *(_DWORD *)(v11 + 56);
      *(_BYTE *)(v11 + 16) = 33;
      *(_DWORD *)(v11 + 56) = v12 & 0xFFFFFFF0 | (a2 == 0);
      *(_BYTE *)(v11 + 80) = 1;
      *(_WORD *)(v11 + 106) = 0;
      *(_DWORD *)Pool = 2076;
      *((_QWORD *)Pool + 1) = 1LL;
      *((_DWORD *)Pool + 4) = 65538;
      *((_WORD *)Pool + 11) = 95;
      if ( (int)GetNvmeHostNQN(1, Pool + 24) >= 0 )
      {
        GetNvmeHostVersion(Pool + 536);
        Pool[1024] = *(_BYTE *)(*(_QWORD *)(v2 + 24) + 4LL);
        Pool[1025] = *(_BYTE *)(*(_QWORD *)(v2 + 24) + 8LL);
        if ( (int)GetNvmeHostNQN(0, Pool + 1280) >= 0 )
        {
          v13 = Pool + 1536;
          v14 = 2LL;
          v15 = (_OWORD *)(*(_QWORD *)(v2 + 24) + 72LL);
          do
          {
            *v13 = *v15;
            v13[1] = v15[1];
            v13[2] = v15[2];
            v13[3] = v15[3];
            v13[4] = v15[4];
            v13[5] = v15[5];
            v13[6] = v15[6];
            v13 += 8;
            v16 = v15[7];
            v15 += 8;
            *(v13 - 1) = v16;
            --v14;
          }
          while ( v14 );
          *((_DWORD *)Pool + 512) = 1052;
          *((_WORD *)Pool + 1026) = 1;
          *((_DWORD *)Pool + 514) = 1048577;
          if ( (int)GetNvmeHostId(Pool + 2060) >= 0 )
          {
            *(_QWORD *)(NvmeSrb + 64) = Pool;
            *(_DWORD *)(NvmeSrb + 60) = 2076;
            *(_DWORD *)(NvmeSrb + 24) = 128;
            *(_WORD *)(v11 + 82) = 2;
            v19 = NvmeAdapterProcessControllerQueueRequestSync(a1[89], NvmeSrb, v17, v18, 1, 0LL, 0LL, 0);
            if ( v19 < 0 || *(_BYTE *)(NvmeSrb + 3) != 1 || (*(_WORD *)(v11 + 86) & 0xFFE) != 0 )
            {
              v20 = L"Host registration failed";
              if ( !a2 )
                v20 = L"Host deregistration failed";
              StorEtwNvmeControllerEvent(
                (__int64)a1,
                1,
                3LL,
                (__int64)v20,
                L"Status",
                v19,
                L"SrbStatus",
                *(_BYTE *)(NvmeSrb + 3),
                L"SCT",
                ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
                L"SC",
                (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
                L"Register",
                a2 != 0,
                (void *)&word_140152E7C,
                0,
                (void *)&word_140152E7C,
                0,
                (void *)&word_140152E7C,
                0);
            }
          }
        }
      }
      ExFreePoolWithTag(Pool, 0x52436152u);
    }
    ExFreePoolWithTag((PVOID)NvmeSrb, 0x72536152u);
  }
}
