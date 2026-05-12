/*
 * XREFs of NvmeControllerAdminQueuesFreeResources @ 0x1400F03B8
 * Callers:
 *     NvmeControllerInitializeAdminQueue @ 0x1400F5F24 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 * Callees:
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     StorDeleteOutstandingRequestBitmap @ 0x14011E364 (StorDeleteOutstandingRequestBitmap.c)
 */

void __fastcall NvmeControllerAdminQueuesFreeResources(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  int v4; // ebp
  _QWORD *v6; // rsi
  void *v7; // rcx
  __int64 v8; // r9
  void *v9; // rcx
  void *v10; // rcx
  int v11; // r8d
  void *v12; // rcx

  v3 = *(_QWORD **)(a1 + 712);
  v4 = *(unsigned __int16 *)(a1 + 6);
  v6 = *(_QWORD **)(a1 + 856);
  if ( v3 )
  {
    if ( *(_BYTE *)(a1 + 1728) == 1 )
    {
      v7 = (void *)v3[7];
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0x51496152u);
        v3[7] = 0LL;
      }
      v8 = v3[5];
      if ( v8 )
      {
        NvmeFreeDmaBuffer(a1, *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 12LL) * *(unsigned __int16 *)(a1 + 6), a3, v8, v3[6]);
        v3[5] = 0LL;
        v3[6] = 0LL;
      }
    }
    v9 = (void *)v3[3];
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x51496152u);
      v3[3] = 0LL;
    }
    v10 = (void *)v3[4];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x51496152u);
      v3[4] = 0LL;
    }
    StorDeleteOutstandingRequestBitmap(v3);
    if ( *v3 )
    {
      NvmeFreeDmaBuffer(a1, v4 << 6, v11, **(_QWORD **)(a1 + 712), *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL));
      **(_QWORD **)(a1 + 712) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL) = 0LL;
    }
    ExFreePoolWithTag(v3, 0x51496152u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
  if ( v6 )
  {
    if ( *v6 )
    {
      NvmeFreeDmaBuffer(a1, 16 * v4, a3, **(_QWORD **)(a1 + 856), *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8LL));
      **(_QWORD **)(a1 + 856) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8LL) = 0LL;
    }
    v12 = (void *)v6[8];
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x72446152u);
      v6[8] = 0LL;
      v6[9] = 0LL;
    }
    ExFreePoolWithTag(v6, 0x51496152u);
    *(_QWORD *)(a1 + 856) = 0LL;
  }
}
