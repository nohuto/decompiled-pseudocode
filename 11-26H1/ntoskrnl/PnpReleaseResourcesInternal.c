/*
 * XREFs of PnpReleaseResourcesInternal @ 0x140B35C90
 * Callers:
 *     IopReleaseResources @ 0x1407A7E40 (IopReleaseResources.c)
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopFindLegacyBusDeviceNode @ 0x140AFBA64 (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x140B35EE4 (IopCallArbiter.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B36034 (IopWriteAllocatedResourcesToRegistry.c)
 */

__int64 __fastcall PnpReleaseResourcesInternal(_QWORD *a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // r11
  unsigned int v4; // esi
  int *v5; // r15
  int v6; // r13d
  unsigned int v7; // eax
  _QWORD *LegacyBusDeviceNode; // rdi
  int v9; // ecx
  _QWORD *v10; // r9
  _QWORD *v11; // rax
  _QWORD *i; // r12
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  _QWORD **v15; // rax
  unsigned int v16; // eax
  int *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v21; // [rsp+30h] [rbp-69h] BYREF
  _QWORD **v22; // [rsp+38h] [rbp-61h]
  int v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h]
  __int64 v25; // [rsp+50h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-41h]
  __int64 v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+78h] [rbp-21h]
  __int128 v29; // [rsp+90h] [rbp-9h]
  __int128 v30; // [rsp+A0h] [rbp+7h]
  __int128 v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+100h] [rbp+67h]
  unsigned int v33; // [rsp+108h] [rbp+6Fh]
  unsigned int v34; // [rsp+110h] [rbp+77h]

  memset_0(&v21, 0, 0x60uLL);
  v2 = (_DWORD *)a1[52];
  v3 = 0LL;
  v22 = &v21;
  v23 = 0;
  v21 = &v21;
  v25 = a1[4];
  v24 = 0LL;
  v26 = 4LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( (v2 || (v2 = (_DWORD *)a1[68]) != 0LL) && (v4 = *v2) != 0 )
  {
    v5 = v2 + 1;
  }
  else
  {
    v4 = 1;
    v2 = 0LL;
    v5 = 0LL;
  }
  v33 = 0;
  do
  {
    if ( v2 )
    {
      v6 = *v5;
      v7 = v5[1];
      v34 = v7;
      if ( *v5 != -1 )
        goto LABEL_12;
    }
    else
    {
      v7 = v3;
      v34 = v3;
    }
    v6 = 1;
LABEL_12:
    if ( a1 == IopRootDeviceNode )
      LegacyBusDeviceNode = a1;
    else
      LegacyBusDeviceNode = (_QWORD *)a1[2];
    v9 = 1;
    v32 = 1;
    while ( LegacyBusDeviceNode )
    {
      if ( LegacyBusDeviceNode == IopRootDeviceNode && v9 )
      {
        LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(v6, v7);
        if ( LegacyBusDeviceNode == v10 && !v6 )
          LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(1, 0);
        v32 = v3;
      }
      v11 = LegacyBusDeviceNode + 61;
      for ( i = (_QWORD *)LegacyBusDeviceNode[61]; i != v11; i = (_QWORD *)*i )
      {
        if ( i[3] != v3 )
        {
          v32 = v3;
          v21 = i + 5;
          v22 = (_QWORD **)(i + 5);
          i[5] = &v21;
          i[6] = &v21;
          IopCallArbiter(i, 0LL);
          v13 = i[3];
          v30 = 0LL;
          v31 = 0LL;
          v29 = 0LL;
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v13 + 8), 2LL);
          v14 = v21;
          v15 = v22;
          if ( (_QWORD **)v21[1] != &v21 || *v22 != &v21 )
            __fastfail(3u);
          *v22 = v21;
          v3 = 0LL;
          v14[1] = v15;
          v22 = &v21;
          v21 = &v21;
          v11 = LegacyBusDeviceNode + 61;
        }
      }
      LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
      v9 = v32;
      v7 = v34;
    }
    if ( v4 > 1 )
    {
      v16 = v5[3];
      v17 = v5 + 4;
      if ( v16 )
      {
        v18 = v16;
        do
        {
          v19 = (unsigned int)v3;
          if ( *(_BYTE *)v17 == 5 )
            v19 = (unsigned int)v17[1];
          v17 = (int *)((char *)v17 + v19 + 20);
          --v18;
        }
        while ( v18 );
      }
      v5 = v17;
    }
    ++v33;
  }
  while ( v33 < v4 );
  return IopWriteAllocatedResourcesToRegistry(a1, 0LL, 0LL);
}
