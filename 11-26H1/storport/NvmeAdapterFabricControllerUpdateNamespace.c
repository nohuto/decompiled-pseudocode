/*
 * XREFs of NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400F02D0 (NvmeControllerAddNvmeNamespaceToList.c)
 *     NvmeNamespaceIsInactive @ 0x1400FFB00 (NvmeNamespaceIsInactive.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x140100A2C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140108FE8 (NvmeNamespaceProcessQueueRequests.c)
 */

void __fastcall NvmeAdapterFabricControllerUpdateNamespace(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v6; // r8
  _QWORD *v7; // rsi
  unsigned int v8; // eax
  char v9; // si
  int v10; // eax
  _QWORD *v11; // rdi
  int v12; // eax
  int ControllerIdentifyData; // eax
  __int64 *v14; // r14
  PVOID P[2]; // [rsp+A0h] [rbp-28h] BYREF
  _QWORD *Namespace; // [rsp+E8h] [rbp+20h] BYREF

  P[0] = 0LL;
  Namespace = NvmeControllerGetNamespace(a1, a2);
  v7 = Namespace;
  if ( Namespace )
  {
    ControllerIdentifyData = NvmeAdapterGetControllerIdentifyData(a1, a2, 0, 0, *((_BYTE *)Namespace + 60), (__int64)P);
    v14 = (__int64 *)P[0];
    if ( ControllerIdentifyData < 0 || (unsigned __int8)NvmeNamespaceIsInactive(P[0]) )
    {
      v7[14] &= ~2uLL;
      NvmeNamespaceProcessQueueRequests(v7);
      *a3 = 1;
      StorEtwNvmeControllerEvent(
        a1,
        1,
        4LL,
        (__int64)L"UpdateNamespace - Namespace removed",
        L"NSID",
        a2,
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
        0,
        (void *)&word_140152E7C,
        0);
    }
    else
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        4LL,
        (__int64)L"UpdateNamespace - Namespace updated",
        L"NSID",
        a2,
        L"Previous NSZE",
        *(_QWORD *)v7[22],
        L"New NSZE",
        *v14,
        L"Previous NCAP",
        *(_QWORD *)(v7[22] + 8LL),
        L"New NCAP",
        v14[1],
        L"Previous NUSE",
        *(_QWORD *)(v7[22] + 16LL),
        L"New NUSE",
        v14[2],
        (void *)&word_140152E7C,
        0);
      _InterlockedExchange64((volatile __int64 *)v7[22], *v14);
      _InterlockedExchange64((volatile __int64 *)(v7[22] + 8LL), v14[1]);
      _InterlockedExchange64((volatile __int64 *)(v7[22] + 16LL), v14[2]);
    }
    if ( v14 )
      ExFreePoolWithTag(v14, 0x52436152u);
  }
  else
  {
    v8 = *(unsigned __int16 *)(a1 + 24);
    v9 = a2;
    if ( a2 <= v8 )
    {
      v10 = NvmeControllerCreateNvmeNamespace(a1, a2, v6, &Namespace);
      if ( v10 >= 0 )
      {
        v11 = Namespace;
        v12 = NvmeControllerAddNvmeNamespaceToList(a1, Namespace);
        if ( v12 >= 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)v11[32], 2u);
          StorEtwNvmeControllerEvent(
            a1,
            1,
            4LL,
            (__int64)L"UpdateNamespace - Namespace added",
            L"NSID",
            v9,
            L"PathId",
            *((_BYTE *)v11 + 100),
            L"TargetId",
            *((_BYTE *)v11 + 101),
            L"Lun",
            *((_BYTE *)v11 + 102),
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
          *a3 = 1;
        }
        else
        {
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3LL,
            (__int64)L"UpdateNamespace - Add namespace failure",
            L"NSID",
            v9,
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
          NvmeControllerDeleteNvmeNamespace(&Namespace);
        }
      }
      else
      {
        StorEtwNvmeControllerEvent(
          a1,
          1,
          3LL,
          (__int64)L"UpdateNamespace - Create namespace failure",
          L"NSID",
          a2,
          L"Status",
          v10,
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
    else
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        3LL,
        (__int64)L"UpdateNamespace - Skip namespace",
        L"NN",
        *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
        L"NamespaceCount",
        v8,
        L"NSID",
        a2,
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
