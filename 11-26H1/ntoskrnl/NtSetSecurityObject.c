/*
 * XREFs of NtSetSecurityObject @ 0x1408F31F0
 * Callers:
 *     DifNtSetSecurityObjectWrapper @ 0x1406911E0 (DifNtSetSecurityObjectWrapper.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A992E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObSetSecurityObjectByPointer @ 0x1408F2970 (ObSetSecurityObjectByPointer.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1408F37EC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepRmGlobalSaclFind @ 0x140A95210 (SepRmGlobalSaclFind.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  SECURITY_INFORMATION v4; // ebx
  PVOID v6; // r15
  void *v7; // r12
  SECURITY_INFORMATION v8; // ecx
  SECURITY_INFORMATION v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  ACCESS_MASK v17; // esi
  NTSTATUS v18; // edi
  int v19; // eax
  _QWORD *v20; // r14
  PVOID v21; // r13
  int v22; // eax
  __int64 v23; // r9
  unsigned int v24; // ecx
  __int64 v25; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  PVOID v30; // [rsp+70h] [rbp-19h] BYREF
  PVOID Object; // [rsp+78h] [rbp-11h] BYREF
  void *v32; // [rsp+80h] [rbp-9h] BYREF
  PVOID P; // [rsp+88h] [rbp-1h] BYREF
  PVOID v34; // [rsp+90h] [rbp+7h] BYREF
  PVOID v35; // [rsp+98h] [rbp+Fh] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp+17h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+100h] [rbp+77h]

  v35 = 0LL;
  v4 = SecurityInformation;
  HandleInformation = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  v30 = 0LL;
  v7 = 0LL;
  P = 0LL;
  v32 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v8 = SecurityInformation & 0x100;
  v9 = SecurityInformation & 0x80;
  if ( (v4 & 0x10000) != 0 )
  {
    v28 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v9 )
      v4 = v28;
    if ( !v8 )
      v4 &= ~0x100u;
  }
  v10 = ((v4 & 0x10000) != 0 ? 0x1040000 : 0) | 0x80000;
  if ( (v4 & 0x13) == 0 )
    v10 = (v4 & 0x10000) != 0 ? 0x10C0000 : 0;
  v11 = v10 | 0x40000;
  if ( (v4 & 4) == 0 )
    v11 = v10;
  v12 = v11 | 0x40000;
  if ( (v4 & 0x20) == 0 )
    v12 = v11;
  v13 = v12 | 0x40000;
  if ( (v4 & 0x80u) == 0 )
    v13 = v12;
  v14 = v13 | 0x40000;
  if ( (v4 & 0x100) == 0 )
    v14 = v13;
  v15 = v14 | 0x1000000;
  if ( (v4 & 0x40) == 0 )
    v15 = v14;
  v16 = v15 | 0x1000000;
  if ( (v4 & 8) == 0 )
    v16 = v15;
  v17 = v16;
  if ( (v4 & 0x1F8) != 0 && (v4 & 0x50000000) != 0 )
    v17 = v16 | 0x1000000;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = ObReferenceObjectByHandle(Handle, v17, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v18 < 0 )
    return v18;
  v19 = SeCaptureSecurityDescriptor(SecurityDescriptor, (__int64)&v35);
  v20 = Object;
  v18 = v19;
  if ( v19 < 0 )
  {
LABEL_50:
    ObfDereferenceObject(v20);
    return v18;
  }
  v21 = v35;
  if ( (*((_BYTE *)v35 + 2) & 0x10) == 0 && (v4 & 0x10000) != 0 )
    v4 &= 0xFFFFFE07;
  if ( ((v4 & 1) == 0 || *((_DWORD *)v35 + 1)) && ((v4 & 2) == 0 || *((_DWORD *)v35 + 2)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v17 &= 0xFFF3FFFF;
    if ( !v17 )
      goto LABEL_35;
    v22 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, 0LL, &v30);
    v6 = v30;
    v18 = v22;
    if ( v22 >= 0 )
    {
      if ( (v17 & 0xFEFFFFFF) == 0 )
        goto LABEL_35;
      v24 = 0;
      if ( *(_BYTE *)v30 == 1 )
      {
        v18 = 0;
        if ( (*((_BYTE *)v30 + 2) & 0x10) != 0 )
          goto LABEL_30;
      }
      else
      {
        v18 = -1073741736;
      }
      HandleInformation = 0LL;
      LOBYTE(v23) = 1;
      v29 = SepRmGlobalSaclFind(
              &HandleInformation,
              0LL,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v20 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v20 - 48) >> 8)]
            + 16,
              v23);
      if ( v18 >= 0 )
      {
        if ( v29 != -1073741772 )
        {
          v24 = 0;
LABEL_30:
          if ( (v17 & 0x80000) != 0 )
            v24 = v4 & 0x13;
          v25 = v24 | 4;
          if ( (v17 & 0x40000) == 0 )
            v25 = v24;
          v18 = ObpAllocateAndQuerySecurityDescriptorInfo(v20, v25, 0LL, &v34);
          if ( v18 < 0 )
            goto LABEL_44;
          goto LABEL_35;
        }
        v17 &= 0xFFF3FFFF;
LABEL_35:
        if ( (v4 & 0x40) == 0
          || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v20 - 24) ^ ((unsigned __int16)((_WORD)v20 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
          && (*(_DWORD *)(v20[1] + 52LL) & 0x10) != 0
          || (v27 = ObpAllocateAndQuerySecurityDescriptorInfo(v20, 64LL, 0LL, &v32), v7 = v32, v18 = v27, v27 >= 0) )
        {
          if ( (v4 & 0x20) == 0
            || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v20 - 24) ^ ((unsigned __int16)((_WORD)v20 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
            && (*(_DWORD *)(v20[1] + 52LL) & 0x10) != 0
            || (v18 = ObpAllocateAndQuerySecurityDescriptorInfo(v20, 32LL, 0LL, &P), v18 >= 0) )
          {
            v18 = ObSetSecurityObjectByPointer((__int64)v20);
            if ( v18 >= 0 && (v17 || (v4 & 0x20) != 0) )
              SeSecurityDescriptorChangedAuditAlarm(
                0,
                (_DWORD)v20,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v20 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v20 - 48) >> 8)]
              + 16,
                0,
                (__int64)Handle,
                0,
                v17,
                v4,
                (__int64)v34,
                (__int64)v6,
                (__int64)P,
                (__int64)v7,
                (__int64)v21);
          }
        }
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
LABEL_44:
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    if ( (unsigned __int8)PreviousMode <= 1u )
      ExFreePoolWithTag(v21, 0);
    goto LABEL_50;
  }
  if ( (unsigned __int8)PreviousMode <= 1u )
    ExFreePoolWithTag(v35, 0);
  ObfDereferenceObject(Object);
  return -1073741703;
}
