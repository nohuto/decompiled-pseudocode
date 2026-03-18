/*
 * XREFs of ACPIProcessorDeviceControl @ 0x1400C5FF0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNSObjectType @ 0x14003BAA4 (AMLIGetNSObjectType.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIDispatchIrpInvalid @ 0x140043120 (ACPIDispatchIrpInvalid.c)
 *     ACPIIoctlEnumChildren @ 0x140048808 (ACPIIoctlEnumChildren.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x140067B60 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 */

__int64 __fastcall ACPIProcessorDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v15; // edi
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 *v21; // rcx
  __int64 v22; // rcx
  _OWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-18h]

  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  if ( !*(_BYTE *)(a2 + 64) )
  {
    DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    v6 = *(_QWORD *)(a2 + 184);
    v7 = DeviceExtension;
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_DWORD *)(v6 + 24);
    if ( v9 > 0x32C01C )
    {
      v10 = v9 - 3325984;
      if ( !v10 )
        return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      v11 = v10 - 28;
      if ( !v11 )
        return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      v12 = v11 - 4;
      if ( !v12 )
        return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184), v5);
      v13 = v12 - 4;
      if ( !v13 )
        return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      if ( v13 == 4 )
        return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184), v5);
      goto LABEL_18;
    }
    if ( v9 == 3325980 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184), v5);
    v17 = v9 - 2703744;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( !v18 )
        return (unsigned int)ACPIProcessorContainerGetLpiStatesIoctl((PIRP)a2, *(_QWORD *)(a2 + 184));
      v19 = v18 - 622204;
      if ( !v19 )
        return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184), v5);
      v20 = v19 - 4;
      if ( !v20 || v20 == 20 )
        return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
LABEL_18:
      v15 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
LABEL_19:
      IofCompleteRequest((PIRP)a2, 0);
      return (unsigned int)v15;
    }
    if ( *(_DWORD *)(v6 + 8) < 0xCu )
    {
      v15 = -1073741820;
      *(_QWORD *)(a2 + 56) = 0LL;
LABEL_30:
      *(_DWORD *)(a2 + 48) = v15;
      goto LABEL_19;
    }
    if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(DeviceExtension + 760)) == 12 )
    {
      v15 = AMLIEvalNameSpaceObject(v21, (__int64)v23, 0, 0LL);
      if ( v15 < 0 )
        goto LABEL_30;
      v22 = v24;
      *(_DWORD *)v8 = *(unsigned __int8 *)(v24 + 8);
      *(_DWORD *)(v8 + 4) = *(_DWORD *)v22;
      *(_BYTE *)(v8 + 8) = *(_BYTE *)(v22 + 4);
      AMLIFreeDataBuffs((__int64)v23);
    }
    else
    {
      v15 = 0;
      *(_QWORD *)v8 = *(unsigned int *)(v7 + 196);
      *(_BYTE *)(v8 + 8) = 0;
    }
    if ( *(_DWORD *)(v6 + 8) == 16 )
    {
      *(_DWORD *)(v8 + 12) = *(_DWORD *)(v7 + 192);
      *(_QWORD *)(a2 + 56) = 16LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = 12LL;
    }
    goto LABEL_30;
  }
  return ACPIDispatchIrpInvalid(a1, (IRP *)a2);
}
