/*
 * XREFs of PiCMCreateDevice @ 0x140B5A67C
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlStringCchLengthW @ 0x140459140 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x14045AB50 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A71F8 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B0AD8 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     _PnpCtxRegSetValue @ 0x14090AB14 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x14090B324 (_PnpCtxRegDeleteValue.c)
 *     PpDeviceRegistration @ 0x140912C9C (PpDeviceRegistration.c)
 *     _PnpCtxRegQueryValue @ 0x140917E70 (_PnpCtxRegQueryValue.c)
 *     _CmValidateDeviceName @ 0x14098CC00 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x140991F84 (_CmIsRootDevice.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     PiCMReturnBufferResultData @ 0x1409993B0 (PiCMReturnBufferResultData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PpDevNodeLockTree @ 0x140A88424 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A921A4 (PpDevNodeUnlockTree.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x140AA01B4 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     _CmCreateDevice @ 0x140AF2C20 (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF7250 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140B5AE0C (PiCMCaptureCreateDeviceInputData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCreateDevice(void *a1, __int64 a2, char *a3, unsigned int a4, int a5, _DWORD *a6)
{
  void *v8; // r13
  wchar_t *v9; // rsi
  char v10; // di
  _WORD *v11; // r12
  int DeviceInputData; // r14d
  int inited; // ebx
  wchar_t *v14; // r12
  char v15; // r13
  int v16; // r14d
  wchar_t *Pool2; // rax
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // eax
  unsigned int v21; // r8d
  int v22; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rcx
  void *v31; // rcx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  int DeviceInstanceCsConfigFlags; // eax
  char v35; // dl
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  struct _KTHREAD *v41; // rax
  char PreviousMode; // bl
  __int64 v44; // [rsp+58h] [rbp-99h] BYREF
  _QWORD *v45; // [rsp+60h] [rbp-91h]
  __int64 v46; // [rsp+68h] [rbp-89h] BYREF
  _WORD *v47; // [rsp+70h] [rbp-81h]
  size_t v48; // [rsp+78h] [rbp-79h]
  int v49; // [rsp+80h] [rbp-71h] BYREF
  HANDLE v50; // [rsp+88h] [rbp-69h] BYREF
  int v51; // [rsp+90h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-59h] BYREF
  int v53; // [rsp+A0h] [rbp-51h] BYREF
  int v54; // [rsp+A4h] [rbp-4Dh] BYREF
  int v55; // [rsp+A8h] [rbp-49h] BYREF
  size_t pcchLength; // [rsp+B0h] [rbp-41h] BYREF
  PVOID P; // [rsp+B8h] [rbp-39h] BYREF
  UNICODE_STRING v58; // [rsp+C0h] [rbp-31h] BYREF
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+D0h] [rbp-21h]
  PCWSTR SourceString[2]; // [rsp+E0h] [rbp-11h]
  __int64 v61; // [rsp+F0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp+7h] BYREF

  v61 = 0LL;
  LODWORD(v46) = 0;
  v49 = 0;
  Handle = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v55 = 0;
  v53 = 0;
  v9 = 0LL;
  v51 = 0;
  v10 = 0;
  v54 = 0;
  v11 = 0LL;
  v45 = 0LL;
  v50 = 0LL;
  P = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  pcchLength = 0LL;
  v58 = 0LL;
  *(_OWORD *)pszSrc = 0LL;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1);
  if ( DeviceInputData < 0 )
    goto LABEL_97;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
LABEL_84:
    v22 = v48;
    goto LABEL_85;
  }
  v14 = (wchar_t *)pszSrc[1];
  v15 = BYTE4(pszSrc[0]);
  if ( !pszSrc[1]
    || LODWORD(SourceString[0]) < 2
    || !SourceString[1]
    || (unsigned int)v61 < 2
    || !a3
    || a4 < 0x14
    || (HIDWORD(pszSrc[0]) & 0xFFFFFFF0) != 0 )
  {
    v11 = 0LL;
    v8 = 0LL;
    goto LABEL_83;
  }
  v16 = BYTE4(pszSrc[0]) & 2;
  if ( !CmIsRootDevice(SourceString[1]) )
  {
    v11 = 0LL;
    v8 = 0LL;
LABEL_83:
    inited = -1073741811;
    goto LABEL_84;
  }
  inited = PiPnpRtlBeginOperation(&P);
  if ( inited < 0 )
    goto LABEL_20;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    v11 = 0LL;
LABEL_16:
    v8 = v11;
    goto LABEL_84;
  }
  if ( (v15 & 4) == 0 )
  {
    inited = CmValidateDeviceName(v18, v14);
LABEL_23:
    if ( inited < 0 )
      goto LABEL_20;
    if ( (v15 & 4) == 0 )
    {
      inited = RtlStringCchCopyExW(v9, 0xC8uLL, v14, 0LL, 0LL, 0x800u);
      if ( inited < 0 )
        goto LABEL_20;
    }
    inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, 16, 0, 131103, 0, (__int64)&v50, 0LL);
    if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
      goto LABEL_20;
    if ( v16 )
    {
      if ( !v50 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v44) = 0;
        v10 = 1;
        inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, 131078, &Handle, &v44, 0);
        if ( inited < 0 )
          goto LABEL_20;
        if ( (_BYTE)v44 )
        {
          v53 = 1;
          inited = PnpCtxRegSetValue(v24, Handle, (__int64)L"Phantom", 4LL, (__int64)&v53, 4u);
          ZwClose(Handle);
          if ( inited < 0 )
            goto LABEL_20;
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          v11 = v47;
          v10 = 0;
          v8 = v47;
          goto LABEL_75;
        }
        inited = -1073741771;
        ZwClose(Handle);
LABEL_31:
        v11 = v47;
        goto LABEL_16;
      }
LABEL_30:
      inited = -1073741771;
      goto LABEL_31;
    }
    if ( v50 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, v9) >= 0 )
      {
        PpDevNodeLockTree(0);
        v25 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
        v45 = v25;
        v28 = (__int64)v25;
        if ( v25 )
          v29 = *(_QWORD *)(v25[39] + 40LL);
        else
          v29 = 0LL;
        PpDevNodeUnlockTree(0, v26, v27);
        if ( v29 )
        {
          if ( IopIsRootEnumeratedDeviceObjectActive(v28) )
          {
            inited = -1073741771;
            v11 = 0LL;
            v8 = v31;
            goto LABEL_84;
          }
        }
        else
        {
          PiPnpRtlEnsureObjectCached(v30, (__int64)v9);
        }
      }
    }
    else
    {
      v32 = KeGetCurrentThread();
      --v32->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      LOBYTE(v44) = 0;
      v10 = 1;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, 131103, &v50, &v44, 0);
      if ( inited < 0 )
        goto LABEL_20;
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v10 = 0;
      if ( !(_BYTE)v44 )
        goto LABEL_30;
    }
    inited = RtlInitUnicodeStringEx(&v58, v9);
    v10 = 0;
    if ( inited < 0 )
      goto LABEL_20;
    LODWORD(v46) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v9,
                (__int64)v50,
                0xBu,
                (__int64)&v49,
                (__int64)&v51,
                (__int64)&v46,
                0) < 0 )
      v51 = 0;
    DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v58.Length, v33, &v54);
    v35 = v54;
    if ( DeviceInstanceCsConfigFlags < 0 )
      v35 = 0;
    if ( (v51 & 0x12) == 0 && (v35 & 2) == 0 )
    {
      inited = PiInitializeDevice(&v58);
      if ( inited < 0 )
        goto LABEL_20;
      LODWORD(v46) = 4;
      if ( PnpCtxRegQueryValue(v36, v50, L"Phantom", &v49, &v55, (unsigned int *)&v46) < 0
        || v49 != 4
        || (v38 = v55, (_DWORD)v46 != 4) )
      {
        v38 = 0;
      }
      if ( v38 )
        PnpCtxRegDeleteValue(v37, v50, L"Phantom");
      if ( (v15 & 8) != 0 )
      {
        LODWORD(v46) = 512;
        v47 = (_WORD *)ExAllocatePool2(0x100uLL);
        v11 = v47;
        if ( !v47 )
        {
          inited = -1073741670;
LABEL_64:
          v8 = v45;
          goto LABEL_84;
        }
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v9,
                    (__int64)v50,
                    5u,
                    (__int64)&v49,
                    (__int64)v47,
                    (__int64)&v46,
                    0) >= 0
          && v49 == 1
          && (unsigned int)v46 <= 0x200
          && *v11 )
        {
          inited = RtlInitUnicodeStringEx(&v58, v9);
          if ( inited >= 0 )
          {
            LOBYTE(v39) = 1;
            inited = PpDeviceRegistration((__int64)&v58, v39, 0LL, 0);
          }
          v8 = v45;
          if ( inited < 0 )
            goto LABEL_84;
          goto LABEL_75;
        }
      }
      else
      {
        v11 = v47;
      }
      v8 = v45;
      goto LABEL_75;
    }
    v11 = v47;
    inited = -1073741808;
    goto LABEL_64;
  }
  v20 = PiCMGenerateDeviceInstance(v14, v16 != 0, Pool2, v19);
  inited = v20;
  if ( !v16 )
    goto LABEL_23;
  v45 = 0LL;
  v8 = 0LL;
  v47 = 0LL;
  v11 = 0LL;
  if ( v20 < 0 )
  {
LABEL_20:
    v21 = a4;
    goto LABEL_21;
  }
LABEL_75:
  inited = RtlStringCchLengthW(v9, 0xC8uLL, &pcchLength);
  if ( inited < 0 )
  {
    v22 = 0;
LABEL_85:
    v21 = a4;
    goto LABEL_86;
  }
  v21 = a4;
  v48 = pcchLength + 1;
  if ( (unsigned __int64)a4 - 20 < 2 * (pcchLength + 1) )
    inited = -1073741789;
  if ( inited < 0 )
  {
LABEL_21:
    v11 = v47;
    v8 = v45;
    v22 = v48;
LABEL_86:
    v40 = PiCMReturnBufferResultData(inited, 2 * v22, 0, 0LL, 0, SHIDWORD(v61), a3, v21, a6);
    goto LABEL_87;
  }
  v40 = PiCMReturnBufferResultData(
          inited,
          2 * ((int)pcchLength + 1),
          0,
          v9,
          2 * ((int)pcchLength + 1),
          SHIDWORD(v61),
          a3,
          a4,
          a6);
LABEL_87:
  DeviceInputData = v40;
  if ( v50 )
    ZwClose(v50);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x34706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x34706E50u);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v10 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
LABEL_97:
  v41 = KeGetCurrentThread();
  PreviousMode = v41->PreviousMode;
  if ( pszSrc[1] )
    PiControlFreeUserModeCallersBuffer(v41->PreviousMode, (void *)pszSrc[1]);
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString[1]);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)DeviceInputData;
}
