/*
 * XREFs of RegisterOperationRegionHandler @ 0x1400D4214
 * Callers:
 *     ACPIIoctlRegisterOpRegionHandler @ 0x140055278 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x14005FC00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1400AF0E0 (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1400B5670 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1400DD408 (OSInitializeCallbacks.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIRegEventHandler @ 0x140051350 (AMLIRegEventHandler.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall RegisterOperationRegionHandler(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int **a6)
{
  __int64 v7; // rdi
  int v9; // edx
  int v11; // r14d
  bool v12; // zf
  __int64 Pool2; // rax
  unsigned int *v14; // rsi
  int v15; // ebx
  __int64 v16; // rbx
  __int64 i; // rax
  unsigned int **v18; // rcx
  unsigned int *v19; // rax
  int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // [rsp+38h] [rbp-29h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v24[10]; // [rsp+48h] [rbp-19h] BYREF

  v7 = a3;
  v22 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 3221225712LL;
    v11 = 6;
  }
  else
  {
    v11 = 7;
  }
  if ( a3 > 0x7F )
    goto LABEL_18;
  if ( a3 != 127 )
  {
    if ( a3 > 5 )
    {
      if ( a3 == 6 || a3 == 7 || a3 == 8 || a3 == 9 )
        goto LABEL_19;
      v12 = a3 == 11;
    }
    else
    {
      if ( a3 == 5 || a3 < 4 )
        goto LABEL_19;
      v12 = a3 == 4;
    }
    if ( !v12 )
    {
LABEL_18:
      if ( a3 - 128 > 0x7F )
        return 3221225713LL;
    }
  }
LABEL_19:
  Pool2 = ExAllocatePool2(64LL, 48LL, 1332765505LL);
  v14 = (unsigned int *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_QWORD *)(Pool2 + 16) = a4;
  *(_QWORD *)(Pool2 + 24) = a5;
  *(_DWORD *)(Pool2 + 32) = v11;
  *(_DWORD *)(Pool2 + 36) = v7;
  *(_BYTE *)(Pool2 + 40) = 0;
  if ( v11 == 6 )
  {
    AcpiGetDriverProxyWrappedEndpoint(&v22, (__int64)InternalOpRegionHandler);
    v15 = AMLIRegEventHandler(6u, v7, v22, v14);
    if ( v15 )
    {
      v15 = -1073741823;
      goto LABEL_25;
    }
  }
  else
  {
    AcpiGetDriverProxyWrappedEndpoint(&v22, (__int64)InternalRawAccessOpRegionHandler);
    v15 = AMLIRegEventHandler(7u, v7, v22, v14);
    if ( v15 )
      v15 = -1073741823;
  }
  if ( v15 < 0 )
  {
LABEL_25:
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v15;
  }
  *a6 = v14;
  v16 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
  {
    v16 = i;
    if ( *(_DWORD *)(i + 36) >= (unsigned int)v7 && (*(_DWORD *)(i + 36) != (_DWORD)v7 || *(_DWORD *)(i + 32) == v11) )
      break;
  }
  v18 = *(unsigned int ***)(i + 8);
  v19 = *v18;
  if ( *((unsigned int ***)*v18 + 1) != v18 )
    __fastfail(3u);
  *(_QWORD *)v14 = v19;
  *((_QWORD *)v14 + 1) = v18;
  *((_QWORD *)v19 + 1) = v14;
  *v18 = v14;
  if ( v16 && *(_DWORD *)(v16 + 36) == (_DWORD)v7 )
  {
    ExReleaseFastMutex(&AcpiOpRegionLock);
  }
  else
  {
    if ( (unsigned int)v7 < 0x1F )
      v20 = 1 << v7;
    else
      v20 = 0x80000000;
    AcpiRegisteredOpRegionMask |= v20;
    ExReleaseFastMutex(&AcpiOpRegionLock);
    v21 = v14[9];
    if ( v21 == 8 || v21 == 9 )
    {
      EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v21, 1);
    }
    else if ( a1 )
    {
      if ( (int)AMLIGetNameSpaceObject("_REG", a1, &v23, 1) >= 0 )
      {
        memset(v24, 0, sizeof(v24));
        WORD1(v24[0]) = 1;
        v24[2] = v7;
        WORD1(v24[5]) = 1;
        v24[7] = 1LL;
        AMLIAsyncEvalObject(v23, 0LL, 2, (__int64)v24, 0LL, 0LL);
        AMLIDereferenceHandleEx((__int64)v23);
      }
    }
  }
  return 0LL;
}
