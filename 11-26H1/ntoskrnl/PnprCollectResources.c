/*
 * XREFs of PnprCollectResources @ 0x1407B1DF0
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x140AC88F0 (PipForAllChildDeviceNodes.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprCollectResources(__int64 *a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  unsigned __int64 v27; // rcx
  int v28; // eax
  PVOID *v29; // rax
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v35; // [rsp+28h] [rbp-18h]
  __int128 v36; // [rsp+30h] [rbp-10h] BYREF

  LOBYTE(v35) = 0;
  v34 = 0LL;
  v36 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  a1[2] = Pool2;
  if ( !Pool2 )
  {
    v5 = 946;
LABEL_3:
    v6 = PnprContext;
    v7 = -1073741670;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = v5;
    *(_DWORD *)(PnprContext + 33288) = v8;
    v9 = *(_DWORD *)(v6 + 33292);
    if ( !v9 )
      v9 = 10;
    goto LABEL_49;
  }
  *(_DWORD *)(Pool2 + 12) = 4;
  v10 = ExAllocatePool2(0x40uLL);
  a2[2] = v10;
  if ( !v10 )
  {
    v5 = 958;
    goto LABEL_3;
  }
  *(_DWORD *)(v10 + 12) = 4;
  v11 = (_QWORD *)a1[2];
  *v11 = ExAllocatePool2(0x40uLL);
  v12 = a1[2];
  if ( !*(_QWORD *)v12 )
  {
    v5 = 976;
    goto LABEL_3;
  }
  *(_DWORD *)(v12 + 8) = 32;
  v13 = ExAllocatePool2(0x40uLL);
  a1[3] = v13;
  if ( !v13 )
  {
    v5 = 994;
    goto LABEL_3;
  }
  v14 = ExAllocatePool2(0x40uLL);
  a2[3] = v14;
  if ( !v14 )
  {
    v5 = 1005;
    goto LABEL_3;
  }
  *(_DWORD *)a1[3] = 4;
  *(_DWORD *)a2[3] = 4;
  *(_QWORD *)&v36 = PnprAddDeviceResources;
  *((_QWORD *)&v36 + 1) = &v34;
  v16 = *a1;
  v35 = a1;
  LOBYTE(v34) = 1;
  if ( v16 )
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
  else
    v17 = 0LL;
  v7 = PipForAllChildDeviceNodes(v17, v15, &v36);
  if ( v7 < 0 )
  {
    v19 = PnprContext;
    v20 = *(_DWORD *)(PnprContext + 33288);
    if ( !v20 )
      v20 = 1026;
    v21 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v20;
    if ( !v21 )
      v21 = 1;
    *(_DWORD *)(v19 + 33292) = v21;
    goto LABEL_50;
  }
  v22 = *a2;
  v35 = a2;
  LOBYTE(v34) = 0;
  if ( v22 )
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
  else
    v23 = 0LL;
  v7 = PipForAllChildDeviceNodes(v23, v18, &v36);
  if ( v7 >= 0 )
  {
    v25 = *(_DWORD *)(a1[2] + 16);
    if ( v25 || *(_DWORD *)(a1[3] + 4) )
    {
      v27 = *(_QWORD *)(a2[3] + 8LL);
      if ( (!v27 || *(_QWORD *)(a1[3] + 8) <= v27) && v25 <= *(_DWORD *)(a2[2] + 16LL) )
        return (unsigned int)v7;
      v6 = PnprContext;
      v28 = *(_DWORD *)(PnprContext + 33288);
      if ( !v28 )
        v28 = 1058;
      *(_DWORD *)(PnprContext + 33288) = v28;
      v9 = *(_DWORD *)(v6 + 33292);
      if ( !v9 )
        v9 = 4;
    }
    else
    {
      v6 = PnprContext;
      v26 = *(_DWORD *)(PnprContext + 33288);
      if ( !v26 )
        v26 = 1049;
      *(_DWORD *)(PnprContext + 33288) = v26;
      v9 = *(_DWORD *)(v6 + 33292);
      if ( !v9 )
        v9 = 5;
    }
    v7 = -1073741811;
  }
  else
  {
    v6 = PnprContext;
    v24 = *(_DWORD *)(PnprContext + 33288);
    if ( !v24 )
      v24 = 1037;
    *(_DWORD *)(PnprContext + 33288) = v24;
    v9 = *(_DWORD *)(v6 + 33292);
    if ( !v9 )
      v9 = 1;
  }
LABEL_49:
  *(_DWORD *)(v6 + 33292) = v9;
LABEL_50:
  v29 = (PVOID *)a1[2];
  if ( v29 )
  {
    if ( *v29 )
      ExFreePoolWithTag(*v29, 0x51706E50u);
    ExFreePoolWithTag((PVOID)a1[2], 0x51706E50u);
    a1[2] = 0LL;
  }
  v30 = (void *)a1[3];
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0x51706E50u);
    a1[3] = 0LL;
  }
  v31 = (void *)a2[2];
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0x51706E50u);
    a2[2] = 0LL;
  }
  v32 = (void *)a2[3];
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0x51706E50u);
    a2[3] = 0LL;
  }
  return (unsigned int)v7;
}
