/*
 * XREFs of NvmeAdapterMapDataBuffer @ 0x1400D9A10
 * Callers:
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344 (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 * Callees:
 *     RaidGetSystemAddressForMdl @ 0x14002D3D0 (RaidGetSystemAddressForMdl.c)
 */

__int64 __fastcall NvmeAdapterMapDataBuffer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  char v5; // al
  unsigned int v6; // r9d
  __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int SystemAddressForMdl; // eax
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 168);
  v3 = 0;
  if ( !*(_QWORD *)(a2 + 160) || !*(_QWORD *)(a2 + 104) )
    return 0LL;
  v5 = *(_BYTE *)(a1 + 265);
  if ( v5 == 3 || !*(_QWORD *)(v2 + 64) && *(_DWORD *)(v2 + 60) )
    goto LABEL_18;
  if ( v5 == 2 )
  {
    if ( *(_BYTE *)(v2 + 2) == 40 )
    {
      v6 = *(_DWORD *)(v2 + 56);
      if ( v6 )
      {
        for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
        {
          v8 = *(unsigned int *)(v2 + 4 * i + 120);
          if ( (unsigned int)v8 >= 0x80 && (unsigned int)v8 < *(_DWORD *)(v2 + 16) )
          {
            v9 = v2 + v8;
            if ( *(_DWORD *)(v2 + v8) == 67 )
              goto LABEL_16;
          }
        }
      }
    }
    v9 = 0LL;
LABEL_16:
    v10 = (unsigned __int8)*(_DWORD *)(v9 + 16);
    if ( v10 != 2 && v10 != 1 )
    {
LABEL_18:
      v11 = *(_QWORD *)(a2 + 160);
      v12 = *(_QWORD *)(v2 + 64);
      v16 = v12;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
      {
        SystemAddressForMdl = RaidGetSystemAddressForMdl(v13, v12, *(_BYTE *)(v11 + 64) != 0 ? 16 : 32, &v16);
        v12 = v16;
        v3 = SystemAddressForMdl;
      }
      if ( v3 >= 0 )
      {
        *(_QWORD *)(v2 + 64) = v12;
        *(_BYTE *)(a2 + 17) |= 0x40u;
      }
    }
  }
  return (unsigned int)v3;
}
