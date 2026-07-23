/*
 * XREFs of NtRenameKey @ 0x140855BA0
 * Callers:
 *     DifNtRenameKeyWrapper @ 0x14068C8D0 (DifNtRenameKeyWrapper.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmDoVirtualTest @ 0x1404CE364 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmPostCallbackNotificationEx @ 0x1408D0300 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     CmpCaptureUnicodeStringBuffer @ 0x1408F8C10 (CmpCaptureUnicodeStringBuffer.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x14093FE00 (CmpDoesBufferRequireCapturing.c)
 *     CmpCaptureUnicodeString @ 0x140940730 (CmpCaptureUnicodeString.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB0548 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  struct _PRIVILEGE_SET *v4; // r12
  unsigned int PreviousMode; // r15d
  char v6; // r14
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  NTSTATUS v11; // ebx
  unsigned __int16 v12; // bx
  _WORD *v13; // r13
  int v14; // r8d
  int v15; // r9d
  __int64 TransientPoolWithQuota; // rax
  __int64 v17; // r8
  unsigned int i; // ecx
  int v19; // r13d
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  struct _KTHREAD *CurrentThread; // rax
  int v24; // r9d
  int v25; // eax
  __int64 v26; // r8
  PVOID v27; // rcx
  char v29; // [rsp+45h] [rbp-123h]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  int v31; // [rsp+58h] [rbp-110h] BYREF
  __int128 v32; // [rsp+60h] [rbp-108h] BYREF
  __int64 v33; // [rsp+78h] [rbp-F0h]
  _QWORD v34[2]; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v35; // [rsp+90h] [rbp-D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-C8h] BYREF
  _OWORD v37[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-88h]
  __int128 v39; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-68h] BYREF

  *(_QWORD *)&v35 = KeyHandle;
  v39 = 0LL;
  v40 = 0LL;
  v32 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v39);
  v3 = 0;
  Object = 0LL;
  v4 = 0LL;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v34[1] = v34;
  v34[0] = v34;
  v31 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = CmpAcquireShutdownRundown(v9, v8);
  if ( !v29 )
  {
    v11 = -1073741431;
    goto LABEL_38;
  }
  LOBYTE(v10) = PreviousMode;
  v11 = CmpCaptureUnicodeString(&v32, NewName, v10);
  if ( v11 < 0 )
  {
    v6 = 0;
    goto LABEL_38;
  }
  v12 = v32;
  if ( (unsigned __int16)(v32 - 1) > 0x1FFu )
  {
    v11 = -1073741811;
    v6 = 0;
    goto LABEL_38;
  }
  v13 = (_WORD *)*((_QWORD *)&v32 + 1);
  if ( (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, *((_QWORD *)&v32 + 1)) )
  {
    TransientPoolWithQuota = CmpAllocateTransientPoolWithQuota();
    v4 = (struct _PRIVILEGE_SET *)TransientPoolWithQuota;
    v33 = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v11 = -1073741670;
      v3 = 0;
      v6 = 0;
      goto LABEL_38;
    }
    LOBYTE(v17) = PreviousMode;
    CmpCaptureUnicodeStringBuffer(&v32, TransientPoolWithQuota, v17);
    v13 = (_WORD *)*((_QWORD *)&v32 + 1);
    v12 = v32;
  }
  if ( !*v13 )
  {
    v11 = -1073741811;
    v3 = 0;
    v6 = 0;
    goto LABEL_38;
  }
  for ( i = 0; i < v12 >> 1; ++i )
  {
    if ( v13[i] == 92 )
    {
      v11 = -1073741811;
LABEL_17:
      v3 = 0;
      v6 = 0;
      goto LABEL_38;
    }
  }
  LOBYTE(v15) = PreviousMode;
  v19 = v35;
  v11 = CmObReferenceObjectByHandle(v35, 131078, v14, v15, (__int64)&Object, 0LL);
  if ( v11 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v7 = 1;
    if ( !CmDoVirtualTest() )
      goto LABEL_20;
    LOBYTE(v22) = PreviousMode;
    v11 = CmObReferenceObjectByHandle(v19, 131097, v21, v22, (__int64)&Object, 0LL);
    if ( v11 < 0 )
      goto LABEL_17;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_20:
      v11 = -1073741790;
      goto LABEL_17;
    }
    v3 = 1;
    v6 = 1;
  }
  else
  {
    v3 = 1;
  }
  v7 = v6;
  if ( v11 < 0 )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() )
  {
    v3 = 0;
    goto LABEL_33;
  }
  *(_QWORD *)&v37[0] = Object;
  *((_QWORD *)&v37[0] + 1) = &v32;
  LOBYTE(v24) = 1;
  v25 = CmpCallCallBacksEx(4, (unsigned int)v37, 0, v24, 19, (__int64)Object, (__int64)v34);
  if ( v25 >= 0 )
  {
LABEL_33:
    if ( !v6
      || (LOBYTE(v20) = PreviousMode,
          v11 = CmKeyBodyReplicateToVirtual(&Object, v20, 131078LL, &SubjectContext, &v31),
          v11 >= 0) )
    {
      CmpAttachToRegistryProcess(&ApcState);
      v35 = v32;
      LOBYTE(v26) = PreviousMode;
      v11 = CmRenameKey(Object, &v35, v26);
      CmpDetachFromRegistryProcess(&ApcState);
      v7 = v6;
    }
    goto LABEL_37;
  }
  v11 = 0;
  if ( v25 != -1073740541 )
    v11 = v25;
  v3 = 0;
LABEL_37:
  v6 = 1;
LABEL_38:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v11 = CmPostCallbackNotificationEx(19, (_DWORD)Object, v11, (unsigned int)v37, 0LL, (__int64)v34);
  if ( v6 )
    KeLeaveCriticalRegion();
  v27 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v4 )
    CmSiFreeMemory(v4);
  if ( v29 )
    CmpReleaseShutdownRundown(v27);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v39);
  return v11;
}
