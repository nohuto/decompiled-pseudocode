/*
 * XREFs of IopQuerySecureDeviceClassState @ 0x140B3140C
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x140AFAD74 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     IopGetSecurityDescriptorInformation @ 0x140AFAC84 (IopGetSecurityDescriptorInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQuerySecureDeviceClassState(HANDLE KeyHandle, __int64 a2)
{
  PVOID v4; // r14
  NTSTATUS RegistryValue; // eax
  PVOID v6; // rbx
  int SecurityDescriptorInformation; // edi
  void *v8; // rcx
  NTSTATUS v9; // eax
  NTSTATUS v11; // eax
  char *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  NTSTATUS v15; // eax
  char *v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  char *v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  PVOID v22; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v23; // [rsp+88h] [rbp+48h] BYREF
  int v24; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF

  v23 = 0;
  *(_OWORD *)a2 = 0LL;
  v24 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  v22 = 0LL;
  P = 0LL;
  v4 = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Security", 0, &P);
  v6 = P;
  SecurityDescriptorInformation = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)P + 1) != 3 )
    {
      SecurityDescriptorInformation = -1073741492;
      goto LABEL_3;
    }
    SecurityDescriptorInformation = SeCaptureSecurityDescriptor(
                                      (unsigned __int16 *)((char *)P + *((unsigned int *)P + 2)),
                                      0,
                                      1,
                                      1,
                                      (unsigned __int16 **)&v22);
    if ( SecurityDescriptorInformation < 0 )
    {
      v4 = v22;
      goto LABEL_13;
    }
    ExFreePoolWithTag(v6, 0);
    v4 = v22;
    v6 = 0LL;
    P = 0LL;
    if ( v22 )
    {
      SecurityDescriptorInformation = IopGetSecurityDescriptorInformation(v22, &v23, &v24);
      if ( SecurityDescriptorInformation < 0 )
        goto LABEL_13;
      if ( !v23 )
      {
        *(_DWORD *)a2 |= 2u;
        *(_QWORD *)(a2 + 8) = v4;
        v4 = 0LL;
      }
    }
  }
  else
  {
    if ( RegistryValue != -1073741772 )
    {
LABEL_3:
      v8 = *(void **)(a2 + 8);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      *(_OWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      goto LABEL_16;
    }
    SecurityDescriptorInformation = 0;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    v11 = IopGetRegistryValue(KeyHandle, L"DeviceType", 0, &P);
    SecurityDescriptorInformation = v11;
    if ( v11 < 0 )
    {
      if ( v11 != -1073741772 )
        goto LABEL_12;
      v6 = P;
    }
    else
    {
      v12 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v13 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 1u;
        v14 = *(_DWORD *)&v12[v13];
      }
      else
      {
        v14 = 0;
      }
      *(_DWORD *)(a2 + 4) = v14;
      ExFreePoolWithTag(v12, 0);
      v6 = 0LL;
      P = 0LL;
    }
  }
  if ( (*(_DWORD *)a2 & 4) == 0 )
  {
    v15 = IopGetRegistryValue(KeyHandle, L"DeviceCharacteristics", 0, &P);
    SecurityDescriptorInformation = v15;
    if ( v15 >= 0 )
    {
      v16 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v17 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 4u;
        v18 = *(_DWORD *)&v16[v17];
      }
      else
      {
        v18 = 0;
      }
      *(_DWORD *)(a2 + 16) = v18;
      ExFreePoolWithTag(v16, 0);
      v6 = 0LL;
      P = 0LL;
      goto LABEL_8;
    }
    if ( v15 == -1073741772 )
    {
      v6 = P;
      goto LABEL_8;
    }
LABEL_12:
    v6 = P;
    goto LABEL_13;
  }
LABEL_8:
  if ( (*(_DWORD *)a2 & 8) != 0 )
    goto LABEL_13;
  v9 = IopGetRegistryValue(KeyHandle, L"Exclusive", 0, &P);
  SecurityDescriptorInformation = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -1073741772 )
      SecurityDescriptorInformation = 0;
    goto LABEL_12;
  }
  v19 = (char *)P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
  {
    v20 = *((unsigned int *)P + 2);
    *(_DWORD *)a2 |= 8u;
    v21 = *(_DWORD *)&v19[v20];
  }
  else
  {
    v21 = 0;
  }
  *(_DWORD *)(a2 + 20) = v21;
  ExFreePoolWithTag(v19, 0);
  v6 = 0LL;
LABEL_13:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( SecurityDescriptorInformation < 0 )
    goto LABEL_3;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)SecurityDescriptorInformation;
}
