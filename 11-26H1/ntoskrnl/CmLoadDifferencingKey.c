/*
 * XREFs of CmLoadDifferencingKey @ 0x14093D400
 * Callers:
 *     NtLoadKey3 @ 0x140855240 (NtLoadKey3.c)
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 *     NtLoadKeyEx @ 0x14093D390 (NtLoadKeyEx.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     NtLoadKey2 @ 0x140B3AB00 (NtLoadKey2.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     CmpCaptureUnicodeStringBuffer @ 0x1408F8C10 (CmpCaptureUnicodeStringBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmReleaseLoadKeyContext @ 0x14093D270 (CmReleaseLoadKeyContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x14093D2D0 (ObDeleteCapturedInsertInfo.c)
 *     CmpTraceHiveLoadStop @ 0x14093E0A0 (CmpTraceHiveLoadStop.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmCheckNoTxContext @ 0x14093E920 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x14093E968 (CmpNameFromAttributes.c)
 *     CmConvertHandleToKernelHandle @ 0x14093EB94 (CmConvertHandleToKernelHandle.c)
 *     CmpTraceHiveLoadStart @ 0x14093EC40 (CmpTraceHiveLoadStart.c)
 *     CmpDoesBufferRequireCapturing @ 0x14093FE00 (CmpDoesBufferRequireCapturing.c)
 *     CmpCaptureUnicodeString @ 0x140940730 (CmpCaptureUnicodeString.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        void *Src,
        void *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        ACCESS_MASK DesiredAccess,
        HANDLE *a8,
        int a9,
        __int64 a10,
        char a11,
        void *a12,
        KPROCESSOR_MODE PreviousMode)
{
  PVOID v15; // r14
  struct _PRIVILEGE_SET *v16; // r12
  PVOID v17; // r13
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  int v20; // esi
  __int64 v21; // rdx
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  char v23; // bl
  PVOID v24; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v26; // rbx
  int Key; // eax
  int v28; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v30; // rdx
  PVOID v31; // rbx
  __int64 v33; // rcx
  char v34; // [rsp+60h] [rbp-3F8h]
  struct _KEVENT *v35; // [rsp+68h] [rbp-3F0h]
  char v36; // [rsp+70h] [rbp-3E8h]
  char v37; // [rsp+71h] [rbp-3E7h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-3E0h]
  char UnloadRundown; // [rsp+80h] [rbp-3D8h]
  PVOID Object; // [rsp+88h] [rbp-3D0h] BYREF
  int v41; // [rsp+90h] [rbp-3C8h]
  int v42; // [rsp+94h] [rbp-3C4h]
  HANDLE *v43; // [rsp+98h] [rbp-3C0h]
  PVOID v44; // [rsp+A0h] [rbp-3B8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp-3B0h] BYREF
  UNICODE_STRING *v46; // [rsp+B0h] [rbp-3A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-3A0h] BYREF
  PVOID v48; // [rsp+C8h] [rbp-390h] BYREF
  int v49; // [rsp+D4h] [rbp-384h]
  HANDLE Handle; // [rsp+D8h] [rbp-380h] BYREF
  PVOID v51; // [rsp+E0h] [rbp-378h]
  HANDLE v52[2]; // [rsp+E8h] [rbp-370h] BYREF
  unsigned int v53; // [rsp+F8h] [rbp-360h]
  _QWORD v54[2]; // [rsp+100h] [rbp-358h] BYREF
  UNICODE_STRING v55; // [rsp+110h] [rbp-348h] BYREF
  HANDLE v56[2]; // [rsp+120h] [rbp-338h] BYREF
  __int128 v57; // [rsp+130h] [rbp-328h] BYREF
  __int64 v58; // [rsp+140h] [rbp-318h]
  HANDLE v59[2]; // [rsp+148h] [rbp-310h] BYREF
  __int128 v60; // [rsp+158h] [rbp-300h]
  __int128 v61; // [rsp+168h] [rbp-2F0h]
  void *Srca; // [rsp+178h] [rbp-2E0h]
  __int64 v63; // [rsp+180h] [rbp-2D8h]
  __int64 v64; // [rsp+188h] [rbp-2D0h]
  _QWORD v65[3]; // [rsp+190h] [rbp-2C8h] BYREF
  __int64 v66; // [rsp+1A8h] [rbp-2B0h]
  __int128 v67; // [rsp+1B0h] [rbp-2A8h]
  __int64 v68; // [rsp+1C0h] [rbp-298h]
  _KAFFINITY_EX v69[2]; // [rsp+1C8h] [rbp-290h] BYREF

  Srca = a2;
  v53 = a3;
  v63 = a5;
  Object = a6;
  v43 = a8;
  v64 = a10;
  v56[0] = a12;
  memset(v69, 0, 24);
  *(_OWORD *)v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  DestinationString = 0LL;
  v55 = 0LL;
  v46 = 0LL;
  memset_0(&v69[0].StaticBitmap[14], 0, 0x1D0uLL);
  Handle = 0LL;
  v36 = 0;
  CmpInitializeThreadInfo(v69);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v37 = 0;
  RtlInitUnicodeString(&v55, 0LL);
  v44 = 0LL;
  BugCheckParameter4 = 0LL;
  v48 = 0LL;
  v52[0] = 0LL;
  v15 = 0LL;
  v35 = 0LL;
  v16 = 0LL;
  Privileges = 0LL;
  CmpInitializeParseContext(&v69[0].StaticBitmap[14]);
  v17 = 0LL;
  v51 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v20 = -1073741431;
    goto LABEL_106;
  }
  v34 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a10 && (a3 & 0xFFFF9EFF) != 0 )
    goto LABEL_108;
  if ( a11 )
  {
    if ( !a10 )
    {
      v20 = -1073741576;
      goto LABEL_121;
    }
    if ( (a3 & 0x4000) == 0 )
    {
LABEL_108:
      v20 = -1073741583;
LABEL_121:
      v23 = 0;
      goto LABEL_68;
    }
  }
  if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
  {
    v20 = -1073741583;
    goto LABEL_106;
  }
  v41 = a3 & 0x810;
  v20 = CmCheckNoTxContext();
  if ( v20 < 0 )
  {
LABEL_106:
    v23 = 0;
    goto LABEL_68;
  }
  v49 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v20 = -1073741727;
    goto LABEL_101;
  }
  if ( v41 )
  {
    if ( v43 )
    {
      if ( (a3 & 0x10) != 0 && (a3 & 0x444) != 0 )
      {
        v20 = -1073741583;
        goto LABEL_101;
      }
      goto LABEL_11;
    }
LABEL_122:
    v20 = -1073741579;
    goto LABEL_101;
  }
  if ( v43 )
    goto LABEL_122;
  if ( Object )
  {
    v20 = -1073741581;
    goto LABEL_101;
  }
LABEL_11:
  v20 = CmpNameFromAttributes(Srca);
  if ( v20 < 0 )
  {
LABEL_101:
    v16 = 0LL;
    v15 = 0LL;
    goto LABEL_106;
  }
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(v59, Src, 0x30uLL);
  }
  else
  {
    RtlCopyVolatileMemory(v59, Src, 0x30uLL);
  }
  if ( v41 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(v43, 0LL);
    else
      *v43 = 0LL;
  }
  if ( (a3 & 0x10) != 0 && v59[1] )
  {
    v20 = -1073741585;
    v42 = -1073741585;
    v15 = 0LL;
    v16 = 0LL;
    v23 = 0;
    goto LABEL_68;
  }
  LOBYTE(v18) = PreviousMode;
  v20 = CmpCaptureUnicodeString(&DestinationString, v60, v18);
  v42 = v20;
  if ( v20 < 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v23 = 0;
    goto LABEL_68;
  }
  if ( DestinationString.Length
    && (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)PreviousMode, DestinationString.Buffer) )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
    Privileges = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v20 = -1073741670;
      v42 = -1073741670;
      v15 = 0LL;
      v16 = 0LL;
      v23 = 0;
      goto LABEL_68;
    }
    CmpCaptureUnicodeStringBuffer(&DestinationString.Length, TransientPoolWithQuota, PreviousMode);
  }
  *(_QWORD *)&v60 = &DestinationString;
  *(_QWORD *)&v61 = 0LL;
  if ( v63 )
  {
    LOBYTE(v19) = PreviousMode;
    v20 = CmObReferenceObjectByHandle(v63, 0, v18, (_DWORD)v19, (__int64)&v44, 0LL);
    if ( v20 < 0 )
    {
      v15 = 0LL;
      v16 = Privileges;
      v23 = 0;
      goto LABEL_68;
    }
  }
  v24 = Object;
  if ( Object )
  {
    Object = 0LL;
    v20 = ObReferenceObjectByHandle(v24, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v35 = (struct _KEVENT *)Object;
    if ( v20 < 0 )
    {
      v15 = Object;
      goto LABEL_67;
    }
  }
  if ( v64 )
  {
    LOBYTE(v19) = PreviousMode;
    v20 = CmObReferenceObjectByHandle(v64, 0, v18, (_DWORD)v19, (__int64)&v48, 0LL);
    if ( v20 < 0 )
      goto LABEL_66;
  }
  if ( v56[0] )
  {
    Object = 0LL;
    v20 = ObReferenceObjectByHandle(v56[0], 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
    v17 = Object;
    v51 = Object;
    if ( v20 >= 0 )
    {
      if ( *((_DWORD *)Object + 48) == 2 )
        goto LABEL_35;
      v20 = -1073741656;
    }
LABEL_66:
    v15 = v35;
LABEL_67:
    v16 = Privileges;
    v23 = v34;
    goto LABEL_68;
  }
LABEL_35:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v37 = 1;
  LOBYTE(v18) = PreviousMode;
  v20 = CmConvertHandleToKernelHandle(v59[1], v21, v18, 131097LL, v52);
  if ( v20 < 0 )
    goto LABEL_66;
  v59[1] = v52[0];
  v26 = 0LL;
  memset_0(&v69[0].StaticBitmap[2], 0, 0x60uLL);
  v57 = 0LL;
  v58 = 0LL;
  v54[1] = v54;
  v54[0] = v54;
  if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() )
  {
    if ( v59[1] )
    {
      Object = 0LL;
      ObReferenceObjectByHandle(v59[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v26 = Object;
    }
    v69[0].StaticBitmap[12] = 2LL;
    v69[0].StaticBitmap[2] = (unsigned __int64)v26;
    v69[0].StaticBitmap[3] = (unsigned __int64)&DestinationString;
    v69[0].StaticBitmap[4] = (unsigned __int64)&v55;
    LODWORD(v69[0].StaticBitmap[5]) = a3;
    v69[0].StaticBitmap[6] = (unsigned __int64)v44;
    v69[0].StaticBitmap[7] = (unsigned __int64)v35;
    LODWORD(v69[0].StaticBitmap[8]) = DesiredAccess;
    v69[0].StaticBitmap[9] = (unsigned __int64)v43;
    v69[0].StaticBitmap[13] = (unsigned __int64)v17;
    *(_QWORD *)&v57 = &v69[0].StaticBitmap[2];
    *((_QWORD *)&v57 + 1) = v48;
    LOBYTE(v58) = a11;
    v20 = CmpCallCallBacksEx(0x20u, (__int64)&v69[0].StaticBitmap[2], (__int64)&v57, 1, 0x21u, 0LL, (__int64)v54);
  }
  if ( v20 < 0 )
  {
    if ( v20 == -1073740541 )
    {
      v20 = 0;
      v36 = 1;
    }
  }
  else
  {
    CmpTraceHiveLoadStart(&v55, a3);
    v34 = 1;
    if ( (a3 & 0x10) != 0 )
      Key = CmLoadAppKey(
              v59,
              &v55,
              a3,
              0LL,
              (__int64)v44,
              v35,
              (__int64)v17,
              PreviousMode,
              (__int64 *)&v46,
              &BugCheckParameter4);
    else
      Key = CmLoadKey(
              (unsigned int)v59,
              (unsigned int)&v55,
              a3,
              0,
              (__int64)v44,
              (__int64)v48,
              a11,
              (__int64)v35,
              (__int64)v17,
              PreviousMode,
              (__int64)&v46,
              (__int64)&BugCheckParameter4);
    v20 = Key;
    if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v54[0] != v54 )
    {
      v67 = 0LL;
      v68 = 0LL;
      v65[0] = v26;
      v65[1] = (unsigned int)v20;
      v66 = (unsigned int)v20;
      v65[2] = &v69[0].StaticBitmap[2];
      v56[0] = v65;
      v56[1] = &v57;
      CmpCallCallBacksEx(0x21u, (__int64)v65, (__int64)v56, 0, 0x21u, (__int64)v26, (__int64)v54);
      v20 = v66;
    }
  }
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( v44 )
  {
    ObfDereferenceObject(v44);
    v44 = 0LL;
  }
  if ( v20 < 0 || !v41 || v36 )
    goto LABEL_66;
  Object = 0LL;
  v28 = v69[0].StaticBitmap[14];
  if ( (a3 & 0x10) != 0 )
    v28 = 64;
  LODWORD(v69[0].StaticBitmap[14]) = v28;
  p_DestinationString = v46;
  if ( !v46 )
  {
    p_DestinationString = &DestinationString;
    v46 = &DestinationString;
  }
  v20 = ObReferenceObjectByName(
          (__int64)p_DestinationString,
          64,
          0LL,
          0,
          (__int64)CmKeyObjectType,
          0,
          (__int64)&v69[0].StaticBitmap[14],
          &Object);
  if ( v20 >= 0 )
  {
    v31 = Object;
    ObDeleteCapturedInsertInfo((__int64)Object, v30, v18);
    v20 = ObOpenObjectByPointer(
            v31,
            PreviousMode != 0 ? 64 : 576,
            0LL,
            DesiredAccess,
            (POBJECT_TYPE)CmKeyObjectType,
            PreviousMode,
            &Handle);
    ObfDereferenceObject(v31);
    if ( v20 >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(v43, (__int64)Handle);
      else
        *v43 = Handle;
    }
  }
  if ( BugCheckParameter4 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      CmReleaseLoadKeyContext(BugCheckParameter4, (unsigned int)v20, v18, v19);
    }
    else
    {
      CmpLockRegistry(BugCheckParameter4, v30, v18, v19);
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
      CmpUnlockRegistry(v33);
    }
    BugCheckParameter4 = 0LL;
  }
  if ( v20 >= 0 )
    goto LABEL_66;
  v15 = v35;
  v16 = Privileges;
  v23 = v34;
  if ( (a3 & 0x800) != 0 )
    v20 = 0;
LABEL_68:
  if ( BugCheckParameter4 )
    CmReleaseLoadKeyContext(BugCheckParameter4, (unsigned int)v20, v18, v19);
  if ( v46 && v46 != &DestinationString )
    CmpFreeTransientPoolWithTag(v46, 0x624E4D43u);
  if ( v52[0] )
    ZwClose(v52[0]);
  if ( v37 )
    KeLeaveCriticalRegion();
  if ( v17 )
    ObfDereferenceObject(v17);
  if ( v48 )
    ObfDereferenceObject(v48);
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( v44 )
    ObfDereferenceObject(v44);
  if ( v16 )
    CmSiFreeMemory(v16);
  if ( v55.Buffer )
    ExFreePoolWithTag(v55.Buffer, 0);
  CmpCleanupParseContext(&v69[0].StaticBitmap[14], 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( v23 )
    CmpTraceHiveLoadStop((unsigned int)v20);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v69);
  return (unsigned int)v20;
}
