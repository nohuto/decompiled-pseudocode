/*
 * XREFs of IopAllocateLegacyBootResources @ 0x140CCB498
 * Callers:
 *     PipProcessStartPhase2 @ 0x140B0C368 (PipProcessStartPhase2.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopAllocateBootResources @ 0x1407A8AB0 (IopAllocateBootResources.c)
 *     IopCombineCmResourceList @ 0x1407A8DC0 (IopCombineCmResourceList.c)
 *     IopCreateCmResourceList @ 0x1407A8E74 (IopCreateCmResourceList.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateLegacyBootResources(__int64 a1, int a2)
{
  int v3; // r14d
  char *v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rsi
  void *v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  _DWORD *v11; // rsi
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  if ( IopInitHalDeviceNode )
  {
    if ( IopInitHalResources )
    {
      v13 = 0LL;
      v4 = IopCreateCmResourceList(a1, a1, a2, &v13);
      if ( v4 )
      {
        v5 = v13;
        if ( v13 )
          ExFreePoolWithTag(IopInitHalResources, 0);
        IopInitHalResources = v5;
        v6 = *(void **)(IopInitHalDeviceNode + 544);
        PipSetDevNodeFlags(IopInitHalDeviceNode, 0x40u);
        IopAllocateBootResources(1u, *(_QWORD *)(IopInitHalDeviceNode + 32));
        v7 = IopInitHalDeviceNode;
        v8 = *(void **)(IopInitHalDeviceNode + 544);
        if ( v8 && v8 != v6 )
        {
          ExFreePoolWithTag(v8, 0);
          v7 = IopInitHalDeviceNode;
          *(_QWORD *)(IopInitHalDeviceNode + 544) = 0LL;
        }
        *(_QWORD *)(v7 + 544) = IopCombineCmResourceList(v6, v4);
        if ( v6 )
        {
          ExFreePoolWithTag(v6, 0);
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
  }
  v9 = 0LL;
LABEL_12:
  v10 = IopInitReservedResourceList;
  while ( v10 )
  {
    v11 = (_DWORD *)v10[2];
    if ( v11[1] == v3 && v11[2] == a2 )
    {
      IopAllocateBootResources(4u, v10[1]);
      if ( !v10[1] )
        ExFreePoolWithTag(v11, 0);
      if ( v9 )
        *v9 = *v10;
      else
        IopInitReservedResourceList = (PVOID)*v10;
      ExFreePoolWithTag(v10, 0);
      if ( !v9 )
        goto LABEL_12;
      v10 = (_QWORD *)*v9;
    }
    else
    {
      v9 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  return 0LL;
}
