/*
 * XREFs of NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400F02D0 (NvmeControllerAddNvmeNamespaceToList.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x140100A2C (NvmeControllerDeleteNvmeNamespace.c)
 */

void __fastcall NvmeAdapterStartFabricControllerNamespaces(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v3; // r14
  int ControllerIdentifyData; // eax
  _DWORD *v5; // rsi
  unsigned __int16 i; // cx
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  char *v14; // rdx
  char v15; // [rsp+E0h] [rbp+8h]
  char v16; // [rsp+E8h] [rbp+10h]
  __int64 v17; // [rsp+F0h] [rbp+18h] BYREF
  PVOID P; // [rsp+F8h] [rbp+20h] BYREF

  P = 0LL;
  v1 = 0;
  v17 = 0LL;
  v15 = 0;
  v3 = 0;
  v16 = 0;
  ControllerIdentifyData = NvmeAdapterGetControllerIdentifyData(a1, 0, 2, 0, 0, &P);
  v5 = P;
  if ( ControllerIdentifyData >= 0 )
  {
    for ( i = 0; i < 0x400u; ++i )
    {
      v7 = *((_DWORD *)P + i);
      if ( !v7 )
        break;
      if ( v7 <= v1 || v7 > *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL) )
      {
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFAFFFFuLL | 0x40000;
        StorEtwNvmeControllerEvent(
          a1,
          1,
          2LL,
          (__int64)L"StartNamespaces - Invalid ids list",
          L"NN",
          *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
          L"CurrentMaxNSID",
          v1,
          L"NSID",
          v5[i],
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
        goto LABEL_27;
      }
      v1 = *((_DWORD *)P + i);
      v16 = v1;
    }
    v8 = *(_QWORD *)(a1 + 136);
    if ( i )
    {
      *(_QWORD *)(a1 + 136) = v8 & 0xFFFFFFFFFFFDFFFFuLL;
      do
      {
        v9 = v5[v3];
        if ( !v9 )
          break;
        v10 = *(unsigned __int16 *)(a1 + 24);
        if ( v9 <= v10 )
        {
          if ( !NvmeControllerGetNamespace(a1, v9) )
          {
            v12 = NvmeControllerCreateNvmeNamespace(a1, (unsigned int)v5[v3], v11, &v17);
            if ( v12 >= 0 )
            {
              v13 = NvmeControllerAddNvmeNamespaceToList(a1, v17);
              if ( v13 >= 0 )
              {
                v14 = (char *)v17;
                _interlockedbittestandreset(*(volatile signed __int32 **)(v17 + 256), 2u);
                StorEtwNvmeControllerEvent(
                  a1,
                  1,
                  4LL,
                  (__int64)L"StartNamespaces - Namespace added",
                  L"NSID",
                  v5[v3],
                  L"PathId",
                  v14[100],
                  L"TargetId",
                  v14[101],
                  L"Lun",
                  v14[102],
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0);
                ++v15;
                v17 = 0LL;
              }
              else
              {
                StorEtwNvmeControllerEvent(
                  a1,
                  1,
                  3LL,
                  (__int64)L"StartNamespaces - Add namespace failure",
                  L"NSID",
                  v5[v3],
                  L"Status",
                  v13,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0);
                NvmeControllerDeleteNvmeNamespace(&v17);
              }
            }
            else
            {
              StorEtwNvmeControllerEvent(
                a1,
                1,
                3LL,
                (__int64)L"StartNamespaces - Create namespace failure",
                L"NSID",
                v5[v3],
                L"Status",
                v12,
                (void *)&word_140152E7C,
                0,
                (void *)&word_140152E7C,
                0,
                (void *)&word_140152E7C,
                0,
                (void *)&word_140152E7C,
                0,
                (void *)&word_140152E7C,
                0,
                (void *)&word_140152E7C,
                0);
            }
          }
        }
        else
        {
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3LL,
            (__int64)L"StartNamespaces - Skip namespace",
            L"NN",
            *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
            L"NamespaceCount",
            v10,
            L"NSID",
            v9,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
        }
        ++v3;
      }
      while ( v3 < 0x400u );
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 32LL), BusRelations);
      LOBYTE(v3) = v15;
    }
    else
    {
      *(_QWORD *)(a1 + 136) = v8 | 0x20000;
    }
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4LL,
      (__int64)L"StartNamespaces completed",
      L"NN",
      *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
      L"MaxNSID",
      v16,
      L"Count",
      v3,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    *(_QWORD *)(a1 + 136) &= ~0x10000uLL;
  }
  else
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      3LL,
      (__int64)L"StartNamespaces - getting active namespace ids failed",
      L"NtStatus",
      ControllerIdentifyData,
      L"NN",
      *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  }
LABEL_27:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52436152u);
}
