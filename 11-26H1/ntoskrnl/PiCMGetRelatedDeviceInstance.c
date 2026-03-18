/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x140998C60
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     _CmGetDeviceParent @ 0x140991D0C (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x140991F84 (_CmIsRootDevice.c)
 *     PiCMReturnBufferResultData @ 0x1409993B0 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1409994A8 (PiCMCaptureObjectInputData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetRelatedDeviceInstance(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v7; // r15
  void *v8; // rbx
  wchar_t *Pool2; // rdi
  int v10; // r13d
  NTSTATUS inited; // esi
  int v12; // ebp
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // r9d
  _WORD *v16; // rax
  __int16 *v17; // rdx
  __int16 v18; // cx
  wchar_t *v19; // rax
  unsigned int v20; // r13d
  int v21; // eax
  NTSTATUS v22; // eax
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  wchar_t *v33; // r10
  signed __int64 v34; // r8
  wchar_t v35; // ax
  __int64 *v36; // r14
  void *i; // r12
  struct _KTHREAD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v42; // rax
  _QWORD *v43; // rbx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ebp
  int v47; // ebp
  int v48; // eax
  __int64 *v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  NTSTATUS DeviceParent; // eax
  char *v54; // [rsp+50h] [rbp-98h]
  unsigned int v55; // [rsp+58h] [rbp-90h] BYREF
  __int64 v56; // [rsp+60h] [rbp-88h]
  __int128 v57; // [rsp+68h] [rbp-80h]
  PVOID P[2]; // [rsp+78h] [rbp-70h]
  __int64 v59; // [rsp+88h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-58h] BYREF
  _QWORD Buffer[2]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = a4;
  v57 = 0LL;
  v7 = a3;
  v8 = 0LL;
  Pool2 = 0LL;
  *(_OWORD *)P = 0LL;
  v59 = 0LL;
  v10 = 0;
  DestinationString = 0LL;
  *a6 = 0;
  inited = PiCMCaptureObjectInputData(a1);
  if ( inited < 0 )
    goto LABEL_41;
  v12 = HIDWORD(P[1]);
  if ( !P[0] || *(_QWORD *)((char *)&v57 + 4) != 0x100000000LL || !v7 || v6 < 0x14 )
  {
    inited = -1073741811;
    goto LABEL_36;
  }
  if ( v6 - 20 >= 2 )
    LODWORD(v8) = v6 - 20;
  v55 = (unsigned int)v8;
  if ( (_DWORD)v8 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      inited = -1073741670;
    if ( inited < 0 )
      goto LABEL_102;
  }
  v13 = 0;
  v14 = 200LL;
  v15 = 1;
  v16 = P[0];
  while ( *v16 )
  {
    ++v16;
    if ( !--v14 )
    {
      inited = -1073741773;
      goto LABEL_102;
    }
  }
  v17 = (__int16 *)P[0];
  while ( 1 )
  {
    v18 = *v17;
    if ( !*v17 )
      break;
    if ( (unsigned __int16)(v18 - 33) > 0x5Eu || v18 == 44 )
      goto LABEL_46;
    if ( v18 == 92 )
    {
      if ( !v13 )
        goto LABEL_46;
      ++v15;
      v13 = 0;
      ++v17;
    }
    else
    {
      ++v13;
      ++v17;
    }
  }
  if ( !v13 )
  {
LABEL_46:
    inited = -1073741773;
    v8 = 0LL;
    goto LABEL_36;
  }
  if ( v15 != 3 )
  {
    inited = -1073741773;
    v8 = 0LL;
    goto LABEL_36;
  }
  if ( HIDWORD(P[1]) != 2 )
  {
    if ( HIDWORD(P[1]) == 1 )
    {
      v55 = (unsigned int)v8 >> 1;
      DeviceParent = CmGetDeviceParent(*(__int64 *)&PiPnpRtlCtx, (const WCHAR *)P[0], Pool2, &v55);
      v10 = v55;
      inited = DeviceParent;
      v8 = 0LL;
LABEL_35:
      if ( inited < 0 )
        goto LABEL_36;
      v22 = PiCMReturnBufferResultData(
              (unsigned int)inited,
              (unsigned int)(2 * v10),
              0LL,
              Pool2,
              2 * v10,
              v59,
              v7,
              v6,
              a6);
      goto LABEL_37;
    }
    if ( HIDWORD(P[1]) != 3 )
    {
      inited = -1073741811;
      v8 = 0LL;
      goto LABEL_36;
    }
    if ( CmIsRootDevice((PCWSTR)P[0]) )
    {
      inited = -1073741810;
      goto LABEL_102;
    }
    v12 = 3;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)P[0]);
  if ( inited < 0 )
  {
LABEL_102:
    v8 = 0LL;
    goto LABEL_36;
  }
  v56 = 400LL;
  v54 = (char *)ExAllocatePool2(0x100uLL);
  v8 = v54;
  if ( !v54 )
  {
    inited = -1073741670;
    goto LABEL_36;
  }
  CurrentThread = KeGetCurrentThread();
  inited = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  Buffer[0] = 0LL;
  Buffer[1] = &DestinationString;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v42 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( !v42
    || (v43 = *v42) == 0LL
    || *(_WORD *)v43 != 3
    || (v44 = *(_QWORD *)(v43[39] + 40LL)) == 0
    || *(_QWORD **)(v44 + 32) != v43 )
  {
    KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v51, v52);
    v8 = v54;
    inited = -1073741810;
    v7 = a3;
    goto LABEL_36;
  }
  ObfReferenceObjectWithTag(v43, 0x43706E50u);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  v36 = *(__int64 **)(v43[39] + 40LL);
  if ( !v36 || (v45 = *((_DWORD *)v36 + 75), v45 == 790) || v45 == 789 )
  {
    inited = -1073741810;
  }
  else
  {
    v46 = v12 - 1;
    if ( !v46 )
    {
      v36 = (__int64 *)v36[2];
      i = v43;
      goto LABEL_62;
    }
    v47 = v46 - 1;
    if ( !v47 )
    {
      v49 = (__int64 *)v36[1];
      i = v43;
      v36 = v49;
      if ( !v49 )
        goto LABEL_62;
      v50 = *((_DWORD *)v49 + 99);
      if ( (v50 & 0x2000) == 0 || *((_DWORD *)v36 + 101) != 24 || (v50 & 0x1000) == 0 )
        goto LABEL_62;
      goto LABEL_81;
    }
    if ( v47 == 1 )
    {
LABEL_81:
      v36 = (__int64 *)*v36;
      for ( i = v43; v36; v36 = (__int64 *)*v36 )
      {
        v48 = *((_DWORD *)v36 + 99);
        if ( (v48 & 0x2000) == 0 )
          break;
        if ( *((_DWORD *)v36 + 101) != 24 )
          break;
        if ( (v48 & 0x1000) == 0 )
          break;
      }
LABEL_62:
      v38 = KeGetCurrentThread();
      --v38->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      while ( 1 )
      {
        if ( !v36 )
        {
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v39, v40);
          inited = -1073741810;
          goto LABEL_53;
        }
        if ( v36[6] )
        {
          v24 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(v36 + 5, 1131441744LL);
          if ( v24 )
            break;
        }
        v36 = (__int64 *)*v36;
      }
      ObfDereferenceObjectWithTag(v24, 0x43706E50u);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26);
      v27 = *((unsigned __int16 *)v36 + 20);
      if ( (unsigned int)v27 >= 0x190 )
      {
        inited = -1073741789;
        v56 = (unsigned int)(v27 + 2);
      }
      else
      {
        memmove(v54, (const void *)v36[6], *((unsigned __int16 *)v36 + 20));
        LODWORD(v56) = v27;
        *(_WORD *)&v54[v27] = 0;
      }
      goto LABEL_53;
    }
    inited = -1073741811;
  }
  i = v43;
LABEL_53:
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29);
  ObfDereferenceObjectWithTag(i, 0x43706E50u);
  v8 = v54;
  if ( inited >= 0 )
  {
    v30 = v55;
    v31 = (unsigned __int64)v55 >> 1;
    if ( v31 )
    {
      v32 = 2147483646 - v31;
      v33 = Pool2;
      v34 = v54 - (char *)Pool2;
      do
      {
        if ( !(v32 + v31) )
          break;
        v35 = *(wchar_t *)((char *)Pool2 + v34);
        if ( !v35 )
          break;
        *Pool2++ = v35;
        --v31;
      }
      while ( v31 );
      v19 = Pool2 - 1;
      if ( v31 )
        v19 = Pool2;
      Pool2 = v33;
      v20 = v56;
      *v19 = 0;
      v21 = -2147483643;
      if ( v31 )
        v21 = 0;
      inited = v21;
      if ( v21 < 0 && v30 )
        *v33 = 0;
      if ( v21 == -2147483643 )
        inited = -1073741789;
    }
    else
    {
      v20 = v56;
      inited = -1073741811;
    }
    v6 = a4;
    v7 = a3;
    v10 = (v20 >> 1) + 1;
    goto LABEL_35;
  }
  v6 = a4;
  v7 = a3;
LABEL_36:
  v22 = PiCMReturnBufferResultData((unsigned int)inited, (unsigned int)(2 * v10), 0LL, 0LL, 0, v59, v7, v6, a6);
LABEL_37:
  inited = v22;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x34706E50u);
LABEL_41:
  if ( P[0] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)inited;
}
