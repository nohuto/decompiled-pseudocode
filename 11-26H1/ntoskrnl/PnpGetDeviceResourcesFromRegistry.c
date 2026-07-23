/*
 * XREFs of PnpGetDeviceResourcesFromRegistry @ 0x140AA0C1C
 * Callers:
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 *     IopPnPDispatch @ 0x140AA13D0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PnpReadDeviceConfiguration @ 0x140AA1288 (PnpReadDeviceConfiguration.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceResourcesFromRegistry(__int64 a1, int a2, char a3, void **a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  int RegistryValue; // ebx
  __int64 v10; // rdx
  __int64 result; // rax
  HANDLE v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int DeviceConfiguration; // eax
  __int64 v17; // rdx
  const WCHAR *v18; // rdx
  unsigned int *v19; // rdi
  __int64 Pool2; // rax
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v5 = a5;
  *a4 = 0LL;
  Handle = 0LL;
  P[0] = 0LL;
  *v5 = 0;
  RegistryValue = 0;
  if ( a2 )
  {
    if ( a1 )
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v10 = 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v10 + 48),
                      20,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue < 0 )
      return (unsigned int)RegistryValue;
    if ( (a3 & 1) != 0 )
    {
      v18 = L"OverrideConfigVector";
    }
    else
    {
      if ( (a3 & 2) == 0 )
      {
LABEL_44:
        v12 = Handle;
        goto LABEL_22;
      }
      v18 = L"BasicConfigVector";
    }
    RegistryValue = IopGetRegistryValue(Handle, v18, 0, P);
    if ( RegistryValue >= 0 )
    {
      v19 = (unsigned int *)P[0];
      if ( *((_DWORD *)P[0] + 1) == 10 && *((_DWORD *)P[0] + 3) )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        *a4 = (void *)Pool2;
        if ( Pool2 )
        {
          *v5 = v19[3];
          memmove(*a4, (char *)v19 + v19[2], v19[3]);
          if ( *((_DWORD *)*a4 + 1) == -1 )
            *(_QWORD *)((char *)*a4 + 4) = 1LL;
        }
        else
        {
          RegistryValue = -1073741584;
        }
      }
      ExFreePoolWithTag(v19, 0);
    }
    goto LABEL_44;
  }
  if ( (a3 & 1) != 0 )
  {
    v17 = a1 ? *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) : 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v17 + 48),
                      19,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = PnpReadDeviceConfiguration(Handle, 1LL, a4, v5);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
        return (unsigned int)RegistryValue;
    }
  }
  v12 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v15 = 0LL;
    result = CmOpenDeviceRegKey(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(v15 + 48),
               20,
               0,
               131097,
               0,
               (__int64)&Handle,
               0LL);
    if ( (int)result < 0 )
      return result;
    DeviceConfiguration = PnpReadDeviceConfiguration(Handle, 2LL, a4, v5);
    v12 = Handle;
    RegistryValue = DeviceConfiguration;
    if ( DeviceConfiguration >= 0 )
      goto LABEL_22;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_16;
  if ( v12 )
  {
LABEL_15:
    v14 = PnpReadDeviceConfiguration(v12, 4LL, a4, v5);
    v12 = Handle;
    RegistryValue = v14;
LABEL_16:
    if ( !v12 )
      return (unsigned int)RegistryValue;
LABEL_22:
    ZwClose(v12);
    return (unsigned int)RegistryValue;
  }
  if ( a1 )
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v13 = 0LL;
  result = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v13 + 48), 20, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)result >= 0 )
  {
    v12 = Handle;
    goto LABEL_15;
  }
  return result;
}
