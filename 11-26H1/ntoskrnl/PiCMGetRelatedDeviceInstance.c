/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x1409596C0
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmGetDeviceParent @ 0x14095276C (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v25; // rbp
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  wchar_t *v29; // r10
  signed __int64 v30; // r8
  wchar_t v31; // ax
  __int64 *v32; // r14
  void *i; // r12
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // ebp
  int v41; // ebp
  int v42; // eax
  __int64 *v43; // rax
  int v44; // eax
  NTSTATUS DeviceParent; // eax
  char *v46; // [rsp+50h] [rbp-98h]
  unsigned int v47; // [rsp+58h] [rbp-90h] BYREF
  __int64 v48; // [rsp+60h] [rbp-88h]
  __int128 v49; // [rsp+68h] [rbp-80h]
  PVOID P[2]; // [rsp+78h] [rbp-70h]
  __int64 v51; // [rsp+88h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-58h] BYREF
  _QWORD Buffer[2]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = a4;
  v49 = 0LL;
  v7 = a3;
  v8 = 0LL;
  Pool2 = 0LL;
  *(_OWORD *)P = 0LL;
  v51 = 0LL;
  v10 = 0;
  DestinationString = 0LL;
  *a6 = 0;
  inited = PiCMCaptureObjectInputData(a1);
  if ( inited < 0 )
    goto LABEL_41;
  v12 = HIDWORD(P[1]);
  if ( !P[0] || *(_QWORD *)((char *)&v49 + 4) != 0x100000000LL || !v7 || v6 < 0x14 )
  {
    inited = -1073741811;
    goto LABEL_36;
  }
  if ( v6 - 20 >= 2 )
    LODWORD(v8) = v6 - 20;
  v47 = (unsigned int)v8;
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
      v47 = (unsigned int)v8 >> 1;
      DeviceParent = CmGetDeviceParent(*(__int64 *)&PiPnpRtlCtx, (const WCHAR *)P[0], Pool2, &v47);
      v10 = v47;
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
              v51,
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
  v48 = 400LL;
  v46 = (char *)ExAllocatePool2(0x100uLL);
  v8 = v46;
  if ( !v46 )
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
  v36 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( !v36
    || (v37 = *v36) == 0LL
    || *(_WORD *)v37 != 3
    || (v38 = *(_QWORD *)(v37[39] + 40LL)) == 0
    || *(_QWORD **)(v38 + 32) != v37 )
  {
    KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = v46;
    inited = -1073741810;
    v7 = a3;
    goto LABEL_36;
  }
  ObfReferenceObjectWithTag(v37, 0x43706E50u);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  v32 = *(__int64 **)(v37[39] + 40LL);
  if ( !v32 || (v39 = *((_DWORD *)v32 + 75), v39 == 790) || v39 == 789 )
  {
    inited = -1073741810;
  }
  else
  {
    v40 = v12 - 1;
    if ( !v40 )
    {
      v32 = (__int64 *)v32[2];
      i = v37;
      goto LABEL_62;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      v43 = (__int64 *)v32[1];
      i = v37;
      v32 = v43;
      if ( !v43 )
        goto LABEL_62;
      v44 = *((_DWORD *)v43 + 99);
      if ( (v44 & 0x2000) == 0 || *((_DWORD *)v32 + 101) != 24 || (v44 & 0x1000) == 0 )
        goto LABEL_62;
      goto LABEL_81;
    }
    if ( v41 == 1 )
    {
LABEL_81:
      v32 = (__int64 *)*v32;
      for ( i = v37; v32; v32 = (__int64 *)*v32 )
      {
        v42 = *((_DWORD *)v32 + 99);
        if ( (v42 & 0x2000) == 0 )
          break;
        if ( *((_DWORD *)v32 + 101) != 24 )
          break;
        if ( (v42 & 0x1000) == 0 )
          break;
      }
LABEL_62:
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      while ( 1 )
      {
        if ( !v32 )
        {
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          inited = -1073741810;
          goto LABEL_53;
        }
        if ( v32[6] )
        {
          v24 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(v32 + 5, 1131441744LL);
          if ( v24 )
            break;
        }
        v32 = (__int64 *)*v32;
      }
      ObfDereferenceObjectWithTag(v24, 0x43706E50u);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v25 = *((unsigned __int16 *)v32 + 20);
      if ( (unsigned int)v25 >= 0x190 )
      {
        inited = -1073741789;
        v48 = (unsigned int)(v25 + 2);
      }
      else
      {
        memmove(v46, (const void *)v32[6], *((unsigned __int16 *)v32 + 20));
        LODWORD(v48) = v25;
        *(_WORD *)&v46[v25] = 0;
      }
      goto LABEL_53;
    }
    inited = -1073741811;
  }
  i = v37;
LABEL_53:
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfDereferenceObjectWithTag(i, 0x43706E50u);
  v8 = v46;
  if ( inited >= 0 )
  {
    v26 = v47;
    v27 = (unsigned __int64)v47 >> 1;
    if ( v27 )
    {
      v28 = 2147483646 - v27;
      v29 = Pool2;
      v30 = v46 - (char *)Pool2;
      do
      {
        if ( !(v28 + v27) )
          break;
        v31 = *(wchar_t *)((char *)Pool2 + v30);
        if ( !v31 )
          break;
        *Pool2++ = v31;
        --v27;
      }
      while ( v27 );
      v19 = Pool2 - 1;
      if ( v27 )
        v19 = Pool2;
      Pool2 = v29;
      v20 = v48;
      *v19 = 0;
      v21 = -2147483643;
      if ( v27 )
        v21 = 0;
      inited = v21;
      if ( v21 < 0 && v26 )
        *v29 = 0;
      if ( v21 == -2147483643 )
        inited = -1073741789;
    }
    else
    {
      v20 = v48;
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
  v22 = PiCMReturnBufferResultData((unsigned int)inited, (unsigned int)(2 * v10), 0LL, 0LL, 0, v51, v7, v6, a6);
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
