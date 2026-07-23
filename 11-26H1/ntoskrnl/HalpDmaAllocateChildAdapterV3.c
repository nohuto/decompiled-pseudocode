/*
 * XREFs of HalpDmaAllocateChildAdapterV3 @ 0x140782F1C
 * Callers:
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     HalpIommuCheckExceptionList @ 0x1404FB164 (HalpIommuCheckExceptionList.c)
 *     HalJoinDmaDomain @ 0x1405113F0 (HalJoinDmaDomain.c)
 *     HalpIommuGetSecurityPolicy @ 0x140533B1C (HalpIommuGetSecurityPolicy.c)
 *     HalpDmaAllocateDeviceCreationConfigurations @ 0x14057AE68 (HalpDmaAllocateDeviceCreationConfigurations.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x14057B12C (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaFreeDeviceCreationConfigurations @ 0x14057B218 (HalpDmaFreeDeviceCreationConfigurations.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x14057B2F0 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpDmaGetIommuInterface @ 0x14057B358 (HalpDmaGetIommuInterface.c)
 *     HalpDmaIsThinDmaCapable @ 0x14058DAD8 (HalpDmaIsThinDmaCapable.c)
 *     HalpDmaIsThinDmarCapable @ 0x14058DECC (HalpDmaIsThinDmarCapable.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     IidCloneDeviceId @ 0x140B4B710 (IidCloneDeviceId.c)
 */

char *__fastcall HalpDmaAllocateChildAdapterV3(
        unsigned int a1,
        int a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13,
        char a14,
        _DWORD *a15)
{
  int v15; // esi
  char *v16; // rdi
  _QWORD *v17; // r12
  int SecurityPolicy; // eax
  size_t v19; // r14
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // r14d
  int LocalScatterPool; // eax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int DefaultRemappingDomainPolicy; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // esi
  int v36; // eax
  char v38; // [rsp+58h] [rbp-B0h]
  int v39; // [rsp+5Ch] [rbp-ACh]
  _QWORD *v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h]
  PVOID Object; // [rsp+78h] [rbp-90h]
  HANDLE v43; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v44[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  int v47; // [rsp+A0h] [rbp-68h]
  int v48; // [rsp+A4h] [rbp-64h]
  __int128 v49; // [rsp+A8h] [rbp-60h]
  char v50[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-48h]

  v15 = 0;
  v43 = 0LL;
  v44[1] = 0;
  v16 = 0LL;
  v48 = 0;
  v17 = 0LL;
  v38 = 0;
  Object = 0LL;
  v40 = 0LL;
  memset_0(v50, 0, 0x50uLL);
  if ( a12 && (a11 || a10 != 3) )
    return v16;
  SecurityPolicy = HalpIommuGetSecurityPolicy();
  v19 = 656LL;
  v39 = SecurityPolicy;
  v49 = 0LL;
  v44[0] = 48;
  v45 = 0LL;
  v47 = 528;
  v46 = 0LL;
  LODWORD(v41) = 0;
  if ( !a5 )
  {
    LODWORD(v41) = 24 * (a8 + 1);
    v19 = (unsigned int)v41 + 656LL;
  }
  if ( !a13 && a10 )
  {
    if ( !a11 )
      return v16;
    if ( a10 == 2 )
    {
LABEL_24:
      if ( (int)ObCreateObjectEx(0, (_DWORD)HalpDmaAdapterObjectType, (unsigned int)v44, 0) < 0 )
        goto LABEL_34;
      v16 = (char *)Object;
      memset_0(Object, 0, v19);
      if ( ObReferenceObjectByPointer(Object, 0x20000u, HalpDmaAdapterObjectType, 0) < 0
        || (int)ObInsertObjectEx(Object, 0LL, 0x20000LL, 0LL, 0, 0LL, &v43) < 0 )
      {
        goto LABEL_34;
      }
      ZwClose(v43);
      *((_QWORD *)Object + 1) = &HalpDmaOperationsV3;
      v21 = &MasterAdapter24V3;
      v16[153] = a6;
      *(_DWORD *)v16 = 42991617;
      if ( a3 >= 0x20 )
        v21 = &MasterAdapterV3;
      *((_QWORD *)v16 + 16) = 0LL;
      *((_QWORD *)v16 + 17) = 0LL;
      *((_DWORD *)v16 + 4) = 1634550856;
      v16[152] = 0;
      *((_QWORD *)v16 + 20) = v21;
      if ( a3 < 0x40 )
        v22 = (1LL << a3) - 1;
      else
        v22 = -1LL;
      *((_QWORD *)v16 + 18) = v22;
      if ( v22 < v21[18] )
      {
LABEL_33:
        ObfDereferenceObject(v16);
LABEL_34:
        v16 = 0LL;
        goto LABEL_35;
      }
      v23 = v41;
      *((_QWORD *)v16 + 40) = 0LL;
      v16[346] = 0;
      *((_QWORD *)v16 + 25) = v16 + 192;
      *((_QWORD *)v16 + 24) = v16 + 192;
      *((_QWORD *)v16 + 23) = 0LL;
      v16[224] = 0;
      *((_DWORD *)v16 + 58) = a1;
      v16[442] = a4;
      v16[445] = a7;
      *((_QWORD *)v16 + 57) = a9;
      v16[441] = a5;
      *((_DWORD *)v16 + 96) = -1;
      *((_DWORD *)v16 + 112) = a3;
      *((_DWORD *)v16 + 158) = v23;
      *((_DWORD *)v16 + 39) = 3;
      *((_DWORD *)v16 + 156) = 0;
      *((_QWORD *)v16 + 71) = 0LL;
      *((_QWORD *)v16 + 73) = v16 + 576;
      *((_QWORD *)v16 + 72) = v16 + 576;
      v16[592] = 0;
      *((_DWORD *)v16 + 154) = 0;
      v16[628] = a12;
      *((_QWORD *)v16 + 62) = IoFreeAdapterChannelV3Passive;
      *((_QWORD *)v16 + 63) = v16;
      *((_QWORD *)v16 + 60) = 0LL;
      if ( a1 )
      {
        if ( a4 )
          LocalScatterPool = HalpDmaAllocateLocalScatterPool(v16, a1, 0LL, 1LL);
        else
          LocalScatterPool = HalpDmaAllocateLocalContiguousPool(v16, a1, 0LL, 1LL);
        if ( LocalScatterPool < 0 )
          goto LABEL_33;
        v25 = *((_DWORD *)v16 + 58);
        v16[345] = 0;
      }
      else
      {
        *((_DWORD *)v16 + 58) = 0;
        v25 = 0;
        v16[345] = 1;
      }
      *a15 = v25;
      *((_DWORD *)v16 + 63) = a2;
      *((_DWORD *)v16 + 130) = 0;
      *((_QWORD *)v16 + 66) = a13;
      if ( !v15 )
        goto LABEL_60;
      v26 = *((_QWORD *)v16 + 67);
      if ( !v26 || HalpIommuCheckExceptionList(v26) )
        goto LABEL_60;
      DefaultRemappingDomainPolicy = HalpDmaGetDefaultRemappingDomainPolicy(v27);
      v31 = HalpDmaAllocateDeviceCreationConfigurations(v30, v29, a13, DefaultRemappingDomainPolicy, a12, &v40);
      v17 = v40;
      if ( v31 >= 0 )
      {
        v31 = guard_dispatch_icall_no_overrides(*((_QWORD *)v16 + 66), (__int64)v40);
        if ( v31 >= 0 )
          goto LABEL_59;
      }
      if ( a13 )
      {
        v33 = 1LL;
        if ( DefaultRemappingDomainPolicy == 1 )
        {
          if ( v17 )
          {
            HalpDmaFreeDeviceCreationConfigurations(v17);
            v40 = 0LL;
          }
          v34 = HalpDmaAllocateDeviceCreationConfigurations(v33, v32, a13, 0, a12, &v40);
          v17 = v40;
          if ( v34 < 0 )
            goto LABEL_68;
          v31 = guard_dispatch_icall_no_overrides(*((_QWORD *)v16 + 66), (__int64)v40);
        }
        if ( v31 >= 0 )
        {
LABEL_59:
          *((_DWORD *)v16 + 130) = v15;
          goto LABEL_60;
        }
      }
LABEL_68:
      if ( !a11 )
        goto LABEL_67;
      if ( v15 != 2 )
      {
        v35 = v39;
        if ( v39 == 1 )
          goto LABEL_67;
        goto LABEL_61;
      }
LABEL_60:
      v35 = v39;
LABEL_61:
      *((_QWORD *)v16 + 64) = 0LL;
      if ( (int)HalJoinDmaDomain((__int64)v16, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0
        || (v36 = *((_DWORD *)v16 + 130)) != 0
        && a11
        && (v36 == 2 || v35 != 1)
        && (*((_DWORD *)v16 + 130) = 0, (int)HalJoinDmaDomain((__int64)v16, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0) )
      {
        *(_QWORD *)(*((_QWORD *)v16 + 64) + 56LL) = v16;
LABEL_35:
        if ( !v38 )
          goto LABEL_37;
        goto LABEL_36;
      }
LABEL_67:
      ObfDereferenceObject(v16);
      v16 = 0LL;
      goto LABEL_35;
    }
    if ( SecurityPolicy == 1 )
      return v16;
  }
  v15 = a10;
  if ( !a10 || !a13 )
    goto LABEL_24;
  if ( (int)HalpDmaGetIommuInterface(a13, (__int64)v50) < 0 )
  {
    if ( !a11 )
      return v16;
    if ( a10 == 2 )
    {
      v15 = 0;
    }
    else if ( v39 == 1 )
    {
      return v16;
    }
    goto LABEL_24;
  }
  v38 = 1;
  guard_dispatch_icall_no_overrides(v51, 0LL);
  if ( a11 && (a10 == 2 || v39 != 1) )
  {
    v15 = 0;
    if ( a10 != 2 )
      v15 = a10;
    goto LABEL_24;
  }
LABEL_36:
  guard_dispatch_icall_no_overrides(v51, v20);
LABEL_37:
  if ( v17 )
    HalpDmaFreeDeviceCreationConfigurations(v17);
  return v16;
}
