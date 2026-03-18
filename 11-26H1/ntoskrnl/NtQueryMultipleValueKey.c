/*
 * XREFs of NtQueryMultipleValueKey @ 0x14097D340
 * Callers:
 *     DifNtQueryMultipleValueKeyWrapper @ 0x140684640 (DifNtQueryMultipleValueKeyWrapper.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     CmpBounceContextCleanup @ 0x14097DA80 (CmpBounceContextCleanup.c)
 *     CmpCaptureKeyValueArray @ 0x14097DACC (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextStart @ 0x14097E7D0 (CmpBounceContextStart.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryMultipleValueKey(
        int a1,
        volatile void *a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v7; // r15
  __int64 v9; // r8
  unsigned int PreviousMode; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  int MultipleValueKey; // edi
  unsigned int v17; // eax
  int v18; // edi
  int ULongFromUser; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v21; // eax
  char *v22; // r13
  __int64 v23; // rcx
  unsigned int v25; // esi
  char *v26; // rcx
  __int64 v27; // rcx
  char v28; // [rsp+41h] [rbp-237h]
  char v29; // [rsp+42h] [rbp-236h]
  char v30; // [rsp+43h] [rbp-235h]
  unsigned int Length; // [rsp+44h] [rbp-234h] BYREF
  char Length_4; // [rsp+48h] [rbp-230h]
  volatile void *Address; // [rsp+50h] [rbp-228h]
  int v34[4]; // [rsp+58h] [rbp-220h] BYREF
  PVOID Object[3]; // [rsp+68h] [rbp-210h] BYREF
  unsigned int v36; // [rsp+80h] [rbp-1F8h]
  PVOID v37; // [rsp+88h] [rbp-1F0h] BYREF
  _QWORD v38[4]; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-1C8h]
  PPRIVILEGE_SET v40; // [rsp+B8h] [rbp-1C0h] BYREF
  PPRIVILEGE_SET v41; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-1B0h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-1A0h]
  _QWORD v44[3]; // [rsp+E0h] [rbp-198h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-180h]
  __int128 v46; // [rsp+100h] [rbp-178h]
  __int64 v47; // [rsp+110h] [rbp-168h]
  _KAFFINITY_EX v48; // [rsp+118h] [rbp-160h] BYREF

  v7 = a3;
  Address = a2;
  v38[2] = a2;
  v34[2] = a3;
  v38[3] = a5;
  memset(&v48, 0, 24);
  Length = 0;
  v34[0] = 0;
  v42 = 0LL;
  v43 = 0LL;
  memset_0(&v48.StaticBitmap[22], 0, 0x58uLL);
  memset(&v48.StaticBitmap[12], 0, 80);
  v39 = 0LL;
  v30 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)&v48.StaticBitmap[12], 0x20000uLL, v9);
    v30 = 1;
  }
  v28 = 0;
  v29 = 0;
  Object[0] = 0LL;
  memset_0(&v48.StaticBitmap[2], 0, 0x48uLL);
  v38[1] = v38;
  v38[0] = v38;
  CmpInitializeThreadInfo(&v48);
  v37 = 0LL;
  Object[1] = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Length_4 = CmpAcquireShutdownRundown(v12, v11);
  if ( !Length_4 )
  {
    MultipleValueKey = -1073741431;
    goto LABEL_70;
  }
  LOBYTE(v15) = PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(a1, 1, v14, v15, (__int64)Object, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_70;
  if ( CmpTraceRoutine && Object[0] )
    v39 = *((_QWORD *)Object[0] + 1);
  v17 = (_BYTE)PreviousMode ? RtlReadULongFromUser(a5) : *a5;
  Length = v17;
  if ( (_BYTE)PreviousMode )
  {
    if ( (unsigned int)v7 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    v18 = (int)Address;
    ProbeForWrite(Address, 24 * v7, 4u);
    if ( a6 )
    {
      ULongFromUser = RtlReadULongFromUser(a6);
      RtlWriteULongToUser(a6, ULongFromUser);
    }
    ProbeForWrite(a4, Length, 4u);
  }
  else
  {
    v18 = (int)Address;
  }
  LOBYTE(v14) = PreviousMode;
  MultipleValueKey = CmpCaptureKeyValueArray(v18, v7, v14, (unsigned int)&Object[1], (__int64)&v40, (__int64)&v41);
  if ( MultipleValueKey < 0 )
    goto LABEL_70;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v29 = 1;
  if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() )
  {
    *(_OWORD *)&v48.StaticBitmap[2] = *(_OWORD *)Object;
    LODWORD(v48.StaticBitmap[4]) = v7;
    v48.StaticBitmap[5] = (unsigned __int64)a4;
    v48.StaticBitmap[6] = (unsigned __int64)&Length;
    v48.StaticBitmap[7] = (unsigned __int64)a6;
    v21 = CmpCallCallBacksEx(9u, (__int64)&v48.StaticBitmap[2], 0LL, 1, 0x18u, (__int64)Object[0], (__int64)v38);
    if ( v21 < 0 )
    {
      MultipleValueKey = 0;
      if ( v21 != -1073740541 )
        MultipleValueKey = v21;
      goto LABEL_70;
    }
    v28 = 1;
  }
  MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(Object, PreviousMode, 1, &v37);
  if ( MultipleValueKey < 0
    || (MultipleValueKey = CmpBounceContextStart(&v48.StaticBitmap[22], a4, Length, PreviousMode, 4),
        MultipleValueKey < 0) )
  {
LABEL_70:
    v22 = (char *)Address;
    goto LABEL_34;
  }
  CmpAttachToRegistryProcess((PRKAPC_STATE)&v48.StaticBitmap[16]);
  MultipleValueKey = CmQueryMultipleValueKey(
                       Object[0],
                       (_DWORD)v37,
                       Object[1],
                       v7,
                       v48.StaticBitmap[23],
                       (__int64)&Length,
                       (__int64)v34);
  CmpDetachFromRegistryProcess(&v48.StaticBitmap[16]);
  if ( a6 )
  {
    if ( (_BYTE)PreviousMode )
      RtlWriteULongToUser(a6, v34[0]);
    else
      *a6 = v34[0];
  }
  if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
  {
    v14 = Length;
    v13 = v48.StaticBitmap[23];
    if ( v48.StaticBitmap[22] != v48.StaticBitmap[23] )
    {
      if ( (v48.StaticBitmap[24] & 2) != 0 )
        RtlCopyToUser((void *)v48.StaticBitmap[22], (void *)v48.StaticBitmap[23], Length);
      else
        RtlCopyVolatileMemory((void *)v48.StaticBitmap[22], (const void *)v48.StaticBitmap[23], Length);
    }
  }
  v22 = (char *)Address;
LABEL_34:
  if ( v37 )
    ObfDereferenceObject(v37);
  if ( v28 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v38[0] != v38 )
  {
    v46 = 0LL;
    v47 = 0LL;
    v44[0] = Object[0];
    v44[1] = (unsigned int)MultipleValueKey;
    v45 = (unsigned int)MultipleValueKey;
    v44[2] = &v48.StaticBitmap[2];
    CmpCallCallBacksEx(0x18u, (__int64)v44, 0LL, 0, 0x18u, (__int64)Object[0], (__int64)v38);
    MultipleValueKey = v45;
  }
  if ( Object[1] )
  {
    if ( (_BYTE)PreviousMode )
      RtlWriteULongToUser(a5, Length);
    else
      *a5 = Length;
    if ( ((MultipleValueKey + 0x80000000) & 0x80000000) != 0 || MultipleValueKey == -2147483643 )
    {
      v25 = 0;
      v36 = 0;
      while ( v25 < (unsigned int)v7 )
      {
        *((_QWORD *)&v42 + 1) = *((_QWORD *)Object[1] + 3 * v25 + 1);
        LODWORD(v43) = *((_DWORD *)Object[1] + 6 * v25 + 4);
        v26 = &v22[24 * v25 + 8];
        if ( (_BYTE)PreviousMode )
          RtlCopyToUser(v26, (char *)&v42 + 8, 0xCuLL);
        else
          RtlCopyVolatileMemory(v26, (char *)&v42 + 8, 0xCuLL);
        v36 = ++v25;
      }
    }
  }
  if ( v29 )
    KeLeaveCriticalRegion();
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  CmpBounceContextCleanup(&v48.StaticBitmap[22], v13, v14);
  if ( v30 && CmpTraceRoutine )
  {
    v27 = v39;
    LOBYTE(v27) = 19;
    guard_dispatch_icall_no_overrides(v27, (__int64)&v48.StaticBitmap[12]);
  }
  if ( Length_4 )
    CmpReleaseShutdownRundown(v23);
  if ( Object[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Object[1]);
  if ( v40 )
    CmSiFreeMemory(v40);
  if ( v41 )
    CmSiFreeMemory(v41);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v48);
  return (unsigned int)MultipleValueKey;
}
