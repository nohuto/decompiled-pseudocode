/*
 * XREFs of PnpDriverLoadingFailed @ 0x140B4858C
 * Callers:
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A6CC8 (PipServiceInstanceToDeviceInstance.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140A114F8 (PipOpenServiceEnumKeys.c)
 *     PoFxAbandonDevice @ 0x140B083E4 (PoFxAbandonDevice.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PnpDriverLoadingFailed(wchar_t *a1, UNICODE_STRING *a2)
{
  NTSTRSAFE_PWSTR v3; // rsi
  int v4; // r12d
  NTSTATUS result; // eax
  NTSTATUS RegistryValue; // ebx
  unsigned int v7; // edi
  unsigned int i; // r15d
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rbx
  int v15; // eax
  struct _KTHREAD *v16; // rax
  int v17; // r15d
  unsigned int j; // ebx
  signed __int64 v19; // rax
  unsigned int *v20; // r14
  signed __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-99h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-71h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+60h] [rbp-69h] BYREF
  int v27; // [rsp+68h] [rbp-61h]
  PVOID P; // [rsp+70h] [rbp-59h] BYREF
  int Data; // [rsp+78h] [rbp-51h] BYREF
  PVOID v30[2]; // [rsp+80h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-39h] BYREF
  wchar_t pszDest[20]; // [rsp+C0h] [rbp-9h] BYREF

  ppszDestEnd = a1;
  P = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v3 = a1;
  v27 = 0;
  v4 = 0;
  *(_OWORD *)v30 = 0LL;
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
    ValueName.Buffer = L"Enum";
    *(_DWORD *)&ValueName.Length = 655368;
    ObjectAttributes.ObjectName = &ValueName;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 0x20019u, (HANDLE *)&ppszDestEnd, &KeyHandle, 0);
    v3 = ppszDestEnd;
    v4 = 1;
    v27 = 1;
  }
  if ( result >= 0 )
  {
    ValueName.Buffer = L"INITSTARTFAILED";
    *(_DWORD *)&ValueName.Length = 2097182;
    Data = 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
    v7 = 0;
    if ( RegistryValue < 0 )
      goto LABEL_44;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      v7 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( v7 )
    {
      v25 = v7;
      for ( i = 0; i < v7; ++i )
      {
        if ( (int)PipServiceInstanceToDeviceInstance((__int64)v3, (__int64)a2, i, (UNICODE_STRING *)v30) >= 0 )
        {
          v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)v30, 0x746C6644u);
          v10 = v9;
          if ( v9 )
          {
            v11 = v9[39];
            if ( *(_QWORD *)(v11 + 40) )
            {
              if ( !(unsigned int)PipIsDevNodeDNStarted(*(_QWORD *)(v11 + 40)) )
                IopReleaseDeviceResources(v12, 1);
            }
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          if ( v10 )
          {
            v14 = *(_QWORD *)(v10[39] + 40LL);
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 396) & 1) != 0 )
              {
                v15 = *(_DWORD *)(v14 + 300);
                if ( v15 == 778 || v15 == 777 )
                {
                  PoFxAbandonDevice(v14);
                  PipSetDevNodeState(v14, 788);
                  PipSetDevNodeProblem(v14, 24, 0);
                }
              }
            }
            ObfDereferenceObject(v10);
          }
          ExFreePoolWithTag(v30[1], 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
        }
      }
      if ( v25 != v7 )
      {
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( v25 )
        {
          v17 = 0;
          for ( j = 0; j < v7; ++j )
          {
            LODWORD(v22) = j;
            ppszDestEnd = pszDest;
            RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v22);
            ValueName.MaximumLength = 20;
            v19 = ppszDestEnd - pszDest;
            if ( (_DWORD)v19 == -1 )
              ValueName.Length = 20;
            else
              ValueName.Length = 2 * v19;
            ValueName.Buffer = pszDest;
            if ( IopGetRegistryValue(KeyHandle, pszDest, 0, &P) >= 0 )
            {
              v20 = (unsigned int *)P;
              if ( j != v17 )
              {
                ZwDeleteValueKey(KeyHandle, &ValueName);
                LODWORD(v22) = v17;
                ppszDestEnd = pszDest;
                RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v22);
                ValueName.MaximumLength = 20;
                v21 = ppszDestEnd - pszDest;
                if ( (_DWORD)v21 == -1 )
                  ValueName.Length = 20;
                else
                  ValueName.Length = 2 * v21;
                ValueName.Buffer = pszDest;
                ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)v20 + v20[2], v20[3]);
              }
              ExFreePoolWithTag(v20, 0);
              ++v17;
            }
          }
          v4 = v27;
        }
        ValueName.Buffer = L"Count";
        *(_DWORD *)&ValueName.Length = 786442;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v25, 4u);
        ValueName.Buffer = L"NextInstance";
        *(_DWORD *)&ValueName.Length = 1703960;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v25, 4u);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
      }
      ZwClose(KeyHandle);
      if ( v4 )
        ZwClose(v3);
      return 0;
    }
    else
    {
LABEL_44:
      ZwClose(KeyHandle);
      if ( v4 )
        ZwClose(v3);
      return RegistryValue;
    }
  }
  return result;
}
