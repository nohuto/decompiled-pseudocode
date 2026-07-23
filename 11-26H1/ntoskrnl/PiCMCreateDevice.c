/*
 * XREFs of PiCMCreateDevice @ 0x140B5D998
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     _CmValidateDeviceName @ 0x14094D660 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     PpDeviceRegistration @ 0x1409B4D7C (PpDeviceRegistration.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x140AA1B44 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     _CmCreateDevice @ 0x140AF540C (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF98F0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140B5E128 (PiCMCaptureCreateDeviceInputData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rcx
  void *v29; // rcx
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  int DeviceInstanceCsConfigFlags; // eax
  char v33; // dl
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  struct _KTHREAD *v39; // rax
  char PreviousMode; // bl
  __int64 v42; // [rsp+58h] [rbp-99h] BYREF
  _QWORD *v43; // [rsp+60h] [rbp-91h]
  __int64 v44; // [rsp+68h] [rbp-89h] BYREF
  _WORD *v45; // [rsp+70h] [rbp-81h]
  size_t v46; // [rsp+78h] [rbp-79h]
  int v47; // [rsp+80h] [rbp-71h] BYREF
  HANDLE v48; // [rsp+88h] [rbp-69h] BYREF
  int v49; // [rsp+90h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-59h] BYREF
  int v51; // [rsp+A0h] [rbp-51h] BYREF
  int v52; // [rsp+A4h] [rbp-4Dh] BYREF
  int v53; // [rsp+A8h] [rbp-49h] BYREF
  size_t pcchLength; // [rsp+B0h] [rbp-41h] BYREF
  PVOID P; // [rsp+B8h] [rbp-39h] BYREF
  UNICODE_STRING v56; // [rsp+C0h] [rbp-31h] BYREF
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+D0h] [rbp-21h]
  PCWSTR SourceString[2]; // [rsp+E0h] [rbp-11h]
  __int64 v59; // [rsp+F0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp+7h] BYREF

  v59 = 0LL;
  LODWORD(v44) = 0;
  v47 = 0;
  Handle = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v53 = 0;
  v51 = 0;
  v9 = 0LL;
  v49 = 0;
  v10 = 0;
  v52 = 0;
  v11 = 0LL;
  v43 = 0LL;
  v48 = 0LL;
  P = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  pcchLength = 0LL;
  v56 = 0LL;
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
    v22 = v46;
    goto LABEL_85;
  }
  v14 = (wchar_t *)pszSrc[1];
  v15 = BYTE4(pszSrc[0]);
  if ( !pszSrc[1]
    || LODWORD(SourceString[0]) < 2
    || !SourceString[1]
    || (unsigned int)v59 < 2
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
    inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, 16, 0, 131103, 0, (__int64)&v48, 0LL);
    if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
      goto LABEL_20;
    if ( v16 )
    {
      if ( !v48 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v42) = 0;
        v10 = 1;
        inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, 131078, &Handle, &v42, 0);
        if ( inited < 0 )
          goto LABEL_20;
        if ( (_BYTE)v42 )
        {
          v51 = 1;
          inited = PnpCtxRegSetValue(v24, Handle, (__int64)L"Phantom", 4LL, (__int64)&v51, 4u);
          ZwClose(Handle);
          if ( inited < 0 )
            goto LABEL_20;
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          v11 = v45;
          v10 = 0;
          v8 = v45;
          goto LABEL_75;
        }
        inited = -1073741771;
        ZwClose(Handle);
LABEL_31:
        v11 = v45;
        goto LABEL_16;
      }
LABEL_30:
      inited = -1073741771;
      goto LABEL_31;
    }
    if ( v48 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, v9) >= 0 )
      {
        PpDevNodeLockTree(0);
        v25 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
        v43 = v25;
        v26 = (__int64)v25;
        if ( v25 )
          v27 = *(_QWORD *)(v25[39] + 40LL);
        else
          v27 = 0LL;
        PpDevNodeUnlockTree(0);
        if ( v27 )
        {
          if ( IopIsRootEnumeratedDeviceObjectActive(v26) )
          {
            inited = -1073741771;
            v11 = 0LL;
            v8 = v29;
            goto LABEL_84;
          }
        }
        else
        {
          PiPnpRtlEnsureObjectCached(v28, (__int64)v9);
        }
      }
    }
    else
    {
      v30 = KeGetCurrentThread();
      --v30->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      LOBYTE(v42) = 0;
      v10 = 1;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, 131103, &v48, &v42, 0);
      if ( inited < 0 )
        goto LABEL_20;
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v10 = 0;
      if ( !(_BYTE)v42 )
        goto LABEL_30;
    }
    inited = RtlInitUnicodeStringEx(&v56, v9);
    v10 = 0;
    if ( inited < 0 )
      goto LABEL_20;
    LODWORD(v44) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v9,
                (__int64)v48,
                0xBu,
                (__int64)&v47,
                (__int64)&v49,
                (__int64)&v44,
                0) < 0 )
      v49 = 0;
    DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v56.Length, v31, &v52);
    v33 = v52;
    if ( DeviceInstanceCsConfigFlags < 0 )
      v33 = 0;
    if ( (v49 & 0x12) == 0 && (v33 & 2) == 0 )
    {
      inited = PiInitializeDevice(&v56);
      if ( inited < 0 )
        goto LABEL_20;
      LODWORD(v44) = 4;
      if ( PnpCtxRegQueryValue(v34, v48, L"Phantom", &v47, &v53, (unsigned int *)&v44) < 0
        || v47 != 4
        || (v36 = v53, (_DWORD)v44 != 4) )
      {
        v36 = 0;
      }
      if ( v36 )
        PnpCtxRegDeleteValue(v35, v48, L"Phantom");
      if ( (v15 & 8) != 0 )
      {
        LODWORD(v44) = 512;
        v45 = (_WORD *)ExAllocatePool2(0x100uLL);
        v11 = v45;
        if ( !v45 )
        {
          inited = -1073741670;
LABEL_64:
          v8 = v43;
          goto LABEL_84;
        }
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v9,
                    (__int64)v48,
                    5u,
                    (__int64)&v47,
                    (__int64)v45,
                    (__int64)&v44,
                    0) >= 0
          && v47 == 1
          && (unsigned int)v44 <= 0x200
          && *v11 )
        {
          inited = RtlInitUnicodeStringEx(&v56, v9);
          if ( inited >= 0 )
          {
            LOBYTE(v37) = 1;
            inited = PpDeviceRegistration((__int64)&v56, v37, 0LL, 0);
          }
          v8 = v43;
          if ( inited < 0 )
            goto LABEL_84;
          goto LABEL_75;
        }
      }
      else
      {
        v11 = v45;
      }
      v8 = v43;
      goto LABEL_75;
    }
    v11 = v45;
    inited = -1073741808;
    goto LABEL_64;
  }
  v20 = PiCMGenerateDeviceInstance(v14, v16 != 0, Pool2, v19);
  inited = v20;
  if ( !v16 )
    goto LABEL_23;
  v43 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
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
  v46 = pcchLength + 1;
  if ( (unsigned __int64)a4 - 20 < 2 * (pcchLength + 1) )
    inited = -1073741789;
  if ( inited < 0 )
  {
LABEL_21:
    v11 = v45;
    v8 = v43;
    v22 = v46;
LABEL_86:
    v38 = PiCMReturnBufferResultData(inited, 2 * v22, 0, 0LL, 0, SHIDWORD(v59), a3, v21, a6);
    goto LABEL_87;
  }
  v38 = PiCMReturnBufferResultData(
          inited,
          2 * ((int)pcchLength + 1),
          0,
          v9,
          2 * ((int)pcchLength + 1),
          SHIDWORD(v59),
          a3,
          a4,
          a6);
LABEL_87:
  DeviceInputData = v38;
  if ( v48 )
    ZwClose(v48);
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
  v39 = KeGetCurrentThread();
  PreviousMode = v39->PreviousMode;
  if ( pszSrc[1] )
    PiControlFreeUserModeCallersBuffer(v39->PreviousMode, (void *)pszSrc[1]);
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString[1]);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)DeviceInputData;
}
