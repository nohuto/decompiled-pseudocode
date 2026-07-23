/*
 * XREFs of IopQueryDeviceResources @ 0x140AA0860
 * Callers:
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA072C (PiQueryAndAllocateBootResources.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1407B55A4 (PnpMergeFilteredResourceRequirementsList.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     PpIrpQueryResourceRequirements @ 0x1409B25B8 (PpIrpQueryResourceRequirements.c)
 *     PnpFilterResourceRequirementsList @ 0x140A9FCB4 (PnpFilterResourceRequirementsList.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA0C1C (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x140AA0E1C (PnpDetermineResourceListSize.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA0E80 (IopFilterResourceRequirementsCall.c)
 *     PnpCmResourcesToIoResources @ 0x140AA0FBC (PnpCmResourcesToIoResources.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDeviceResources(void *a1, int a2, PVOID *a3, ULONG *a4)
{
  unsigned int v4; // edi
  _QWORD *v7; // r13
  _DWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  int DeviceResourcesFromRegistry; // eax
  PVOID v14; // rbx
  int v15; // eax
  unsigned int v16; // ebx
  PVOID v17; // rbx
  void *Pool2; // rax
  unsigned int v19; // eax
  int v20; // r13d
  _DWORD *v21; // rax
  PVOID Data; // [rsp+20h] [rbp-79h]
  ULONG DataSize; // [rsp+28h] [rbp-71h]
  PVOID Src; // [rsp+40h] [rbp-59h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-49h] BYREF
  PVOID v27; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  _WORD v29[64]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+67h] BYREF
  char v31; // [rsp+108h] [rbp+6Fh] BYREF
  int v32; // [rsp+110h] [rbp+77h] BYREF
  _DWORD *v33; // [rsp+118h] [rbp+7Fh] BYREF

  KeyHandle = a1;
  v4 = 0;
  *a3 = 0LL;
  v7 = a1;
  v33 = 0LL;
  P = 0LL;
  v27 = 0LL;
  Src = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  v9 = 0LL;
  v32 = 0;
  *a4 = 0;
  memset_0(v29, 0, 0x48uLL);
  v10 = *(_QWORD *)(v7[39] + 40LL);
  v25 = v10;
  if ( a2 )
  {
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 0, 2, (_DWORD)a3, (__int64)&v31) != -1073741772 )
    {
      if ( *a3 )
      {
        v9 = (_DWORD *)PnpCmResourcesToIoResources(v11, *a3, 0LL);
        ExFreePoolWithTag(*a3, 0);
        if ( !v9 )
        {
          *a3 = 0LL;
          *a4 = 0;
          return 3221225626LL;
        }
        *a3 = v9;
        *a4 = *v9;
      }
      goto LABEL_11;
    }
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 1, 1, (unsigned int)&v33, (__int64)&v31) != -1073741772 )
    {
      v9 = v33;
LABEL_8:
      DeviceResourcesFromRegistry = PnpGetDeviceResourcesFromRegistry(
                                      (_DWORD)v7,
                                      0,
                                      4,
                                      (unsigned int)&v27,
                                      (__int64)&v31);
      v14 = v27;
      if ( DeviceResourcesFromRegistry >= 0 && (!v27 || !*(_DWORD *)v27 || *((_DWORD *)v27 + 1) != 5) )
      {
        v20 = PnpFilterResourceRequirementsList(v9, (unsigned int *)v27, (int **)&Src, &v32);
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        if ( v20 < 0 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          return (unsigned int)v20;
        }
        if ( (*(_DWORD *)(v25 + 396) & 1) != 0 || v32 && v9[7] <= 1u )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v9 = Src;
          goto LABEL_67;
        }
        v16 = PnpMergeFilteredResourceRequirementsList(Src, v9, (int **)&ValueName);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        if ( (v16 & 0x80000000) == 0 )
        {
          v9 = *(_DWORD **)&ValueName.Length;
LABEL_67:
          v7 = KeyHandle;
          goto LABEL_11;
        }
        return v16;
      }
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
LABEL_11:
      if ( (int)IopFilterResourceRequirementsCall(v7, v9, &P) < 0 )
      {
        *a3 = v9;
        if ( v9 )
          *a4 = *v9;
        else
          *a4 = 0;
        return 0LL;
      }
      v17 = P;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      KeyHandle = 0LL;
      if ( P )
      {
        *a4 = *(_DWORD *)P;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        *a3 = Pool2;
        if ( !Pool2 )
        {
          ExFreePoolWithTag(v17, 0);
          return 3221225626LL;
        }
        memmove(Pool2, v17, *a4);
        ExFreePoolWithTag(v17, 0);
      }
      else
      {
        *a4 = 0;
        *a3 = 0LL;
      }
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v25 + 48),
                  19,
                  0,
                  131097,
                  1,
                  (__int64)&KeyHandle,
                  0LL) >= 0 )
      {
        ValueName.Buffer = L"FilteredConfigVector";
        DataSize = *a4;
        Data = *a3;
        *(_DWORD *)&ValueName.Length = 2752552;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
        ZwClose(KeyHandle);
      }
      return 0LL;
    }
    if ( (*(_DWORD *)(v25 + 396) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 1, 2, (unsigned int)&v33, (__int64)&v31);
      if ( (_DWORD)result == -1073741772 )
      {
        result = 0LL;
LABEL_28:
        if ( (int)result < 0 )
          return result;
        goto LABEL_8;
      }
    }
    else
    {
      if ( *(_QWORD *)(v25 + 440) )
      {
        v21 = (_DWORD *)ExAllocatePool2(0x100uLL);
        v9 = v21;
        if ( !v21 )
          return 3221225495LL;
        memmove(v21, *(const void **)(v25 + 440), **(unsigned int **)(v25 + 440));
        goto LABEL_8;
      }
      result = PpIrpQueryResourceRequirements(v7, &v33);
      if ( (_DWORD)result == -1073741637 )
      {
        v9 = 0LL;
        goto LABEL_8;
      }
    }
    v9 = v33;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v10 + 396) & 1) == 0 )
  {
    v29[0] = 2587;
    v15 = IopSynchronousCall(v7, (__int64)v29, -1073741637, 0LL, a3);
    v16 = v15;
    if ( v15 == -1073741637 )
    {
      *a3 = 0LL;
      v16 = 0;
    }
    else if ( v15 < 0 )
    {
      return v16;
    }
    *a4 = PnpDetermineResourceListSize(*a3);
    return v16;
  }
  v19 = PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 0, 7, (_DWORD)a3, (__int64)a4);
  if ( v19 != -1073741772 )
    return v19;
  return v4;
}
